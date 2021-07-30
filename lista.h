#ifndef LISTA_H
#define LISTA_H
#include<iostream>
#include "Node.h"
#include "iterador.h"
using namespace std;
template <typename T>
class lista;

template<typename T>
ostream& operator <<(ostream &salida1,const lista<T> & C);
template <class T>
class lista
{

    Node<T> *actual;
public:
    Node<T> *head;

    lista(){head=NULL,actual=NULL;}
    virtual void setHead(Node<T> *);
    virtual Node<T> *getHead()const;
    void insertar(T valor);
    void insertarpos(T valor,T pos);
    void eliminar(T n);
    void mostrar();
    void begin();
    void end();
    void push_back(T valor);
    void push_front(T valor);
    friend ostream& operator <<<>(ostream &salida1,const lista& C);


};
template <class T>
void lista<T>::setHead(Node<T> *Head){
head=Head;
}

template <class T>
Node<T> *lista<T>::getHead()const{
    return head;
}

template <class T>
void lista<T>::push_back(T v)
{
    Node<T> *nuevo=new Node<T>(v);
    if(head==NULL)
    {
        head=nuevo;
    }
    else{
        actual->siguiente=nuevo;
    }
    actual=nuevo;
}
template <class T>
void lista<T>::push_front(T v)
{
    Node<T> *nuevo=new Node<T>(v);
    if(head==NULL)
    {
        head=nuevo;
    }
    else{
        actual=nuevo;
    }
    actual=nuevo;
}
template <class T>
void lista<T>::mostrar()
{
    Node<T> *tmp=head;
    while(tmp)
    {
        cout<<tmp->valor<<" ";
        tmp=tmp->siguiente;

    }
    cout<<endl;

}

template <class T>
void lista<T>::begin()
{
        cout<<head->valor<<endl;

}

template <class T>
void lista<T>::end()
{
    Node<T> *tmp=head;

    while(tmp)
    {
        tmp=tmp->siguiente;
    }
    cout<<actual->valor<<endl;


}
template <class T>
void lista<T>::insertarpos(T v, T pos)
{
    Node<T> *nuevo=new Node<T>(v);
    Node<T> *tmp=head;
    if(pos==1)
    {
        nuevo->siguiente=head;
        head=nuevo;
    }
    else{
         for(int i=2;tmp!=NULL;i++){
            if(i==pos){
                nuevo->siguiente=tmp->siguiente;
                tmp->siguiente=nuevo;
            }
            tmp=tmp->siguiente;
        }
    }
}

template<typename T>
ostream& operator <<(ostream &salida1,const lista<T> & C){
    Node<T>* actual = C.head;
    salida1 <<" [ ";
    while(actual!=NULL){
        salida1 << actual->valor()<<" ";
        actual = actual->siguiente();
    }
     salida1 << "] ";
    return salida1;
}
#endif // LISTA_H
