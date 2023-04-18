#include <stdio.h>
#include "arbol.h"
#include <string.h>
#include <stdlib.h>

Lista* crear_lista(int largo_maximo_actual){
    Lista* nueva_lista = (Lista*) malloc(sizeof(Lista));
    nueva_lista->largomaximo = largo_maximo_actual;
    nueva_lista->largoactual = 0;
}

void insertar_lista(Lista* lista, Nodo* nodo){
    int len;
    if(lista->largoactual >= lista->largomaximo){
        len = sizeof(lista->arreglo) * 2;
        
    }
}

Nodo* crear_nodo(Nodo* padre, char* tipo, char* nombre){
    Nodo* nuevo_nodo = (Nodo*) malloc(sizeof(Nodo));
    nuevo_nodo->padre = padre;
    strcpy(nuevo_nodo->tipo, tipo, 64);
}