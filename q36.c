#include <stdio.h>
#include <stdlib.h>
typedef struct nodo{
	int valor;
	struct nodo *esq, *dir;
}*ABin;
//10/10
int pruneAB(ABin *a, int l){
	int r = 0;
	if(*a!=NULL){
		r += pruneAB(&((*a)->esq),l-1);
		r += pruneAB(&((*a)->dir),l-1);
		if(l<=0){
			r++;
			free(*a);
			*a = NULL;
		}
	}
	return r;
}

int main(){
	return 0;
}

