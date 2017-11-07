/* Escreva um programa que crie uma matriz alocada dinamicamente e que contenha uma função que crie uma matriz transposta (alocada dinamicamente)
da função original.
   
   Escreva um programa que crie uma lista encadeada dinamica:
        * Uma função para criar a lista;
        * Uma função para inserir elementos no inicio da lista.
*/        

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int ** criarmatriz(int x, int y)
{

    int **matriz;
    
    matriz = (int **)(malloc(x*sizeof (int *)));
    for(int i=0; i < x; i++)
    {
        matriz[i] = (int *)(malloc(y*sizeof(int)));
    }
    return (matriz);
}
    
void prenchermatriz(int x, int y)
{   
    int **matrizp;
    int valor;
    
    matrizp = criarmatriz(x, y);
    
    for(int i=0; i < x; i++)
    {
        for(int j=0; j < y; j++)
        {
            printf("Digite um valor para ocupar o espaço da linha %d e coluna %d.", i, j);
            scanf("%d", &valor);
            matrizp[i][j] = valor;
        }
    }
}        
    
    
    


main()
{
    int x;
    int y;
    
    puts("Digite o numero de linhas da matriz.");
    scanf("%d", &x);
    puts("Digite o numero de colunas da matriz.");
    scanf("%d", &y);
    prenchermatriz(x,y);
    
    getch();
}
    

    
    
