// criar um vetor que o numero seja informado pelo usuario e qtas veze o maior numero foi repetido

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int mostarMaiorElemento (int p[], int numVetor)
{
	int num=0, i, valorMaior =0;
	
	for (i=0; i < numVetor; i++)
	{
		if (p[i]>valorMaior)
		{
			valorMaior = p[i];
	    }
		else
		{
			i++;

	    }
    }  
	for(i=0;i<numVetor;i++)
	{
		if(valorMaior==p[i])
		{
			num=num ++;
		}
		else
		{
			i++;
		}
	}
	
	return numVetor;
}

int main ()
{
	int numVetor, i,V, *p, x=0;
	
	
	printf ("digite a quantidade de numeros que o vetor vai armazenar \n");
	scanf ("%d", &numVetor);
	
	p = (int *) malloc (numVetor * sizeof(int));
	
	for (i=0; i<numVetor; i++ )
	{
		puts ("Digite o valor para ser inserido no vetor \n");
		scanf("%d", &p[i]);
	
	}
	for(i=0;i<numVetor;i++)
	{
		printf("VALORES que entraram: %d \n\n",p[i]);
	}	
		
	x = mostarMaiorElemento(p,numVetor);
	 	
	printf("A quantidade de vezes que o maior numero foi repetido eh: %d \n",x);
	
	system("pause");
}
	



