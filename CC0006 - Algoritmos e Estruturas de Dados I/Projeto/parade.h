struct carta
{
    int valor;
    char cor;
};

typedef struct elemento* Lista;

Lista* criar();

int inserirInicio(Lista *, struct carta);
int removerQualquer(Lista *, struct carta);
int acessarIndice(Lista *, int);
int quantidade(Lista *);

void imprimir(Lista *);