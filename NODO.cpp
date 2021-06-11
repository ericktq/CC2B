#include "NODO.h"

NODO::NODO(){
    Elem = NULL;
    Sig = NULL;
}
NODO::NODO(ELEMENTO *elem, NODO *sig){
    Elem = elem;
    Sig = sig;

}
void NODO::setElemento (ELEMENTO *elem){
    Elem = elem;
};
void NODO::setSiguiente (NODO *sig){
    Sig = sig;
}
NODO *NODO::getSiguiente(){
    return Sig;
}
ELEMENTO *NODO::getElemento(){
    return Elem;
}
NODO::~NODO(){

}
