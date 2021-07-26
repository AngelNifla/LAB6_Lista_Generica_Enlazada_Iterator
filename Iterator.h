#ifndef __ITERATOR_H__
#define __ITERATOR_H__

#include "Node.h"
#include "LinkedList.h"

template<typename T>
class Iterator
{
private:
    Node<T> *Nodeit;
public:
    
    //Iterator(/* args */);
    //~Iterator();
    void operator =(Node<T>* node){
        Nodeit = node;
    };
    void operator ++(){
        Nodeit = Nodeit->get_next();
    };
    T operator *(){
        return Nodeit->get_elem();
    };
    bool operator ==(Node<T>* node){
        if(Nodeit == node){
            return true;
        };
        return false;
    };
    bool operator !=(Node<T>* node){
        if(Nodeit != node){
            return true;
        };
        return false;
    };

    Node<T>* get_nodeit(){
        return Nodeit;
    };

    void set_nodeit(Node<T>* node){
        Nodeit = node;
    };

    //sobrecarga del operador (<<)
    friend std::ostream &operator <<(std::ostream &cou,const Iterator<T> &I){
        cou << "Iterator: " << I.Nodeit->get_elem()<<"\n";
        return cou;
    };
    
};


#endif