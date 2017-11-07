/* 18-09-2013
EXERCICIO 2 - FAÇA UM PROGRAMA QUE CADASTRE PRODUTOS. PARA CADA PRODUTO DEVEM SER CADASTRADOS CODIGO DE PRODUTO, PREÇO E QUANTIDADE ESTOCADA.
OS DADOS DEVEM SER ARMAZENADOS EM UMA LISTA SIMPLESMENTE ENCADEADA E NÃO ORDENADA. POSTERIORMENTE, RECEBER DO USUARIO A TAXA DE DESCONTO
(EX DIGITAR 10 PARA TAXA DE DESCONTO DE 10%). APLICAR ESSA TAXA AO PREÇO DE TODOS OS PRODUTOS CADASTRADOS MOSTRAR:
    . UM RELATORIO COM O CODIGO E O NOVO PRECO DOS PRODUTOS
    . UM RELATORIO DOS PRODUTOS COM QUANTIDADE ESTOCADA > 500. */
    
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct no{
       int codigo;
       float preco;
       int quantidade;
       struct no *prox;
};
typedef struct no Lista;

Lista* cria_lista(void)
{
       return NULL;
}

Lista* insere_lista(Lista *L, int codigo, float preco, int quantidade)
{
       Lista* novo;
       novo=(Lista*)malloc(sizeof(Lista));
       novo->codigo = codigo;
       novo->preco = preco;
       novo->quantidade = quantidade;
       novo->prox = L;
       L = novo;
       return(L);
}

Lista* aplicar_taxa(Lista *L, int taxa)
{
     float taxaAplicada, desconto;
     Lista *aux;
     aux = L;
     taxaAplicada = taxa/100.0;
     while(aux != NULL)
     {
               desconto = aux->preco * taxaAplicada;
               aux->preco = aux->preco - desconto;
               aux = aux->prox;
     }
     aux = L;
     return L;
}
               
     

main()
{
      int codigo;
      float preco;
      int quantidade;
      int taxa;
      char resp = 's';
      Lista *L, *aux;
      L = cria_lista();
      do{
          puts("\nInsira o codigo do produto: ");
          scanf("%d", & codigo);
          puts("\nInsira o preco do produto: ");
          scanf("%f", & preco);
          puts("\nInsira a quantidade do produto: ");
          scanf("%d", & quantidade);
          L=insere_lista(L, codigo, preco, quantidade);
          puts("\n\nDeseja cadastrar mais produtos??? [S/N]: ");
          puts("__________________________________________________");
          fflush(stdin);
          scanf("%c", & resp);
      }while (resp == 'S' || resp == 's');
      puts("\n\nDigite a taxa de descontos para cada produtos: ");
      puts("_____________________________________________________");
      scanf("%d", &taxa);
      puts("\n\n");
      L=aplicar_taxa(L, taxa);
      aux = L;
      while(aux != NULL)
      {
                printf("\nCodigo do produto: %d", aux->codigo);
                printf("\nPreco do produto: %.2f", aux->preco);
                printf("\nQuantidade de produto: %d", aux->quantidade);
                puts("\n\n");
                aux = aux->prox;
      }
      puts("\n\n");
      aux = L;
      puts("Codigos de produtos com estoque maior que 500");
      while(aux != NULL)
      {
                if(aux->quantidade > 500)
                {
                                   printf("\nCodigo: %d", aux->codigo);
                }
                aux = aux->prox;
      }
      getch();
}
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
