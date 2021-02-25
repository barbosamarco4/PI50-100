#include <stdio.h>
#include <stdlib.h>
typedef struct lligada{
	int valor;
	struct lligada *prox;
}*LInt;
int drop(int n, LInt *l){
	int i = 0;
	LInt t;
	while(*l != NULL && i<n){
		t = *l;
		*l = (*l)->prox;
		free(t);
		i++;
	}
	return i;
}
int main(){
	return 0;
}

