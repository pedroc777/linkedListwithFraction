#include <iostream>
#include "lista.h"
#include "nodo.h"

using namespace std;

int main(){

    Lista lista;
    Fraccion fraccion;
    Fraccion fraccion2;
    inicializarlista(&lista);

    fraccion.numerador = 2;
    fraccion.denominador = 3;
    fraccion2.numerador = 5;
    fraccion2.denominador = 6;


    insertarinicio(&lista, fraccion);
    insertarinicio(&lista, fraccion2);
    imprimir(&lista);


    return 0;
}
