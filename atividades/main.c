#include <stdio.h>
#include "atividade.h"

int main() {
    float a;
    printf("Digite o valor da aresta do cubo: ");
    scanf("%f", &a);
    Cubo* c = Cubo_Criar(a);

    printf("Aresta: %.2f\n", Cubo_Acessar(c));
    printf("Área: %.2f\n", Cubo_Area(c));
    printf("Volume: %.2f\n", Cubo_Volume(c));
    Cubo_Atribuir(c, a);
    printf("\nNova aresta: %.2f\n", Cubo_Acessar(c));
    printf("Área: %.2f\n", Cubo_Area(c));
    printf("Volume: %.2f\n", Cubo_Volume(c));

    Cubo_Destruir(c);
    return 0;
}
