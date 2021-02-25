#include <stdio.h>
#include <stdlib.h>
typedef struct lligada{
		int valor;
		struct lligada *prox;
}*LInt;

void imprimeL(LInt l){
	while(l != NULL){
		printf("%d\n",l -> valor);
		l = l-> prox;
	}
}
int main(){
	return 0;
}

