#include <stdio.h>
#include <stdlib.h>
typedef struct lligada{
	int valor;
	struct lligada *prox;
}*LInt;
//10/10
int removeMaiorL(LInt *l){
	LInt *m,t;
	int r;
	m = l;
	while(*l != NULL){
		if((*l)->valor > (*m)->valor)
			m = l;
		l=&((*l)->prox);
	}
	r = (*m)->valor;
	t = *m;
	*m = (*m) -> prox;
	free(t);
	return r;
}
int main(){
	return 0;
}

