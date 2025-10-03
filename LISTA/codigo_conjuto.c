#include <stdio.h>
#include <stdlib.h>

typedef struct elemento {
    int dado;
    struct elemento *prox;
}Elem;

typedef struct Elem *Lista;

Lista* cria_lista() {
    Lista *li = (Lista*) malloc (sizeof(Lista));
    if(li != NULL) {
        *li = NULL;
    }
    return li;
}

int insere_inicio(Lista *li, int dado) {
    if (li == NULL) 
        return 0;
    Elem *no = (Elem*) malloc (sizeof(Elem));
    no -> dado = dado;
    no -> prox = (*li);;
    *li = no;
    return 1;
}

int tamanho_lista(Lista *li) {
    if (li == NULL)
        return -1;
    int cont = 0;
    Elem* no = *li;
    while (no != NULL) {
        cont++;
        no = no -> prox;   
    }
    return cont;
}

int remover_inicio(Lista *li) {
    if (li == NULL)
        return 0;
    if ((*li) == NULL)
        return 0;
    Elem *no = *li;
    *li = no -> prox;
    free(no);
    return 1;
}

int insere_final(Lista *li, int dado) {
    if (li == NULL)
        return 0;
    Elem *no = (Elem*) malloc (sizeof(Elem));
    no -> dado = dado;
    no -> prox = NULL;
    if ((*li) == NULL) {
        *li = no;
    } else {
        Elem *aux = *li;
        while (aux -> prox != NULL) {
            aux = aux -> prox;
        }
        aux -> prox = no;
    }
    return 1;
}

void libera_lista(Lista *li) {
    if (li != NULL) {
        Elem *no;
        while (*li != NULL) {
            no = *li;
            *li = no -> prox;
            free(no);
        }
        free(li);
    }
}

// criar int main, add 3 elementos insere lista e printar o tamanho da lista
// casa : remove final, lista vazia, busca lista
int main(){
    Lista *li =cria_lista();
    insere_inicio(li, 10);
    insere_inicio(li, 20);
    insere_inicio(li, 30);
    printf("tamanho = %d\n", tamanho_lista(li));
    return 0;
}
