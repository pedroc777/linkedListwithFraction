#include <iostream>
#include "lista.h"
#include "nodo.h"
#include "fraccion.h"

void inicializarlista(Lista *lista){
    lista -> cabeza = NULL;
    lista -> longitud = 0;

}



int esVacia(Lista *lista){

    if (lista -> cabeza == NULL){
        return 1;
    }
    else{
        return 0;
    }

}


using namespace std;





void insertarinicio(Lista *lista, Fraccion elementoNuevo){

    if (esVacia(lista) == 1){
        Nodo *nuevoNodo = new Nodo();
        nuevoNodo -> valor = elementoNuevo;
        nuevoNodo -> siguiente = NULL;
        lista -> cabeza = nuevoNodo;
    }
    else{
        Nodo *nuevoNodo = new Nodo();
        nuevoNodo -> valor = elementoNuevo;
        nuevoNodo -> siguiente = lista -> cabeza;
        lista -> cabeza = nuevoNodo;
    }
    lista -> longitud = lista -> longitud + 1;


}


void imprimir(Lista *lista){

    Nodo *nodoActual;
    nodoActual = lista -> cabeza;

    while (nodoActual != NULL){
        cout << nodoActual -> valor.numerador << "/"
        << nodoActual -> valor.denominador  << endl;
        nodoActual = nodoActual -> siguiente;
    }

    cout << endl;
}

void eliminarinicio(Lista* lista){

    if (esVacia(lista)){
        cout << "Lista vacia";
    }
    else{
        lista -> cabeza = lista -> cabeza -> siguiente;
        lista -> longitud = lista -> longitud - 1;
    }
}

