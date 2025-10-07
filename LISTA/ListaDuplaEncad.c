#include <stdio.h>
#include <stdlib.h>

struct elemento {
    int dado;
    struct elemento *prox;
    struct elemento *ant;
};

typedef struct elemento Elem;

struct descritor {
    Elem *inicio;
    Elem *fim;
    int qtd;
};

typedef struct descritor Lista;

Lista* cria_lista() {
    Lista *li = malloc(sizeof(Lista));
    if (li != NULL) {
        li -> inicio = NULL;
        li -> fim = NULL;
        li -> qtd = 0;
    }
    return li;
}

int inserir_inicio(Lista *li, int valor) {
    if (li == NULL) 
        return 0;
    
    Elem *No = malloc(sizeof(Elem));
    if (No == NULL) 
    
        return 0;
    No -> dado = valor;
    No -> ant = NULL;
    if (li -> inicio != NULL)
        li -> inicio -> ant = No;
    else li -> fim = No;
    No -> prox = li -> inicio;
    li -> inicio = No;
    li -> qtd++;
    return li;
}

int tamanho_lista(Lista *li) {
    if (li == NULL)
        return -1;
    return li -> qtd;
}


int remove_inicio(Lista *li) {
    if (li == NULL || li -> inicio == NULL) 
        return 0;
    Elem *No = li -> inicio;
    li -> inicio = No -> prox;
    if (li ->inicio != NULL)
        li -> inicio -> ant = NULL;    
    else li -> fim = NULL;
    free(No);
    li -> qtd--;
    return 1;

}

int lista_vazia(Lista* li) {
    if (li == NULL)
        return -1;
    return (li -> qtd ==0) ;
}
int Busca_lista(Lista* li, int valor) {
    if (li == NULL)
        return 0;
    Elem *No = li -> inicio;
    while (No != NULL) {
        if (No -> dado == valor)
            return 1;
        No = No -> prox;
    }
    return 0;
}