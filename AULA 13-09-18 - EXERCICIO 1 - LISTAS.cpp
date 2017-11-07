/* DIA - 18-09-2013
AXERCICIO 1. DADOS 2 LISTAS L1 E L2, ESCREVA UM PROGRAMA QUE CONTENHA UMA FUNÇÃO QUE INTERCALE L1 COM L2, 
GERANDO A LISTA L3. */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct no{
       int info;
       struct no *prox;
};
typedef struct no Lista;

Lista* cria_lista(void)
{
       return NULL;
}

Lista* insere_lista(Lista *p, int numero)
{
       Lista* novo;
       novo=(Lista*)malloc(sizeof(Lista));
       novo->info = numero;
       novo->prox = p;
       p = novo;
       return(p);
}

Lista* intercala(Lista *L1, Lista *L2, Lista *L3)
{
       
       Lista *aux1, *aux2;
       aux1 = L1;
       aux2 = L2;
       while(aux1 != NULL)
       {
                  L3 = insere_lista(L3, aux1->info);
                  aux1 = aux1->prox;
                  if(aux2 != NULL)
                  {
                          L3 = insere_lista(L3, aux2->info);
                          aux2 = aux2->prox;
                  }
       }
       while(aux2 != NULL)
       {
                  L3 = insere_lista(L3, aux2->info);
                  aux2 = aux2->prox;
       }
       return L3;
}                          
            

main()
{
      int numero;
      char resp ='S';
      Lista *L1, *aux1;
      Lista *L2, *aux2;
      Lista *L3, *aux3;
      L1 = cria_lista();
      L2 = cria_lista();
      L3 = cria_lista();
      do{
            puts("\nInsira um numero inteiro na lista 1: ");
            scanf("%d", & numero);
            L1=insere_lista(L1,numero);
            puts("\n\nInserir mais outro elemento na lista 1 [S/N]: ");
            puts("__________________________________________________");
            fflush(stdin);
            scanf("%c", & resp);
      }while (resp == 'S' || resp == 's');
      do{
            puts("\nInsira um numero inteiro na lista 2: ");
            scanf("%d", & numero);
            L2=insere_lista(L2,numero);
            puts("\n\nDeseja inserir mais outro elemento na lista 2 [S/N]: ");
            puts("_________________________________________________________");
            fflush(stdin);
            scanf("%c", & resp);
      }while (resp == 'S' || resp == 's');
      aux1 = L1;
      aux2 = L2;
      while(aux1 != NULL)
      {
                 printf("\nLista 1: %d", aux1->info);
                 aux1 = aux1->prox;
      }
      puts("\n\n");
      while(aux2 != NULL)
      {
                 printf("\nLista 2: %d", aux2->info);
                 aux2 = aux2->prox;
      }
      puts("\n\n");    
      L3 = intercala(L1, L2, L3);   
      aux3 = L3;
      while(aux3 != NULL)
      {
                 printf("\nLista 3 (Intercalada): %d", aux3->info);
                 aux3 = aux3->prox;
      }      
      getch();
}

 
