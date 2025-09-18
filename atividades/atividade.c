#include <stdio.h>
#include <stdlib.h>
#include <atividade.h>

struct Cubo {
    float aresta;
};


Cubo* Cubo_Criar(float a) {
    struct Cubo* c = (struct Cubo*)malloc(sizeof(struct Cubo));
    c->aresta = a;
    return 0;
}


void Cubo_Destruir(Cubo* c){
    free(c);
};

float Cubo_Acessar(Cubo* c) {
    if (c == NULL) return -1;
    return c->aresta;
}

void Cubo_Atribuir(Cubo* c, float a) {
    if (c != NULL) {
        c->aresta = a;
    }
}

void Cubo_area(struct Cubo* c) {
    float area = 6 * (c->aresta * c->aresta);
    printf("Área do cubo: %.2f\n", area);
}




float Cubo_Volume(Cubo* c, float a) {
    float volume = a * a * a;
    printf("Volume do cubo: %.2f\n", volume);
}

