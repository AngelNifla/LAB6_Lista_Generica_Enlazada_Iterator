#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include "Node.h"

template <typename T>
class LinkedList
{
private:
    int size;
    Node<T> *head;
public:
    LinkedList();
    LinkedList(int _size);
    void add_head(T _elem);
    void add_end(T _elem);
    void add_by_position(int _pos,T _elem);
    void insert_node_size(int _size);
    void modifi_by_position(int _pos,T _elem);
    void remove_by_position(int _pos);
    void print();
    
    void setsize(int _size){
        size = _size;
    }
    void sethead(Node<T>* _head){
        head = _head;
    }
    int getsize() const{
        return size;
    }
    Node<T>* gethead() const{
        return head;
    }
    ~LinkedList();
};

#endif
 