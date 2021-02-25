#include <stdio.h>
#include <stdlib.h>
typedef struct nodo{
	int valor;
	struct nodo *esq, *dir;
}*ABin;
int depth(ABin a, int x){
	int r = -1;
	int d,e;
	if(a!=NULL){
		if(a->valor == x)
			r = 1;
		d = depth(a->dir,x);
		e = depth(a->esq,x);
		if(e>0 && d>0){
			if(e>d)
				r = d+1;
			else
				r = e+1;
		}
		else if(e>0)
			r = e+1;
		else if(d>0)
			r = d+1;
	}
	return r;
}
int main(){
	return 0;
}

