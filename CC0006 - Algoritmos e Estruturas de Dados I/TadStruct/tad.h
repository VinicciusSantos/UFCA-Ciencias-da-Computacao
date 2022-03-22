typedef struct tad TAD;

TAD *criar(int);
void destruir(TAD*);
void imprimir(TAD*);
void inserir(TAD*, int);
void remover(TAD*);
int quantidade(TAD*);
void buscar(TAD*, int);

void removerPrimeiro(TAD*);
void removerIndice(TAD*, int);
void removerValor(TAD*, int);
