#include <iostream>
#include "LinkedList.h"
#include "LinkedList.cpp"

using namespace std;

int main()
{
    /*
    Node N1(15);
    cout<<N1<<endl;
    LinkedList L0;
    L0.insert_node(8);
    L0.insert_node(12);
    cout<<L0<<endl;
     */ 
    LinkedList L1;

    int elem;
    int size;
    int pos;

    L1.print();
    cout << "Ingresa la dimension de la lista: " << endl;
    cin >> size;

    L1.insert_node_size(size);

    cout << "Lista Inicial" << endl;
    L1.print();

    cout << "Agrega un elemento al inicio de lista: " << endl;
    cin >> elem;
    L1.add_head(elem);
    L1.print();

    cout << "Agrega un elemento al final de lista: " << endl;
    cin >> elem;
    L1.add_end(elem);
    L1.print();

    cout << "Agregar un elemento a la lista: " << endl;
    cout << "posicion del elemento: ";
    cin >> pos;
    cout << "elemento nuevo: ";
    cin>> elem;
    L1.add_by_position(pos,elem);
    L1.print();

    cout << "modificar un elemento de la lista: " << endl;
    cout << "posicion del elemento: ";
    cin >> pos;
    cout << "elemento nuevo: ";
    cin>> elem;
    L1.modifi_by_position(pos,elem);
    L1.print();

    cout << "Elimina un elemento por posicion: " << endl;
    cin >> pos;
    L1.remove_by_position(pos);
    L1.print();

    return 0;
}  