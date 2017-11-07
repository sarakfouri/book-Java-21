#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *prox;
};
typedef struct node* NODEPTR;    
void inserirInicio(int x, NODEPTR *p)
{
    NODEPTR novo;
    novo = (NODEPTR)malloc(sizeof(struct node));
    if(novo == NULL)
    {
        puts("Noh nao alocado");
        getch();
    }
    else
    {
        novo->info = x;
        novo->prox = *p;
        *p = novo;
    }
}
void inserirFim(int x, NODEPTR p)
{
    NODEPTR aux,novo;
    if(p == NULL)
    {
        puts("Lista Vazia");
        getch();
    }
    else
    {
        novo = (NODEPTR)malloc(sizeof(struct node));
        if(novo == NULL)
        {
            puts("Noh nao alocado");
            getch();
        }
        else
        {
            aux = p;
            while(aux->prox != NULL){
                aux = aux->prox;
            }
            novo->info = x;
            novo->prox = NULL;
            aux->prox = novo;
        }
    }
}
void exibeLista(NODEPTR p)
{
    NODEPTR aux;
    if(p == NULL)
    {
        puts("Lista Vazia");
        getch();
    }
    else
    {
        aux = p;
        while(aux != NULL){
            printf("%d\n",aux->info);
            aux = aux->prox;
        }
    }
}
void inserirApos(int x, int y, NODEPTR p)
{
    NODEPTR aux,novo;
    if(p == NULL)
    {
        puts("Lista Vazia");
        getch();
    }
    else
    {
        aux = p;
        while(aux != NULL && aux->info != y){
            aux = aux->prox;
        }
        if(aux == NULL)
        {
            puts("Elemento nao encontrado");
            getch();
        }
        else
        {
            novo = (NODEPTR)malloc(sizeof(struct node));
            if(novo == NULL){
                puts("Noh nao alocado");
                getch();
            }
            else
            {
                novo->info = x;
                novo->prox = aux->prox;
                aux->prox = novo;
            }
        }
    }
}
void inserirAntes(int x, int y, NODEPTR *p)
{
    NODEPTR novo,aux1,aux2;
    if(*p==NULL)
    {
        puts("Lista Vazia!");
        getch();
    }
    else
    {
        if((*p)->info == y)
        {
            inserirInicio(x,p);
        }
        else
        {
            aux1 = *p;
            aux2 = (*p)->prox;
            while(aux2!=NULL&&aux2->info!=y)
            {
                aux1 = aux2;
                aux2 = aux2->prox;
            }
            if(aux2 == NULL)
            {
                puts("Elemento nao encontrado");
                getch();
            }
            else
            {
                novo=(NODEPTR)malloc(sizeof(struct node));
                if(novo == NULL)
                {
                    puts("Noh nao alocado");
                    getch();
                }
                else
                {
                    novo->info = x;
                    novo->prox = aux2;
                    aux1->prox = novo;
                }
            }
        }
    }
}
void remove(int x, NODEPTR *p)
{
    NODEPTR aux1, aux2;
    if(*p == NULL)
    {
        puts("Lista Vazia");
        getch();
    }
    else
    {
        if((*p)->info == x)
        {
            aux1 = *p;
            *p = aux1->prox;
            free(aux1);
        }
        else
        {
            aux1 = *p;
            aux2 = (*p)->prox;
            while(aux2!=NULL&&aux2->info!=x)
            {
                aux1 = aux2;
                aux2 = aux2->prox;
            }
            if(aux2 == NULL)
            {
                puts("Elemento nao encontrado");
                getch();
            }
            else
            {
                aux1->prox = aux2->prox;
                free(aux2);
            }
        }
    }
}
int main(){
    NODEPTR p;
    p = NULL;
    int x=7,y=8,z=9,a=10;
    inserirInicio(x,&p);
    inserirFim(y,p);
    inserirFim(z,p);
    inserirApos(a,z,p);
    inserirAntes(11,a,&p);
    exibeLista(p);
    getch();
    return 0;
}
