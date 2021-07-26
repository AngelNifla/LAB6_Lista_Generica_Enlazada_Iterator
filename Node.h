#ifndef  __NODE_H__
#define  __NODE_H__


template<typename T>
class Node
{
private:
    T elem;
    Node *next;
public:
    Node();             //constructor principal
    Node(T _elem);    //constructor por parametro
    
    

    void modific(T _elem);    //funcion para imprimir un nodo

    void print();       //funcion para immprimir un nodo
    T get_elem(){
        return elem;
    };
    void set_elem(T _elem){
        elem = _elem;
    }
    void set_next(Node*_next){
        next = _next;
    }
    Node<T>* get_next(){
        return next;
    };

    //sobrecarga del operador (<<)
    friend std::ostream &operator <<(std::ostream &out,const Node<T> &C){
        out << "Nodo-> " << "Elemento: " << C.elem << " Siguiente: " << C.next <<"\n";
        return out;
    };

    ~Node();
};


#endif