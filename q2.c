#include <stdio.h>
#include <stdlib.h>

typedef struct lligada{
	int valor;
	struct lligada *prox;
}*LInt;
void freeL (LInt l){
	LInt t;
	while(l != NULL){
		t = l -> prox;
		free(l);
		l = t;
	}
	free(l);
}

int main(){
	return 0;
}

