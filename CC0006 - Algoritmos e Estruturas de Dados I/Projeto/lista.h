typedef struct elemento* Lista;

Lista* Li_criar();
int Li_inserirInicio(Lista *, struct carta);
int Li_removerQualquer(Lista *, struct carta);
struct carta Li_acessarIndice(Lista *, int);
int Li_quantidade(Lista *);
int Li_somaValores(Lista *);
void Li_imprimir(Lista *);
