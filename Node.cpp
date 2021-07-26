#include "Node.h"

//constructor principal
template <typename T>
Node<T>::Node()
{
    elem = NULL;
    next = NULL;
}

//constructor por parametro
template <typename T>
Node<T>::Node(T _elem)
{
    elem = _elem;
    next = NULL;
}

//funcionpara modificar un nodo
template <typename T>
void Node<T>::modific(T _elem)
{
    elem = _elem;
}

//funcion para imprimir un nodo
template <typename T>
void Node<T>::print(){
        //cout << "Nodo-> " << "Elemento: " << elem << " Direcion: " << this << " Siguiente: " << next << endl;
        std::cout << elem << "-> ";;
}

//Destructor
template <typename T>
Node<T>::~Node()
{
    if (next){
        next->~Node();
    }
    delete this;
}