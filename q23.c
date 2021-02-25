#include <stdio.h>
#include <stdlib.h>
typedef struct lligada{
	int valor;
	struct lligada *prox;
}*LInt;
//10/10
LInt arrayToList(int v[],int N){
	LInt r,t;
	r = NULL;
	for(;N>0;N--){
		t = malloc(sizeof(struct lligada));
		t->valor = v[N-1];
		t->prox = r;
		r = t;
	}
	return r;
}
int main(){
	return 0;
}

