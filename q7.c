#include <stdio.h>
#include <stdlib.h>
typedef struct lligada{
	int valor;
	struct lligada *prox;
}*LInt;
//10/10
void merge(LInt *r, LInt a, LInt b){
	while(a != NULL && b != NULL){
		if(a->valor < b->valor){
			*r = a;
			a = a->prox; 
		}
		else{
			*r = b;
			b = b -> prox;
		}
		r = &((*r)->prox);
	}
	if(a == NULL)
		*r = b;
	else
		*r = a;
}
int main(){
	return 0;
}
