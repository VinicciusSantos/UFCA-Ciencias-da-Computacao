typedef struct matriz Matriz;

Matriz* criar(int, int);
void destruir(Matriz*);
float acessarValor(Matriz*, int, int);
int numeroLinhas(Matriz*);
int numeroColunas(Matriz*);
void atribuir(Matriz*, int, int, float);
void imprimir(Matriz*);