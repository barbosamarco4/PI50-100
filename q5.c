#include <stdio.h>
#include <stdlib.h>
//10/10
typedef struct lligada{
	int valor;
	struct lligada *prox;
}*LInt;
void insertOrd(LInt *l, int x){
	LInt novo;
	novo = malloc(sizeof(struct lligada));
	novo -> valor = x;
	while (*l != NULL && (*l)->valor < x){
		l = &((*l) -> prox);
	}
	novo -> prox = *l;
	*l = novo;
}
int main(){
	return 0;
}

