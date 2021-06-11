#include <iostream>
#include <string>
#include <sstream>
#include "LISTA.h"
using namespace std;

int main(){
    LISTA *List =new LISTA();
    ELEMENTO *Elem1= new ELEMENTO(12);
    ELEMENTO *Elem2= new ELEMENTO(22);
    ELEMENTO *Elem3= new ELEMENTO(32);
    ELEMENTO *Elem4= new ELEMENTO(42);
    ELEMENTO *Elem5= new ELEMENTO(52);
    ELEMENTO *Elem6= new ELEMENTO(62);
    cout<<*Elem1<<*Elem2<<endl;

    List->insertar(Elem1);
    List->insertar(Elem2);
    List->insertar(Elem3);
    List->insertar(Elem4);
    List->insertar(Elem5);
    List->insertar(Elem6);


    cout<<List->print()<<endl;
    List->remove(1);
    cout<<List->print()<<endl;
    List->remove(2);
    cout<<List->print()<<endl;
    List->remove(3);
    cout<<List->print()<<endl;

    return 0;
}
