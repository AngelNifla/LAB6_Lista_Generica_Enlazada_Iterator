#include "Node.h"

//constructor principal
Node::Node()
{
    elem = NULL;
    next = NULL;
}

//constructor por parametro
Node::Node(int _elem)
{
    elem = _elem;
    next = NULL;
}

//funcionpara modificar un nodo
void Node::modific(int _elem)
{
    elem = _elem;
}

//funcion para imprimir un nodo
void Node::print(){
        //cout << "Nodo-> " << "Elemento: " << elem << " Direcion: " << this << " Siguiente: " << next << endl;
        std::cout << elem << "-> ";;
}

//Destructor
Node::~Node()
{
    if (next){
        next->~Node();
    }
    delete this;
} 