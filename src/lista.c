#include "lista.h"

void FLVazia(Lista *lista, int size) {
    lista->vet = (Item*)malloc(size * sizeof(Item));
    lista->Primeiro = 0;
    lista->Ultimo = 0;
}

void Imprime(Lista *lista) {
    if(lista->Primeiro == lista->Ultimo) {
        printf("LISTA VAZIA!\n");
        return;
    }
    for(int i=0; i<lista->Ultimo; i++) {
        printf("%d ", lista->vet[i].value);
    }
}

bool Insere(Lista *lista, Item d, int size) {
    if(lista->Ultimo >= size) {
        printf("LISTA CHEIA!\n");
        return false;
    } 

	lista->vet[lista->Ultimo] = d;
	lista->Ultimo++;
    return true;
}

bool Remove(Lista *lista, Item *d) {
    bool ok = false;
    int aux;

    if(lista->Primeiro == lista->Ultimo) {
        printf("LISTA VAZIA!\n");
        return false;
    }
    
    for(int i=(lista->Ultimo-1); i>=0; i--){
        if(lista->vet[i].value == d->value) {
            aux = i;
            ok = true;
            i = -1;
        }
    }

    if(ok){
        for(int i=aux; i<=lista->Ultimo; i++) {
            lista->vet[i] = lista->vet[i+1];
        }
        lista->Ultimo--;
    }
    
    return ok;
}

void PreencherLista(Lista *l, int size) {
    int n;
    Item aux;

    for(int i=0; i<size; i++) {
        printf("\nValor da posição %d da lista: ", i+1);
        scanf("%d", &n);

        aux.value = n;
        Insere(l, aux, size);
    }
}

int MaxSoma(Lista *l) {
    int max = l->vet[0].value;
    int soma;

    for(int i=1; i<l->Ultimo; i++) {
        soma = 0;
        for(int j=i; j>0; j--) {
            soma += l->vet[j].value;
            if(max < soma) {
                max = soma;
            }
        }
    }

    return max;
}