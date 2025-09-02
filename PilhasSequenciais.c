#include <stdio.h>
#include <stdlib.h>
#include "PilhasSequenciais.h" // Inclui o arquivo de cabeçalho com as definições da pilha

struct pilha {
    int qtd;
    struct aluno dados[MAX];
};

Pilha* cria_Pilha() {
    Pilha *pi = (Pilha *)malloc(sizeof(struct pilha));
    if (pi != NULL) {
        pi->qtd = 0; // Inicializa a quantidade de elementos na pilha como 0
    }
    return pi;
}

void libera_Pilha(Pilha *pi) {
    free(pi); // Libera a memória alocada para a pilha
}

int tamanho_Pilha(Pilha* pi) {
    if(pi ==NULL) {
        return -1;
    } else {
        return pi->qtd; // Retorna a quantidade de elementos na pilha
    }
}

int pilha_cheia(Pilha* pi) {
    if(pi == NULL) {
        return -1;

    }
    return (pi -> qtd = MAX); //retorna o tamanho maximo da pilha
}
int pilha_vazia(Pilha* pi) {
    if(pi == NULL) {
        return -1;
    }
    return (pi->qtd == 0); // Retorna 1 se a pilha estiver vazia, caso contrário retorna 0
}
int insere_pilha(Pilha *pi, struct aluno al) {
    if(pi == NULL) {
        return 0;
    }
    if(pi -> qtd == MAX) {
        return 0;
    }
    pi->dados[pi->qtd] = al; // Insere o elemento no topo da pilha
    pi->qtd++; // Incrementa a quantidade de elementos na pilha
    return 1; // Retorna 1 para indicar sucesso na inserção
}
int remove_Pilha(Pilha* pi) {
    if(pi == NULL) {
        return 0;
    }
    if(pi -> qtd == 0) {
        return 0;
    }
    pi->qtd--; // Decrementa a quantidade de elementos na pilha, removendo o elemento do topo
    return 1; // Retorna 1 para indicar sucesso na remoção
}

int acessa_topo_Pilha(Pilha *pi, struct aluno *al) {
    if(pi == NULL || pi->qtd == 0) {
        return 0;
    }
    *al = pi->dados[pi->qtd - 1]; // Acessa o elemento no topo da pilha
    return 1; // Retorna 1 para indicar sucesso na operação
}