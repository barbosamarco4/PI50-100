#include <stdio.h>
#include <stdlib.h>
typedef struct lligada{
	int valor;
	struct lligada *prox;
}*LInt;
//10/10
LInt rotateL(LInt l){
	LInt *t = &l;
	if(l != NULL && l->prox != NULL){
		while(*t != NULL)
			t = &((*t)->prox);
		*t = l;
		l = l->prox;
		(*t) -> prox = NULL;
	}
	return l;
}
int main(){
	return 0;
}

