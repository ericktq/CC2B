#ifndef NODE_H
#define NODE_H
#include<iostream>
#include "lista.h"
using namespace std;


template <class T>
class Node{
    T valor;
    Node<T> *siguiente;
public:

    Node<T>(T dato){valor=dato,siguiente=NULL;}
    Node<T>(){valor=NULL,siguiente=NULL;}
    template<class> friend class lista;
    template<class> friend class iterador;

};

#endif // NODE_H
