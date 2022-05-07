#include "lista.h"

int main() {
    Lista L;
    int size, max;

    printf("Tamanho da lista: ");
    scanf("%d", &size);

    FLVazia(&L, size);
    PreencherLista(&L, size);
    printf("\n");
    max = MaxSoma(&L);
    printf("A maxima soma desta lista eh: %d\n", max);

    return 0;
}