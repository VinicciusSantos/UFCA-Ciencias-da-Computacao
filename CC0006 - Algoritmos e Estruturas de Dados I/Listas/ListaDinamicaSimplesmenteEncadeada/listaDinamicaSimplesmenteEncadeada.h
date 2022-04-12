struct aluno
{
    int matricula;
    char nome[50];
    float av1;
    float av2;
    float pr;
};

typedef struct elemento* Lista;

Lista* criar();
void destruir(Lista*);
void imprimir(Lista*);

int inserirInicio(Lista*, struct aluno);
int inserirFim(Lista*, struct aluno);

int tamanho(Lista*);
int cheia(Lista*);
int vazia(Lista*);
int inserirOrdenado(Lista*, struct aluno);
int removerFim(Lista*);
int removerInicio(Lista*);
int removerValor(Lista*, int);
int acessarIndice(Lista*, int, struct aluno*);
int acessarValor(Lista*, int, struct aluno*);
