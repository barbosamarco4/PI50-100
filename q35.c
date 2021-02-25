#include <stdio.h>
#include <stdlib.h>
typedef struct nodo{
	int valor;
	struct nodo *esq, *dir;
}*ABin;
//10/10
int freeAB(ABin a){
	int r = 0;
	if(a!=NULL){
		r += freeAB(a->esq);
		r += freeAB(a->dir);
		r++;
		free(a);
	}
	return r;
}
int main(){
	return 0;
}

