#include "LISTA.h"

LISTA::LISTA(){
    Head = NULL;
    Size = 0;
}

void LISTA::insert(ELEMENTO *elem){
    Head = new NODO(elem, Head);
}
void LISTA::insertar(ELEMENTO *elem){
    NODO *aux = Head;
    NODO *nuevo;
    if(aux ==NULL){
        insert(elem);
    }
    else{
        while(aux->getSiguiente()!= NULL){
            aux = aux->getSiguiente();
        }
        nuevo = new NODO(elem, NULL);
        aux->setSiguiente(nuevo);
    }
}
string LISTA::print(){
    NODO *p = Head;
    stringstream s;
    while(p != NULL){
        s<<p->getElemento()->toString();
        p = p->getSiguiente();
    }
    return s.str();
}
void LISTA::remove(int n){
    NODO *pos= Head;
    NODO *aux;
    int x = 1;
    if (pos != NULL){
        if( n == 1){
            Head = pos->getSiguiente();
        }else{
            while(x < n && pos->getSiguiente() != NULL){
                 aux = pos;
                 pos = pos->getSiguiente();
                 x++;
            }
            aux->setSiguiente(pos->getSiguiente());
        }
        delete pos;
    }
}
LISTA::~LISTA(){
    NODO *p = Head;
    NODO *ac;
    while(p != NULL){
        ac = p->getSiguiente();
        delete p;
        p = ac;
    }
    Head = NULL;
}
