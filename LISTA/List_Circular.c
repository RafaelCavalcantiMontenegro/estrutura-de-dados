#include <stdio.h>
#include <stdlib.h>

typedef struct elemento {
    int dado;
    struct elemento *prox;
}Elem;

typedef struct descritor {
    Elem *final;
    int qtd;
}Lista;

Lista* Cria_lista() {
    Lista *li = malloc(sizeof(Lista));
    if (li != NULL) {
        li-> final = NULL;
        li -> qtd = 0;
    }
    return li;
}

int insere_inicio(Lista* li, int x) {
    if(li = NULL)
        return 0;
    Elem* No =(Elem*)malloc(sizeof(Elem));
    if (No ==NULL) 
        return 0;
    No -> dado = x;
    if (li -> final == NULL) {
        No -> prox = No;
        li -> final = No;
    }else{
        No ->prox = li -> final -> prox;
        li  -> final -> prox = No;
    }
    li -> qtd++;
    return 1;
}

int insere_final(Lista* li, int x){
    if(li == NULL) return 0;
    Elem* No = malloc(sizeof(Elem));
    if (No == NULL) return 0;
    No -> dado = x;
    if (li -> final == NULL) {
        No -> prox = No; 
    }
    else{
        No -> prox = li -> final -> prox;
        li -> final -> prox = No;

    }
    li -> final = No;
    li -> qtd++;
    return 1;
}

int lista_vazia(Lista* li){
    if (li == NULL){
        return -1;  //se fosse 0, seria como se a lista existisse, mas já q nn existe, temos q fazer essa confimação
    }
    return (li -> qtd = 0);
}


int lista_tamanho(Lista* li) {
    if (li == NULL) {
        return -1;
    }
    return (li -> qtd);
}

int remover_inicio(Lista *li) {
    if (li == NULL || li -> final == NULL) return 0;
    Elem*No_inicio = li -> final -> prox;
    if (No_inicio == li -> final) {
        li -> final = NULL;
    }else {
        li -> final -> prox = No_inicio -> prox;
    }
    free(No_inicio);
    li -> qtd--;
    return 1;
}

int remover_final(Lista *li) {
    if (li == NULL || li -> final = NULL) return 0;
    Elem *No_final = li -> final;
    Elem *No_inicio = No_final -> prox;
    if (No_inicio == No_final) {
        li -> final = NULL;
    }else {
        Elem *aux =No_inicio;
        while (aux -> prox != No_final) {
            aux = aux -> prox;
        }
        aux -> prox = No_inicio;
        li -> final = aux;
    }
    free(No_final);
    li -> qtd--;
    return 1;
}