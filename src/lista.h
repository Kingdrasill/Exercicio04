#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct Item Item;
typedef struct Lista Lista;

struct Item
{
    int value;
};

struct Lista
{
    Item *vet;
    int Primeiro;
    int Ultimo;
};

void FLVazia(Lista *lista, int size);

void Imprime(Lista *lista);

bool Insere(Lista *lista, Item d, int size);

bool Remove(Lista *lista, Item *d);

void PreencherLista(Lista *l, int size);

int MaxSoma(Lista *l);