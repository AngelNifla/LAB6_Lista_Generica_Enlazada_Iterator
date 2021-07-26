#ifndef  __NODE_H__
#define  __NODE_H__


class Node
{
private:
    int elem;
    Node *next;
public:
    Node();             //constructor principal
    Node(int _elem);    //constructor pot parametro



    void modific(int _elem);    //funcion para imprimir un nodo

    void print();       //funcion para immprimir un nodo
    int get_elem(){
        return elem;
    };
    void set_elem(int _elem){
        elem = _elem;
    }
    void set_next(Node*_next){
        next = _next;
    }
    Node* get_next(){
        return next;
    };


    //sobrecarga del operador (<<)
    friend std::ostream &operator <<(std::ostream &out,const Node &C){
        out << "Nodo-> " << "Elemento: " << C.elem << " Siguiente: " << C.next <<"\n";
        return out;
    };

    ~Node();
};


#endif  