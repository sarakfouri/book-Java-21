/* Trabalho 2

Faça um programa que cadastre o nome e o salário de seis funcionários em uma
lista duplamente encadeada e ordenada pelo salário de forma crescente. A seguir, o
programa deve mostrar o nome, o valor do imposto e o valor a receber (ou seja, o
salário menos o imposto) de todos os funcionários cadastrados. Posteriormente, o
programa deve ser capaz de remover os funcionários cujos nomes comecem por uma
letra digitada pelo usuário (considerar a possibilidade de letras maiúsculas e
minúsculas). Se nenhum funcionário tiver o nome começado com a letra digitada pelo
usuário, mostrar mensagem. Finalmente, o programa deve apresentar duas listagens
após a remoção.
(a) dos nomes e salários dos funcionários por ordem crescente de salário;
(b) dos nomes e salários dos funcionários por ordem decrescente de salário. */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct funcionario
{      char nome[30];
       float salario;
       Lista_dupla *prox, *ant;

}Lista_dupla;


Lista_dupla * insere_ordenado (Lista_dupla *p, int x)
{      Lista_dupla *novo, *aux;
       novo = (Lista_dupla *) malloc (sizeof(Lista_dupla));
       novo->info = x;
       //lista vazia
       if (p == NULL)
       {  novo->ant = NULL;
          novo->prox = NULL;
          p = novo;
       }
       else //lista não está vazia
       {    //procurando a posição na lista para inserir o valor x ordenado
            aux = p;
            while ( (aux->prox != NULL) && (aux->info) < x )
            aux = aux->prox;
            if ( (aux->ant == NULL) && (aux->info) > x ) // insere no inicio
            {    novo->prox = aux;
            novo->ant = NULL;
            aux->ant = novo;
            p = novo;
       }
       else //insere no meio OU no final
       {    if (aux->info > x) // inserção no meio
            {     novo->prox = aux;
                  novo->ant = aux->ant;
                  (aux->ant )->prox = novo;
                  aux->ant = novo;
            }
            else //insere no final
            {    novo->prox = aux->prox;
                 novo->ant = aux;
                 aux->prox = novo;
            }
       }
       return (p);
}
