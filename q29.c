#include <stdio.h>
#include <stdlib.h>
typedef struct nodo{
	int valor;
	struct nodo *esq, *dir;
}*ABin;
//10/10
ABin cloneAB(ABin a){
	ABin r = NULL;
	if(a != NULL){
		r = malloc(sizeof(struct nodo));
		r -> valor = a -> valor;
		r->esq = cloneAB(a->esq);
		r->dir = cloneAB(a->dir);
	}
	return r;
}
int main(){
	return 0;
}

