#include <stdio.h>
#include <stdlib.h>
typedef struct nodo{
	int valor;
	struct nodo *esq, *dir;
}*ABin;
typedef struct lligada{
	int valor;
	struct lligada *prox;
}*LInt;
void preorder(ABin a, LInt *l){
	LInt t;
	if(a!=NULL){
		preorder(a->dir,l);
		preorder(a->esq,l);
		t = malloc(sizeof(struct nodo));
		t->valor = a->valor;
		t->prox = *l;
		*l = t;
	}
}
int main(){
	return 0;
}

