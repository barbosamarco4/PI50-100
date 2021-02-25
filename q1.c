#include <stdio.h>
//10/10
typedef struct lligada{
	int valor;
	struct lligada *prox;
}*LInt;

int length (LInt l){
	int i;
	i=0;
	while(l != NULL){
		l = l -> prox;
		i++;
	}
	return i;
}

int main(){
	return 0;
}

