#include <stdio.h>
#include <stdlib.h>
#include "atividade.h"

struct Cubo {
    float aresta;
};


Cubo* Cubo_Criar(float a) {
    struct Cubo* c = (struct Cubo*)malloc(sizeof(struct Cubo));
    c->aresta = a;
    return c;
}


void Cubo_Destruir(Cubo* c){
    free(c);
};

float Cubo_Acessar(Cubo* c) {
    return c->aresta;
}

void Cubo_Atribuir(Cubo* c, float a) {
    if (c != NULL) {
        printf("Digite o novo valor da aresta do cubo: ");
        scanf("%f", &a);
        c->aresta = a;
    
    }
    
}

float Cubo_Area(struct Cubo* c) {
    float area = 6 * (c->aresta * c->aresta);
    return area;
}




float Cubo_Volume(Cubo* c) {
    float volume = c->aresta * c->aresta * c->aresta;
    return volume;
}

