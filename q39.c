#include <stdio.h>
#include <stdlib.h>
typedef struct nodo{
	int valor;
	struct nodo *esq, *dir;
}*ABin;
//10/10
int nivelV (ABin a, int n, int v[]){
	int r = 0;
	int t;
	if(a != NULL){
		if(n==1){
			*v = a->valor;
			v++;
			r++;
		}
		else{
			t = nivelV(a->esq,n-1,v);
			r = t+nivelV(a->dir,n-1,v+t);
		}
	}
	return r;
}
int main(){
	return 0;
}

