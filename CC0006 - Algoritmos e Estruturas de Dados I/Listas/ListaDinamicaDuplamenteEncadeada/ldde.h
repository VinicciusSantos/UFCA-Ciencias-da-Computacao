typedef struct elemento* Lista;

Lista *criar();
void inserirOrdenado(Lista*, int);
void removerValor(Lista*, int);
void imprimir(Lista*);
void imprimirInvertido(Lista*);