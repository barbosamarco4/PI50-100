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
void posorder(ABin a, LInt *l){
	LInt t;
	if(a!=NULL){
		t = malloc(sizeof(struct lligada));
		t -> valor = a->valor;
		t->prox = *l;
		*l = t;
		posorder(a->dir,l);
		posorder(a->esq,l);
	}
}
int main(){
	return 0;
}

