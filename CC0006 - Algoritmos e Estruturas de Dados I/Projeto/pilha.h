typedef struct elemento* Pilha;

Pilha* Pi_criar();
int Pi_inserir(Pilha *, struct carta);
struct carta Pi_remover(Pilha *);
int Pi_tamanho(Pilha *);
void Pi_imprimir(Pilha *);
void Pi_embaralhar(Pilha *);
void Pi_InserirIndice(Pilha*, struct carta, int);