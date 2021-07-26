#include <iostream>
#include "LinkedList.h"
#include "LinkedList.cpp"

using namespace std;
 
int main()
{
    
    //creando nodo generico
    Node<string> N1("hola");
    //creando iteradores genericos
    Iterator<int> it;
    Iterator<string> it2;
    cout<<N1<<endl;
    //creando listas genericas
    LinkedList<int> L0;
    LinkedList<string> L1;

    //creando lista y asignando valores
    L0.add_head(8);
    L0.add_end(12);
    L0.add_end(20);

    L1.add_head("hola");
    L1.add_end("dia");
    L1.add_end("noche");
    L1.add_end("bye");

    //probando las sobrecargas del iterador
    it = L0.begin();  //probando la sobrecarga del operador(=)
    ++it;  //probando la sobrecarga del operador(++)
    if(it != L0.begin()){ //probando la sobrecarga del operador(!=)
        cout<<*it<<endl;  //probando la sobrecarga del operador(*)
    }

    it2 = L1.end();    //probando la sobrecarga del operador(=)
    if(it2 == L1.end()){ //probando la sobrecarga del operador(==)
        cout<<*it2<<endl; //probando la sobrecarga del operador(*)
    }

    //mostrando resultado de sbrecarga de (<<)
    cout<<L0<<endl;
    cout<<L1<<endl;
    /*
    cout<<"primer y ultimo nodo de la lista L0: "<<endl;
    cout<<*(L0.begin())<<endl;
    cout<<*(L0.end())<<endl;
    cout<<"primer y ultimo nodo de la lista L1: "<<endl;
    cout<<*(L1.begin())<<endl;
    cout<<*(L1.end())<<endl;

    cout<<" lista L0: "<<endl;
    cout<<L0<<endl;
    cout<<" lista L1: "<<endl;
    cout<<L1<<endl;

    L0.print();
    L1.print();


*/
/*    
    LinkedList<string> L1;

    string elem;
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
 

    */
    return 0;
}