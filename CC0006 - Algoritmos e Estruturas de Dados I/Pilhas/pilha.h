typedef struct elemento* Pilha;

Pilha* criar();
void imprimir(Pilha*);

void inserir(Pilha*, int);
void remover(Pilha*);
int acessar(Pilha*);