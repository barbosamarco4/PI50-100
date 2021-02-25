#include <stdio.h>
#include <stdlib.h>
typedef struct lligada{
	int valor;
	struct lligada *prox;
}*LInt;
//10/10
void appendL(LInt *l, int x){
	LInt r;
	r = malloc(sizeof(struct lligada));
	r->valor = x;
	r->prox = NULL;
	while(*l != NULL)
		l = &((*l)->prox);
	*l = r;
}
int main(){
	return 0;
}

