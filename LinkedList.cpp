#include "LinkedList.h"
#include "Node.cpp"
#include <iostream>

//constructor principal

LinkedList::LinkedList()
{
    size = NULL;
    head = NULL;
}

//funcion para iniciar e insertar nodos a la lista en base al tamaño requerido
void LinkedList::insert_node_size(int _size)
{
    for (int i = 0; i < _size; i++) {
        add_end(NULL);
    }
}

//funcion para insertar un nodo al inicio de la lista
void LinkedList::add_head(int _elem)
{
    Node *new_Node = new Node (_elem);
    Node *tempo = head;

    if (!head) {
        head = new_Node;
    } else {
        new_Node->set_next(head);
        head = new_Node;

        while (tempo) {
            tempo = tempo->get_next();
        }
    }
    size++;
}

//funcion para insertar un nodo al final de la lista
void LinkedList::add_end(int _elem)
{
    Node *new_node = new Node (_elem);
    Node *tem = head;

    if (!head) {
        head = new_node;
    } else {
        while (tem->get_next() != NULL) {
            tem = tem->get_next();
        }
        tem->set_next(new_node);
    }
    size++;
}

// insertar un nodo por posicion
void LinkedList::add_by_position(int _pos,int _elem)
{

    Node *New_node = new Node (_elem);
    Node *tempor = head;
    Node *auxi;

    if (head == NULL) {
        head = New_node;
        size++;
    }else if(_pos < 1 || _pos > size){
        std::cout << "Fuera de rango \n";
    }else if(_pos == 1){
        New_node->set_next(head);
        head = New_node;

        while (tempor) {
            tempor = tempor->get_next();
        }
        size++;
    }else{ 
        int i=1;
        while(i<_pos){
            auxi = tempor;
            tempor = tempor->get_next();
            i=i+1;    
        }
        auxi->set_next(New_node);
        auxi->get_next()->set_next(tempor);
        size++;
    }
}

// Modificar un nodo de la lista
void LinkedList::modifi_by_position(int _pos,int _elem)
{
    Node *auxn = head;

    if (_pos < 1 || _pos > size) {
        std::cout << "Fuera de rango \n";
    } else {
        for (int i = 0; i < _pos; i++) {
            if (i == (_pos-1)) {
                auxn->modific(_elem);
            }
            auxn = auxn->get_next();

        }
    }
}

// Eliminar un nodo por posicion
void LinkedList::remove_by_position(int _pos)
{
    Node *temp = head;
    Node *temp1 = temp->get_next();
    Node *auxi;

    if (head == NULL) {
        std::cout<<"\n LISTA VACIA! \n";
    }else if(_pos < 1 || _pos > size){
        std::cout << "Fuera de rango \n";
    }else if(_pos == 1){
        sethead(head->get_next());
        size--;
    }else{ 
        int i=1;
        while(i<_pos){
            auxi = temp;
            temp = temp->get_next();
            i=i+1;
        }
        auxi -> set_next( temp->get_next() );
        size--;
    }
}

//imprimir lista de nodos
void LinkedList::print()
{
    Node *auxp = head;
    if (!head) {
        std::cout << "La Lista está vacía \n";
    } else {
        while (auxp) {
            auxp->print();
            if (!auxp->get_next()) std::cout << "vacio";
                auxp = auxp->get_next();
        }
  }
  std::cout <<"\n\n";
}

//sobrecarga del operador (<<)
std::ostream& operator << (std::ostream &o, const LinkedList &_DA){
    Node *auxso= _DA.gethead();

    for(int i=0; i<_DA.getsize(); i++){
		o << "Nodo-> " << "Elemento: " <<auxso->get_elem()<<" Siguiente: " << auxso->get_next() <<"\n";
        auxso = auxso->get_next();
	}

    return o;
}

//Destructor
LinkedList::~LinkedList()
{
    head->~Node();
    head = 0;
} 