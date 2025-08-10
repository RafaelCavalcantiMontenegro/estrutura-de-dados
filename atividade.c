#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[100];
    char email[50];
    char tel[20];

}Agenda;

int procurarContato(Agenda agenda1[50], int qtd, char contato[100]){
    for(int i = 0; i < qtd; i++){
        if(strcmpi(contato, agenda1[i].nome) == 0){
            return i;
        }
        if (strcmpi(contato, agenda1[i].nome) < 0) {
            break;
        }
        return -1;
    }
}

int cadastrarContato(Agenda agenda1[50], int qtd, char novoNome[100]) {
    // 1. Verificar se a agenda está cheia
    if (qtd >= 50) {
        printf("Agenda cheia! Nao e possivel adicionar.\n");
        return qtd;
    }

    // 2. Solicitar os dados restantes ao usuário
    char novoEmail[50];
    char novoTel[20];

    printf("Digite o email: ");
    scanf("%49s", novoEmail);  // Limita a leitura a 49 caracteres

    printf("Digite o telefone: ");
    scanf("%19s", novoTel);    // Limita a leitura a 19 caracteres

    // 3. Encontrar posição de inserção ordenada
    int pos = qtd;  // Posição padrão: final da lista
    for (int i = 0; i < qtd; i++) {
        int cmp = strcmp(novoNome, agenda1[i].nome);

        // Verificar duplicata
        if (cmp == 0) {
            printf("Erro: Contato ja existe!\n");
            return qtd;
        }

        // Encontrar ponto de inserção
        if (cmp < 0) {
            pos = i;
            break;
        }
    }

    // 4. Deslocar contatos para abrir espaço
    for (int i = qtd; i > pos; i--) {
        agenda1[i] = agenda1[i - 1];
    }

    // 5. Inserir novo contato
    strcpy(agenda1[pos].nome, novoNome);
    strcpy(agenda1[pos].email, novoEmail);
    strcpy(agenda1[pos].tel, novoTel);

    printf("Contato cadastrado com sucesso!\n");
    return qtd + 1;  // Retorna nova quantidade de contatos
}
void dados_contato(Agenda agenda1[50], int qtd, char contato_desejado[100]) {
    // Usar a função de busca requerida pelo enunciado
    int pos = procurarContato(agenda1, qtd, contato_desejado);

    if (pos != -1) {
        printf("Email: %s\nTelefone: %s\n", agenda1[pos].email, agenda1[pos].tel);
    } else {
        printf("Contato nao encontrado.\n");
    }
}

void alterarContato(Agenda agenda1[50], int qtd, char contato_desejado[100]) {
    int pos = procurarContato(agenda1, qtd, contato_desejado);

    if (pos != -1) {
        printf("Alterando contato: %s\n", agenda1[pos].nome);
        printf("Novo email: ");
        scanf("%49s", agenda1[pos].email);

        printf("Novo telefone: ");
        scanf("%19s", agenda1[pos].tel);

        printf("Alteracoes efetivadas.\n");
    } else {
        printf("Contato nao encontrado.\n");
    }
}


// 6. exibir detalhes
void exibir(Agenda agenda1[50], int qtd, char contato[100]) {
    for (int i = 0; i < 50; i ++) {
        printf("nome  %d:%s\n",i, agenda1[i].nome);
        printf("email  %d:%s\n",i,agenda1[i].email);
        printf("telefone  %d:%s\n\n\n",i,agenda1[i].tel);
    }
}