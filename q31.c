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
void inorder(ABin a, LInt *l){
	LInt t;
	if(a!=NULL){
		inorder(a->dir,l);
		t = malloc(sizeof(struct nodo));
		t -> valor = a -> valor;
		t -> prox = *l;
		(*l) = t;
		inorder(a->esq,l);
	}
}
int main(){
	return 0;
}

