#include <stdio.h>
#include <stdlib.h>
typedef struct nodo{
	int valor;
	struct nodo *esq, *dir;
}
typedef struct lligada{
	int valor;
	struct lligada *prox;
}*LInt;*ABin;
Lint nivelL(ABin a,int n){
	LInt r = NULL;
	if(a!=NULL && n>0){
		if(n==1){
			r = malloc(sizeof(struct lligada));
		}
	}
}
int main(){
	return 0;
}

