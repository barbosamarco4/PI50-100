typedef struct lligada{
    int valor;
    struct lligada *prox;
}*LInt;
void merge(LInt *r, LInt a, LInt b){
    LInt *ea,*eb;
    ea = &a;
    eb = &b;
    while((*ea) != 0 && (*eb) != 0){
        if((*ea)->valor < (*eb)->valor){
            *r = *ea;
            ea = &((*ea)->prox);
        }
        else{
            *r = *eb;
            eb = &((*eb)->prox);
        }
        r = &((*r)->prox);
        printf("%p %p %p\n", *ea, *eb, *r);
    }
    if((*ea) == 0)
        *r = *eb;
    else
        *r = *ea;
}
LInt push(int x, LInt l){
  LInt r;
  r = malloc(sizeof(struct lligada));
  r->valor = x;
  r->prox = l;
  return r;
}
LInt LFromA(int v[], int N){
  int i;
  LInt r = 0;
  for(i=N-1 ; i>=0; i--)
    r = push(v[i],r);
  return r;
}
int main() {
  int v[5] = {1,3,5,7,9};
  int a[5] = {0,2,4,6,8};
  LInt *r = &v;
  merge(r,LfromA(v,5),LfromA(a,5));
  return 0;
}
