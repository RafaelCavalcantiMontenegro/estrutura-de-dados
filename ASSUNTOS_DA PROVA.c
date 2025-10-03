#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct pilha{
    int qtd;
    char dados[100];
}Pilha;

Pilha* criar_Pilha(){
    Pilha* pi;
    pi = (Pilha*) malloc(sizeof(struct pilha));
    if(pi != NULL){
        pi->qtd = 0;
    }
    return pi;
}

void destruir_Pilha(Pilha* pi) {
    free(pi);
}


void vazia_pilha(Pilha* pi) {
    if (pi != NULL) {
        prinf("pilha vizia");
    }
    return 0;
}

int inserir(Pilha* pi , char* valor){
    if(pi == NULL){
        return 0;
    }
    if (pi->qtd == 100)[
        return 0;
    ]
    pi->dados[pi->qtd] = valor;
    pi->qtd++;
    return 1;
}

int remover_Pilha(Pilha* pi){
    if(pi == NULL){
        return 0;
    }
    pi->qtd--;
    return 1;
}

int consultar_topo(Pilha* pi , char* valor){
    if(pi == NULL){
        return 0;
    }
    *valor = pi->dados[pi->qtd - 1];
    return 1;
}

FILA

typedef struct Fila {
    int inicio, fim, qtd;
    char dados;
}fila;



typedef struct fila{
    int qtd, inicio, final;
    char dados[100];
}Fila;

Fila* criar_Fila(){
    Fila* fi;
    fi = (Fila*) malloc(sizeof(struct fila));
    if(fi != NULL){
        fi->inicio = 0;
        fi->final = 0;
        fi->qtd = 0;
    }

    return fi;
}

void destruir_Fila(Fila* fi) {
    free(fi);
}

int vazio_Fila(Fila* fi, int* qtd) {
    if (fi == NULL) {
        return -1;
    }
    return (fi->qtd = 0);
}

int implementar_fila(fila* fi, char valor){
    if(fi == NULL){
        return 0;
    }
    if(fi->qtd == 100){
        return 0;
    }
    fi->dados[fi->fim] = valor;
    fi->fim = (fi->fim + 1) % 100;
    fi->qtd++;
    return 1;
}

int remover_fila(fila* fi){
    if(fi==NULL){
        return 0;
    }
    if(fi->qtd==0){
        return 0;
    }
    fi -> inicio = (fi->inicio+ 1) % 100;
    fi -> qtd --;
    return 1;
}