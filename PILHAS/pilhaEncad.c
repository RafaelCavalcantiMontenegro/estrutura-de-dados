#include <stdio.h>
#include <stdlib.h>

typedef struct elemento {
    int dado;
    struct elemento *prox;
}Elem;
typedef struct descritor {
    Elem *topo;
    int qtd;    
}Pilha;

Pilha* cria_pilha() {
    Pilha *pi = malloc(sizeof(Pilha));
    if (pi != NULL) {
        pi -> topo = NULL;
        pi -> qtd = 0;
    }
    return pi;
}

int insere_pilha(Pilha* pi, int x) {
    if (pi == NULL) return 0;
    Elem* No = malloc(sizeof(Elem));
    if (No == NULL) return 0;
    No -> dado = x;
    No -> prox = pi -> topo;
    pi -> topo = No;
    pi -> qtd++;
    return 1;
}

int remover_pilha(Pilha* pi) {
    if (pi == NULL || pi -> topo == NULL) return 0;
    Elem* No = pi -> topo;
    pi -> topo = No -> prox;
    free(No);
    pi -> qtd--;
    return 1;
}

int acessar_topo(Pilha* pi, int *x) {
    if (pi == NULL || pi -> topo == NULL) return 0;
    *x = pi -> topo -> dado;
    return 1;
}

int pilha_vazia(Pilha* pi) {
    if (pi == NULL || pi -> topo == NULL) return -1;
    return (pi -> qtd = 0);
}

int tamanho_pilha(Pilha* pi, int qtd) {
    if (pi == NULL || pi -> topo == NULL) return 0;
    return pi -> qtd;
}


int libera_pilha(Pilha* pi) {
    if (pi == NULL) return 0;
    Elem* No;
    while (pi -> topo != NULL) {
        No = pi -> topo;
        pi -> topo = No -> prox;
        free(No);
    }
    free(pi);
    return 1;
}

