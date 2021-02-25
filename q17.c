#include <stdio.h>
#include <stdlib.h>
typedef struct lligada{
	int valor;
	struct lligada *prox;
}*LInt;
//10/10
LInt cloneRev(LInt l){
	LInt r = NULL;
	LInt t;
	while(l != NULL){
		t = malloc(sizeof(struct lligada));
		t->valor = l->valor;
		t->prox = r;
		r = t;
		l = l -> prox;
	}
	return r;
}
int main(){
	return 0;
}

