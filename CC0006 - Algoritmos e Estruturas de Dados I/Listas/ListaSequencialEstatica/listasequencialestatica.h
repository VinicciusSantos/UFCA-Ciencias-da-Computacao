#define MAX 50

struct aluno
{
    int matricula;
    char nome[50];
    float av1;
    float av2;
    float pr;
};

typedef struct lista Lista;

Lista* criar();
void destruir(Lista*);
void imprimir(Lista*);

int tamanho(Lista*);
int cheia(Lista*);
int vazia(Lista*);

void inserirFim(Lista*, struct aluno);