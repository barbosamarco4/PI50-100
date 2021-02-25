#include <stdio.h>
#include <stdlib.h>
typedef struct lligada{
	int valor;
	struct lligada *prox;
}*LInt;
//10/10
int removeAll(LInt *l, int x){
	LInt t;
	int r = 0;
	while(*l != NULL){
		if((*l)->valor == x){
			t = *l;
			*l = (*l)->prox;
			free(t);
			r++;
		}
		else
			l = &((*l)->prox);
	}
	return r;
}
int main(){
	return 0;
}

