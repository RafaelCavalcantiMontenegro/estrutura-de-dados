#include <stdio.h>
#include <stdlib.h>

typedef struct elemento {
    int dado;
    struct elemento *prox;
} Elemento;

typedef struct descritor {
    Elemento *inicio;
    Elemento *fim;
    int qtd;
} Fila;

Fila* criarFila() {
    Fila *fi = (Fila *)malloc(sizeof(Fila));
    fi->inicio = NULL;
    fi->fim = NULL;
    fi->qtd = 0;
    return fi;
}

int inserir(Fila *fi, int valor) {
    if(fi == NULL) return 0;
    Elemento *novo = (Elemento *)malloc(sizeof(Elemento));
    if(novo == NULL) return 0;
    novo->dado = valor;
    novo->prox = NULL;
    if(fi->fim == NULL) {
        fi->inicio = novo;
    } else {
        fi->fim->prox = novo;
    }   
    fi->fim = novo;
    fi->qtd++;

    return 1;
}

int remover(Fila *fi) {
    if(fi == NULL || fi->inicio == NULL) return 0;
    Elemento *temp = fi->inicio;
    fi->inicio = fi->inicio->prox;
    if(fi->inicio == NULL) {
        fi->fim = NULL;
    }
    free(temp);
    fi->qtd--;

    return 1;
}

int consultar(Fila *fi, int *valor) {
    if(fi == NULL || fi->inicio == NULL) return 0;
    *valor = fi->inicio->dado;
    return 1;
}

void liberafila(Fila *fi) {
    if (fi == NULL || fi -> inicio == NULL) return 0;
    Elemento *No = fi -> inicio;
    Elemento *aux = No -> prox;
    while (No != NULL){
        Elemento *aux = No -> prox;
        free(No);
        No = aux;
    }
    free(fi);
    return 1;
}

int tamanho (Fila *fi) {
    if (fi == NULL || fi -> inicio == NULL) return -1;
    return (fi -> qtd);
}

int filaVazia (Fila *fi) {
    if (fi == NULL) return 0;

}

void imprimir(Fila *fi) {
    
}

int main () {
    Fila *fi;
    int valor;
    criarFila();
    inserir(fi, 5);
    remove(fi)

}





