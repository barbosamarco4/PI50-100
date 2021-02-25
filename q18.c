#include <stdio.h>
#include <stdlib.h>
typedef struct lligada{
	int valor;
	struct lligada *prox;
}*LInt;
//10/10
int maximo(LInt l){
	int r = l->valor;
	while(l!=NULL){
		if(l->valor > r)
			r = l->valor;
		l = l->prox;
	}
	return r;
}
int main(){
	return 0;
}

