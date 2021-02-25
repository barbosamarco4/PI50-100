#include <stdio.h>
#include <stdlib.h>
typedef struct lligada{
	int valor;
	struct lligada *prox;
}*LInt;
//10/10
int take(int n, LInt *l){
	int i = 0;
	LInt *t,h;
	while(*l != NULL && i<n){
		l = &((*l)->prox);
		i++;
	}
	t = l;
	while(*l != NULL){
		h = *l;
		l = &((*l)->prox);
		free(h);
	}
	*t = NULL;
	return i;
}
int main(){
	return 0;
}

