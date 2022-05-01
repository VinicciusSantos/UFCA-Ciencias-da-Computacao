struct carta
{
    int numero;
    char naipe;
};

typedef struct elemento* Lista;

Lista* Li_criar();
int Li_inserirInicio(Lista *, struct carta);
int Li_removerQualquer(Lista *, struct carta);
int Li_acessarIndice(Lista *, int);
int Li_quantidade(Lista *);
int Li_somaValores(Lista *);
void Li_imprimir(Lista *);

typedef struct elemento* Pilha;

Pilha* Pi_criar();
int Pi_inserir(Pilha *, struct carta);
struct carta Pi_remover(Pilha *);
int Pi_tamanho(Pilha *);
void Pi_imprimir(Lista *);
void Pi_embaralhar(Pilha *);