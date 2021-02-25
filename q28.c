#include <stdio.h>
#include <stdlib.h>
typedef struct nodo{
	int valor;
	struct nodo *esq, *dir;
}*ABin;
//10/10
int altura(ABin a){
	int h = 0;
	if(a != NULL){
		if(altura(a->esq)>altura(a->dir))
			h = 1 + altura(a->esq);
		else
			h = 1 + altura(a->dir);
	}
	return h;
}
int main(){
	return 0;
}
