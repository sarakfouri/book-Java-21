#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct no{
	int info;//informação a ser guardada na lista  é um inteiro
	struct no *prox;
}; 
typedef struct no Lista;

Lista *criaLista(void){
	return NULL; //inicializando a lista com NULL
}

Lista *insereInicio(Lista *p, int num)
	{
    	Lista *novo; //declara o novo nó da lista
		
		novo = (Lista *) malloc(sizeof(Lista));//gera um ponteiro para um novo nó da lista
		novo->info = num; //guarda informação do nó
		novo->prox = p; //guarda endereço do próximo nó
		p=novo; //recebe informação do nó
		return(p);
	} 

Lista* insereOrdenado (Lista *p, int num)
{ 
  Lista *aux, *novo;
  novo = (Lista*) malloc(sizeof(Lista));
  novo->info = num;
//lista vazia OU inserção no início
        if ( (p == NULL) || ( num <= p->info) )
        { 
        novo->prox = p;
        novo->info = num;
        p = novo;
        }
        else //inserção no meio OU no final
        {
        aux = p;
        while ( (aux->prox != NULL) && ( (aux->prox)->info <= num ) )
             aux = aux->prox;
        novo->prox = aux->prox;
        aux->prox = novo;
        }
      
     return (p);
} //fim função

    
void mostrarDados(Lista *p)
{
    Lista *aux;
	for(aux = p;aux!=NULL;aux = aux->prox)
    		printf("%d ", aux->info);
}


main ()
{ 
     int num;
     Lista *L1, *L2, *L3, *aux;
     char op;
    
   //inicializando a lista null para cada lista
    L1=criaLista();
	L2=criaLista();
	L3=criaLista();
     	do{	
        // armazena na lista 1   			
		puts("\n Digite um valor a ser inserido na lista 1:");
		scanf("%d", &num);
		
		L1=insereInicio(L1,num);//usando o modulo ja pronto isereInicio(envia o valor de L1->info) L3 recebe o valor de L1->info
		printf("\nInserir valor na lista 1? S/N: ");
		scanf(" %c", &op);
	}while(op!='n' && op!='N');

	mostrarDados(L1);

	do{	
        // armazena na lista 2			
		puts("\nDigite um valor a ser inserido na lista 2");
		scanf("%d", &num);
		
		L2=insereInicio(L2,num);//usando o modulo ja pronto isereInicio(envia o valor de L1->info) L3 recebe o valor de L1->info
		printf("\nInserir valor na lista 1? S/N: ");
		scanf(" %c", &op);
	}while(op!='n' && op!='N');
	mostrarDados(L2);


      aux = L1;  //ponteiro aux aponta para o inicio da lista 1
      while(aux!=NULL)  // enquanto a lista 1 não terminar, vai inserindo elementos na L3
      {     L3= insereOrdenado(L3, aux->info);  //inserindo elementos ordenados
            aux=aux->prox;
      }
        
      aux = L2; //ponteiro aux aponta para o inicio da lista 2
      while(aux!=NULL)
      {     L3= insereOrdenado(L3, aux->info);
            aux=aux->prox;
      }
      
      puts(" Mostrando os elementos da nova lista ordenada L3: ");
     
      aux = L3; //ponteiro aux aponta para o inicio da lista 3
      while(aux!=NULL)
      {     
            printf(" %d ", aux->info);
            aux = aux->prox;
      }
      
      
 system("pause");
}
