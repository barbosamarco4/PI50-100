#include <stdio.h>
#include <stdlib.h>
typedef struct nodo{
	int valor;
	struct nodo *esq, *dir;
}*ABin;
//10/10
void removeMaior(ABin *a){
	ABin t=NULL;
	while(*a!=NULL && t == NULL){
		if((*a)->dir == NULL){
			t = *a;
			*a = ((*a)->esq);
			free(t);
		}
		a = &((*a)->dir);
	}
}
int main(){
	return 0;
}

