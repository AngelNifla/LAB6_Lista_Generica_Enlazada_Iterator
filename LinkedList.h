#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include "Node.h"

class LinkedList
{
private:
    int size;
    Node *head;
public:
    LinkedList();
    LinkedList(int _size);
    void add_head(int _elem);
    void add_end(int _elem);
    void add_by_position(int _pos,int _elem);
    void insert_node_size(int _size);
    void modifi_by_position(int _pos,int _elem);
    void remove_by_position(int _pos);
    void print();


    void setsize(int _size){
        size = _size;
    }
    void sethead(Node* _head){
        head = _head;
    }
    int getsize() const{
        return size;
    }
    Node* gethead() const{
        return head;
    }
    ~LinkedList();
};

#endif  
 