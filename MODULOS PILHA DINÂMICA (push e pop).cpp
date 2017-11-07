void push(int x, NODEPTR *p)
{
    NODEPTR novo;
    novo=(NODEPTR)malloc(sizeof(struct node));
    if(novo==NULL){
        puts("Noh nao alocado");
        getch();
    }
    else{
        novo->info=x;
        novo->prox=*p;
        *p=novo;
    }
}
int pop(NODEPTR *p){
    int x, NODEPTR aux;
    if(*p==NULL){
        puts("Lista vazia");
        getch();
    }
    else{
        x=(*p)->info;
        aux=*p;
        *p=(*p)->prox;
        free(aux);
    }
    return x;
}
