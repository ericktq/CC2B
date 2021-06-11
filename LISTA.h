#ifndef LISTA_H
#define LISTA_H
#include "NODO.h"

class LISTA
{
    public:
        LISTA();
        void insert(ELEMENTO *);
        void insertar(ELEMENTO *);
        string print();
        void remove(int);

        ~LISTA();

    private:
        int Size;
        NODO *Head;


};

#endif // LISTA_H
