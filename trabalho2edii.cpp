/* Fa�a um programa em linguagem C que remova da lista L1 os n�s cujas posi��es devem
ser encontradas na lista ordenada L2. Por exemplo, se L1 = (A B C D E) e L2 = (2 4 8), ent�o o
segundo e o quarto n� devem ser removidos da lista L2 (o oitavo n� n�o existe) e, depois da
remo��o, L1 = (A C E). */
#include <stdio.h>
#include <stdlib.h>

struct L1
    {
        char abc; 
        struct L1 *prox;
};

struct L2
    { 
        int info;
        struct L2 *prox;
};  

L1 * criarlista(void)
    { 
        return NULL;
    }
L2 * criarLista(void)
    { 
        return NULL;
 }

  
L1* insereL1nicio(L1 *p, char infoc) 
{ 
       L1 *novo; 
         
       novo = (L1*)malloc(sizeof(L1)); 
       novo-> abc = infoc; 
       novo->prox = p; 
       p = novo; 
       return(p); 
} 
L2* insereOrdenado (L2 *p, int num) 
{  
  L2 *aux, *novo; 
  novo = (L2*) malloc(sizeof(L2)); 
  novo->info = num; 
//lista vazia OU inseri no inicio 
        if ( (p == NULL) || ( num <= p->info) ) 
        {  
        novo->prox = p; 
        novo->info = num; 
        p = novo; 
        } 
        else //inseri no meio OU no final 
        { 
        aux = p; 
        while ( (aux->prox != NULL) && ( (aux->prox)->info <= num ) ) 
             aux = aux->prox; 
        novo->prox = aux->prox; 
        aux->prox = novo; 
        } 
        
     return (p); 

}

main ()
