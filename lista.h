#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"
#include "fraccion.h"

struct Lista{

    Nodo *cabeza;
    int longitud;

};

void inicializarlista(Lista *);
int esVacia(Lista *);
void insertarinicio(Lista*, Fraccion);
void imprimir(Lista*);
void eliminarinicio(Lista*);

#endif // LISTA_H
