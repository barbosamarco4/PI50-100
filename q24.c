#include <stdio.h>
#include <stdlib.h>
typedef struct lligada{
	int valor;
	struct lligada *prox;
}*LInt;
LInt somasAcl (LInt l){
	LInt r,*t;
	t = &r;
	int soma=0;
	while(l!=NULL){
		soma = soma + l->valor;
		*t = malloc(sizeof(struct lligada)); 
		(*t)->valor = soma;
		t = &((*t)->prox);
		l = l->prox;
	}
	*t = NULL;
	return r;
}
int main(){
	return 0;
}

