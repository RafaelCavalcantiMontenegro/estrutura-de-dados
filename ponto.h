typedef struct ponto Ponto; 
//cria um novo ponto
Ponto* ponto_cria(float x, float y);

 // acessar os valores de x e y
 int ponto_acessa(Ponto* p, float* x, float* y);

 //atribui os valores de x e y a um ponto 
 int ponto_atribui(Ponto* p, float x, float y);

 //distancia entre dois pontos
 float ponto_distancia(Ponto* p1, Ponto* p2);

 //libera o ponto
void ponto_libera(Ponto *p) {
    free(p);
    }