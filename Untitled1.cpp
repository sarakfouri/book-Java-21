#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

//1- Escrever um programa que contenha uma função que retorne a soma dos vetores em uma lista encadeada com 8 elementos

struct no
{
       int inf;
       struct no *prox;
};

typedef struct no Lista;

Lista * crialista(void)
{
     return NULL;
}

Lista * insere_inicio(Lista *p, int x)
{
       //alocar espaço de memoria para um novo no
       Lista *novo;
       novo = (Lista*)malloc(sizeof(Lista));
       //colocando o valor no campo inf
       novo->inf = x;
       //ligando o novo no
       novo->prox = p;
       p = novo;
       // devolve a nova lista 
       return (p);
}
       
main()
{
      int i,valor;
      Lista *p; // p irá armazenar o endereço do primeiro elemento da lista
      Lista *aux;
      
      p = crialista();  // p = NULL;
      
      //inserindo 8 elementos na lista
      for (i=1; i<=8; i++)
      {
           printf("Digite o valor do elemento %d da lista", i);
           scanf("%d", &valor);
           p = insere_inicio(p, valor);
      }
      
      aux = p;
      
      
      
      
      
      
