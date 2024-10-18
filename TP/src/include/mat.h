#include <stdlib.h>
#include <stdio.h>
#include <math.h>


/*============================================================DEFINIÇÕES=============================================================*/

#define MAXTAM 5
// limite superior da inicializacao aleatoria
#define INITRANDOMRANGE 10
// Macro que realiza swap sem variavel auxiliar
#define ELEMSWAP(x,y) (x+=y,y=x-y,x-=y)

typedef struct mat{
	double m[MAXTAM][MAXTAM];
	int tamx, tamy;
	int id;
} mat_tipo;

/*============================================================FUNÇÕES================================================================*/

void criaMatriz(mat_tipo * mat, int tx, int ty, int id);
// Descricao: cria matriz com dimensoes tx X ty

void inicializaMatrizNula(mat_tipo * mat);
// Descricao: inicializa mat com valores nulos

void inicializaMatrizAleatoria(mat_tipo * mat);
// Descricao: inicializa mat com valores aleatorios

double acessaMatriz(mat_tipo * mat);
// Descricao: acessa mat para fins de registro de acesso 

void imprimeMatriz(mat_tipo * mat);
// Descricao: imprime a matriz com a identificacao de linhas e colunas

void salvaMatriz(mat_tipo * mat, FILE * out);
// Descricao: salva a matriz em arquivo

void copiaMatriz(mat_tipo *src, mat_tipo * dst, int dst_id);
// Descricao: faz uma copia de src em dst

void somaMatrizes(mat_tipo *a, mat_tipo *b, mat_tipo *c);
// Descricao: soma as matrizes a e b e armazena o resultado em c

void multiplicaMatrizes(mat_tipo *a, mat_tipo *b, mat_tipo *c);
// Descricao: multiplica as matrizes a e b e armazena o resultado em c

void transpoeMatriz(mat_tipo *a);
// Descricao: transpoe a matriz a

void destroiMatriz(mat_tipo *a);
// Descricao: destroi a matriz a, que se torna inacessível