#include "LinkedList.h"
#include "Node.cpp"
#include <iostream>

//constructor principal
template <typename T>
LinkedList<T>::LinkedList()
{
    size = NULL;
    head = NULL;
}

//funcion para iniciar e insertar nodos a la lista en base al tamaño requerido
template <typename T>
void LinkedList<T>::insert_node_size(int _size)
{
    for (int i = 0; i < _size; i++) {
        add_end("");    ////FALTA QUE FUNCIONE CON INT Y STRING, SIN CAMBIAR.
    }
}

//funcion para insertar un nodo al inicio de la lista
template<typename T>
void LinkedList<T>::add_head(T _elem)
{
    Node<T> *new_Node = new Node<T> (_elem);
    Node<T> *tempo = head;
 
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
template<typename T>
void LinkedList<T>::add_end(T _elem)
{
    Node<T> *new_node = new Node<T> (_elem);
    Node<T> *tem = head;
 
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
template <typename T>
void LinkedList<T>::add_by_position(int _pos,T _elem)
{
    
    Node<T> *New_node = new Node<T> (_elem);
    Node<T> *tempor = head;
    Node<T> *auxi;
 
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

// Modificar un nodo de la lista por pocision
template <typename T>
void LinkedList<T>::modifi_by_position(int _pos,T _elem)
{
    Node<T> *auxn = head;

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
template <typename T>
void LinkedList<T>::remove_by_position(int _pos)
{
    Node<T> *temp = head;
    Node<T> *temp1 = temp->get_next();
    Node<T> *auxi;
 
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
template <typename T>
void LinkedList<T>::print()
{
    Node<T> *auxp = head;
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
template <typename T>
std::ostream& operator << (std::ostream &o, const LinkedList<T> &_DA){
    Node<T> *auxso= _DA.gethead();

    for(int i=0; i<_DA.getsize(); i++){
		o << "Nodo-> " << "Elemento: " <<auxso->get_elem()<<" Siguiente: " << auxso->get_next() <<"\n";
        auxso = auxso->get_next();
	}
    
    return o;
}

//Destructor
template <typename T>
LinkedList<T>::~LinkedList()
{
    head->~Node();
    head = 0;
}