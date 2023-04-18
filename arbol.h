#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    struct Nodo* padre;
    char tipo[64];
    void* contenido;
} Nodo;

typedef struct{
    int largoactual;
    int largomaximo;
    Nodo* arreglo;
} Lista;

typedef struct{
    char nombre[128];
    Lista* hijos;
} Directorio;

typedef struct{
    char nombre[128];
    char contenido[256];
} Archivo;

Lista* crear_lista(int largo_maximo_inicial);

void insertar_lista(Lista* lista, Nodo* nodo);

Nodo* crear_nodo(Nodo* padre, char* tipo, char* nombre);

void touch(Nodo* actual, char* nombre_archivo);

void ls(Nodo* actual);

