#include <stdio.h>
#include <stdlib.h>
typedef struct nodo{
	int valor;
	struct nodo *esq, *dir;
}*ABin;
//10/10
int quantosElementos(ABin a){
	int r = 0;
	if(a!=NULL)
		r = 1+quantosElementos(a->dir)+quantosElementos(a->esq);
	return r;
}
int quantosMaiores(ABin a,int x){
	int r = 0;
	while(a!=NULL){
		if(a->valor > x){
			r = r+1+quantosElementos(a->dir);
			a = a->esq;
		}
		else
			a = a->dir;
	}
	return r;
}
int main(){
	return 0;
}

