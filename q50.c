#include <stdio.h>
#include <stdlib.h>
typedef struct lligada{
	int valor;
	struct lligada *prox;
}*LInt;
typedef struct nodo{
	int valor;
	struct nodo *esq, *dir;
}*ABin;
//10/10
void listToBTree(LInt l, ABin *a){
	*a = NULL;
	while(l!=NULL){
		*a = malloc(sizeof(struct nodo));
		(*a) -> valor = l->valor;
		(*a)->esq = NULL;
		a = &((*a)->dir);
	}
	*a = NULL;
}
int main(){
	return 0;
}

