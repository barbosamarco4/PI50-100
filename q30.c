#include <stdio.h>
#include <stdlib.h>
typedef struct nodo{
	int valor;
	struct nodo *esq, *dir;
}*ABin;
//10/10
void mirror(ABin *a){
	ABin t;
	if(*a!=NULL){
		t = (*a)->esq;
		(*a)->esq = (*a)->dir;
		(*a)->dir = t;
		mirror(&((*a)->esq));
		mirror(&((*a)->dir));
	}
}
int main(){
	return 0;
}

