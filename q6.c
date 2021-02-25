//10/10
#include <stdio.h>
#include <stdlib.h>
typedef struct lligada{
	int valor;
	struct lligada *prox;
}*LInt;
int removeOneOrd (LInt *l, int x){
	LInt *a = l;
	int r = 0;
	while(*a != NULL && (*a)->valor <x){
		a = &((*a) -> prox);
	}
	if(*a == NULL || (*a)->valor != x)
		r = 1;
	else{
		free(*a);
		*a = (*a) -> prox;
	}
	return r;
}
int main(){
	return 0;
}

