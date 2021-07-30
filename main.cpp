#include<iostream>
#include "lista.h"
#include "Node.h"
#include "iterador.h"
using namespace std;

int main()
{   cout<<"----------------lista int----------"<<endl;
    lista<int> list1;
    list1.push_back(5);
    list1.push_back(200);
    list1.push_back(115);
    list1.mostrar();
    list1.insertarpos(14,2);
    list1.push_back(4);
    list1.mostrar();
    list1.begin();
    list1.end();
    iterador<int> t1(list1.head);

    t1==12;
    t1!=5;
    while(t1.recorrer()==true){
        t1.next();
        ++t1;
    }

    cout<<"\n-------------lista char-------------"<<endl;
    lista<char> list2;
    list2.push_back('a');
    list2.push_back('d');
    list2.push_back('e');
    list2.mostrar();
    list2.insertarpos('f',1);
    list2.mostrar();
    iterador<char> t2(list2.head);

    t2=='f';
    t2!='r';
    while(t2.recorrer()){
        t2.next();
        ++t2;
    }

}

