#include <stdio.h>
#include <stdlib.h>
typedef struct lligada{
	int valor;
	struct lligada *prox;
}*LInt;
//10/10
void remreps(LInt l){
	LInt t = l;
	if(l!=NULL)
		l = l->prox;
	while(l!=NULL){
		if(l->valor == t->valor){
			t->prox = l->prox;
			free(l);
			l = t->prox;
		}
		else{
			t = t->prox;
			l = l->prox;
		}
	}
}
int main(){
	return 0;
}

