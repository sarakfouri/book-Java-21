/* Trabalho 2

Fa�a um programa que cadastre o nome e o sal�rio de seis funcion�rios em uma
lista duplamente encadeada e ordenada pelo sal�rio de forma crescente. A seguir, o
programa deve mostrar o nome, o valor do imposto e o valor a receber (ou seja, o
sal�rio menos o imposto) de todos os funcion�rios cadastrados. Posteriormente, o
programa deve ser capaz de remover os funcion�rios cujos nomes comecem por uma
letra digitada pelo usu�rio (considerar a possibilidade de letras mai�sculas e
min�sculas). Se nenhum funcion�rio tiver o nome come�ado com a letra digitada pelo
usu�rio, mostrar mensagem. Finalmente, o programa deve apresentar duas listagens
ap�s a remo��o.
(a) dos nomes e sal�rios dos funcion�rios por ordem crescente de sal�rio;
(b) dos nomes e sal�rios dos funcion�rios por ordem decrescente de sal�rio. */

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
       else //lista n�o est� vazia
       {    //procurando a posi��o na lista para inserir o valor x ordenado
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
       {    if (aux->info > x) // inser��o no meio
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
