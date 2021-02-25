#include <stdio.h>
#include <stdlib.h>
typedef struct nodo{
	int valor;
	struct nodo *esq, *dir;
}*ABin;
//10/10
int depthOrd(ABin a, int x){
	int r=0;
	while(a!=NULL && a->valor!=x){
		if(x > a->valor)
			a = a->dir;
		else
			a = a->esq;
		r++;
	}
	r++;
	if(a==NULL)
		r = -1;
	return r;
}
int main(){
	return 0;
}

