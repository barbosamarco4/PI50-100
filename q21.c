#include <stdio.h>
#include <stdlib.h>
typedef struct lligada{
	int valor;
	struct lligada *prox;
}*LInt;
//10/10
LInt Nforward(LInt l, int N){
	while(N>0){
		l = l->prox;
		N--;
	}
	return l;
}
int main(){
	return 0;
}

