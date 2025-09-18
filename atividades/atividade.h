typedef struct Cubo Cubo;


// Cria um novo cubo com a aresta informada
Cubo* Cubo_Criar(float a);

// Libera a memória de um cubo
void Cubo_Destruir(Cubo* c);

// Retorna o valor da aresta de um cubo
float Cubo_Acessar(Cubo* c);

// Atribui um novo valor de aresta ao cubo
void Cubo_Atribuir(Cubo* c, float a);

// Calcula a área total do cubo
float Cubo_Area(Cubo* c);

// Calcula o volume do cubo
float Cubo_Volume(Cubo* c, float a);