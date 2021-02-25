#include <stdio.h>
#include <stdlib.h>
typedef struct lligada{
	int valor;
	struct lligada *prox;
}*LInt;
LInt parteAmeio(LInt *l){
	LInt *r,*t,h;
	r = l;
	t = l;
	while(*r!=NULL){
		r = &((*r)->prox);
		if(*r != NULL){
			t = &((*t)->prox);
			r = &((*r)->prox);
		}
	}
	h = *l;
	*l = *t;
	*t = NULL;
	return h;
}
int main(){
	return 0;
}

