//Escreva um programa em C que aloque dinamicamente um vetor. O usuário deve entrar com o tamanho do vetor a ser alocado nesse programa, 
//criar uma função para ler os dados do vetor alocado e outra função que calcule qual o maior elemento do vetor e quantas vezes esse elemento
//aparece no vetor.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void lerDados(int tamvetor, int *p)
{
     printf("Digite os %d digitos que desejar! \n\n", tamvetor);
     for(int i=0; i<tamvetor; i++)
     {
             int j = i+1;
             printf("Digito %d: ", j);
             scanf("%d", & p[i]);
     }
}

void calcularElemento(int tamvetor, int *p)
{
     int i=0;
     int maior = p[i];
     int vezesmaior = 0;
     for(int j=1; j<tamvetor; j++)
     {
              if(p[j] == maior)
              {
                      vezesmaior = vezesmaior + 1;
              }
              if(p[j] > p[i])
              {
                      maior = p[j];
              }
              i++;
     }
     printf("\nMaior elemento: %d", maior);
     printf("\nAparece %d vezes no vetor!", vezesmaior);
}

main()
{
      int op;
      int *p; //ponteiro
      int tamvetor; //tamanho do vetor
      puts("Digite o tamanho do vetor: ");
      scanf("%d", & tamvetor);
      puts("\n");
      p = (int *)malloc(tamvetor* sizeof(int));
      lerDados(tamvetor, p);
      calcularElemento(tamvetor, p);
      getch();
}
