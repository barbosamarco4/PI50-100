#include <stdio.h>
#include <stdlib.h>
typedef struct lligada{
	int valor;
	struct lligada *prox;
}*LInt;

LInt cloneL(LInt l){
	LInt r,*t;
	t = &r;
	while(l!=NULL){
		*t = malloc(sizeof(struct lligada));
		(*t)->valor=l->valor;
		t = &((*t)->prox);
		l = l->prox;
	}
	*t = NULL;
	return r;
}

int main(){
	return 0;
}

