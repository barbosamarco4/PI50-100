#include <stdio.h>
#include <stdlib.h>
typedef struct lligada{
	int valor;
	struct lligada *prox;
}*LInt;
//10/10
int listToArray(LInt l, int v[], int N){
	int i = 0;
	while(l!=NULL && i<N){
		v[i] = l->valor;
		l = l->prox;
		i++;
	}
	return i;
}
int main(){
	return 0;
}

