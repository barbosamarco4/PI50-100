#include <stdio.h>
typedef struct lligada{
	int valor;
	struct lligada *prox;
}*LInt;

LInt reverseL (LInt l){
	LInt *t = &l;
	while(*t != NULL){
		*t = (*t) -> prox;
	}
}

int main(){
	return 0;
}

