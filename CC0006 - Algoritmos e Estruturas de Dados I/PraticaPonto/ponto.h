typedef struct ponto Ponto;

Ponto* criar(float, float);
void destruir(Ponto*);
void acessar(Ponto*, float*, float*);
void atribuir(Ponto*, float, float);
void exibir(Ponto*);
float distancia(Ponto*, Ponto*);
