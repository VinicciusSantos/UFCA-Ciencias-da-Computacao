typedef struct matriz MATRIZ;

MATRIZ* criar(int, int);
MATRIZ* crarIdentidade(int);

void imprimir(MATRIZ*);
int linhas(MATRIZ*);
int colunas(MATRIZ*);

void inserir(MATRIZ*, int, int, int);