//Escreva um programa que gere dinamicamente uma matriz e procure, o maior elemento da linha e o menor da coluna. 
//As dimensões da matriz devem ser pedidas ao usuário.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void lerDados(int linhas, int colunas, int **matriz, int menorColuna, int maiorLinha)
{
     for(int i=0; i<linhas; i++)
     {
             for(int j=0; j<colunas; j++)
             {
                     printf("Digite um elemento [%d] [%d]: ", i, j);
                     scanf("%d", & matriz[i][j]);
                     if(matriz[i][j] < menorColuna)
                     {
                                     menorColuna = matriz[i][j];
                     }
                     if(matriz[i][j] > maiorLinha)
                     {
                                     maiorLinha = matriz[i][j];
                     }
             }
     }
     printf("\nMenor da coluna = %d", menorColuna);
     printf("\nMaior da linha = %d", maiorLinha);
}



main()
{
      int linhas;
      int colunas;
      int **matriz;
      int menorColuna = 9999;
      int maiorLinha = -9999;
      puts("Digite o tamanho de linhas: ");
      scanf("%d", & linhas);
      puts("\nDigite o tamanho de colunas: ");
      scanf("%d", & colunas);
      puts("\n");
      matriz = (int **)malloc(linhas* sizeof(int));
      for(int i=0; i<linhas; i++)
      {
              matriz[i] = (int *)malloc(colunas* sizeof(int));
      }
      lerDados(linhas, colunas, matriz, menorColuna, maiorLinha);
      getch();
}
