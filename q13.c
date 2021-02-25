#include <stdio.h>
#include <stdlib.h>
typedef struct lligada{
	int valor;
	struct lligada *prox;
}*LInt;
//10/10
void init(LInt *l){
	while((*l)->prox != NULL)
		l = &((*l)->prox);
	free(*l);
	*l = NULL;
}
int main(){
	return 0;
}

