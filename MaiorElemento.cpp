/*
2 - Faça um programa que faça a locação dinamica de um vetor de numeros inteiros ( o usuário deve entrar
com o numero de elementos e que contenha uma função que retorne o numero de vezes em que o maior elemento 
aparece ne vetor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int MaiorElemento (int *vetor, int qtdElemento)
{
	int i, cont = 0, maiorElemento =0;
	
	for (i=0; i<qtdElemento; i++)
	{
	 if (vetor[i]> maiorElemento)
	 	{
		 
		 maiorElemento = vetor[i];
	    	cont = 1;
		}else if(maiorElemento == vetor[i])
		{
			
	    	cont++;
    	   
	          }else
	          {
	          	i++;
   	
   }
   	
}
	return cont;	 
 }



int main ()
{
 int *vetor, maiorElemento, qtdElemento, i;
 qtdElemento = 0;
 puts ("Digite o numero de elementos do vetor");
 scanf ("%d", &qtdElemento);
 
 vetor = (int *) malloc (qtdElemento * sizeof(int));
 
 
 for (i=0; i<qtdElemento; i++)
 {
 	puts("digite o elemento do veotr");
	scanf ("%d", &vetor[i]);
 }
maiorElemento = 0;
maiorElemento = MaiorElemento(vetor, qtdElemento);

printf("O maior elemento foi repetido %d", maiorElemento);

}
