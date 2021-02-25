#include <stdio.h>
#include <stdlib.h>
typedef struct lligada{
	int valor;
	struct lligada *prox;
}*LInt;
LInt parte(LInt l){
	LInt r = NULL;
	while(l!=NULL){
		r = l->prox;
		if(r!= NULL)
			l = r->prox;
	}
	return r;
}
int main(){
	return 0;
}

