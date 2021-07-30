#ifndef ITERADOR_H
#define ITERADOR_H
#include <iostream>
#include "lista.h"
#include "Node.h"

template <class T>
class iterador{
public:
    Node<T> *posterior;

    iterador<T>(Node<T> *s){posterior=s;}
    template<class> friend class lista;
    void operator ++()
    {
        posterior=posterior->siguiente;
    }

    void operator ==(T valor)
    {
        if(posterior->valor==valor)
            cout<<"esta bien"<<endl;
        else
            cout<<"no esta igual"<<endl;

    }
    void operator !=(T valor)
    {
        if(posterior->valor!=valor)
            cout<<posterior->valor<<" es diferente de "<<valor<<endl;
        else
            cout<<"el valor es igual"<<endl;

    }

    bool recorrer()
    {
        if(posterior->siguiente !=NULL)
            //cout<<posterior->valor<<" ";

            return true;
        return false;

    }

    void next()
    {
        cout<<posterior->valor<<" ";

    }
};
#endif // ITERADOR_H
