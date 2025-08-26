#include <stdio.h>
#include <math.h> 
#include "ponto.h"

struct ponto {
    float x;
    float y;
};

Ponto* ponto_criar(float x, float y) {
    Ponto* p = (Ponto*)malloc(sizeof(Ponto));
    if (p != NULL) {
        p->x = x;
        p->y = y;
    }
    return p;
}