#define MAX 100


struct aluno {
    int matricula;
    char nome[30];
    float n1, n2, n3;
};

typedef struct pilha Pilha;

Pilha *cria_Pilha();

void libera_Pilha(Pilha *pi); // retorna uma pilha vazia

int acessa_topo_Pilha(Pilha *pi, struct aluno *al);
int insere_Pilha(Pilha *pi, struct aluno al);
int remove_Pilha(Pilha *pi);
int tamanho_Pilha(Pilha *pi); //retorna o tamanho da pilha
int pilha_vazia(Pilha *pi); //retorna 1 se a pilha estiver vazia e 0 caso contrario
int pilha_cheia(Pilha *pi);