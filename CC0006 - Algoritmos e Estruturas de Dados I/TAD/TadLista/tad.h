typedef struct tad TAD;

TAD *criar(int);
void destruir(TAD*);

void imprimir(TAD*);
int quantidade(TAD*);
void buscar(TAD*, int);

void removerInicio(TAD*);
void removerUltimo(TAD*);
void removerIndice(TAD*, int);
void removerValor(TAD*, int);

void inserirInicio(TAD*, int);
void inserirOrdenado(TAD*, int);
void inserirIndice(TAD*, int, int);
void inserirUltimo(TAD*, int);

TAD *inverter(TAD*);
TAD *concaternar(TAD*, TAD*);
