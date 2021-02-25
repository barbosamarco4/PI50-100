#include <stdio.h>
#include <stdlib.h>
typedef struct lligada{
	int valor;
	struct lligada *prox;
}*LInt;
//10/10
int removeDups(LInt *l){
	LInt *t,tt,h;
	t = l;
	while(*t != NULL){
		tt = *l;
		while(tt->valor != (*t)->valor)
			tt = tt -> prox;
		if(tt == *t)
			t = &((*t)->prox);
		else{
			h = *t;
			*t = (*t) -> prox;
			free(h);
		}
	}
	return 0;
}
int main(){
	return 0;
}

