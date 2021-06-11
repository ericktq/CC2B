#ifndef NODO_H
#define NODO_H
#include "ELEMENTO.h"

class NODO
{
    public:
        NODO();
        NODO(ELEMENTO *,NODO *);
        void setElemento (ELEMENTO *);
        void setSiguiente (NODO *);
        NODO *getSiguiente();
        ELEMENTO *getElemento();
        ~NODO();
    private:
        ELEMENTO *Elem;
        NODO *Sig;
};

#endif // NODO_H

