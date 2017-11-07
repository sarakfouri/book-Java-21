
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>



int nomeFuncao(int p[],int tam)
{
	int retorno=0,i,x=0;
	
	for(i=0;i<tam;i++)
	{
			
		if(p[i]>x)
		{
			x=p[i];	
		}
		else
		{
			i++;
		}
	}
	for(i=0;i<tam;i++)
	{
		if(x==p[i])
		{
			retorno=retorno+1;
		}
		else
		{
			i++;
		}
	}
	
	return retorno;
}

int main()
{
	int num,numElementos,i,*p,x=0;
	
	puts("Digite aqui o numero de elementos: ");
	scanf("%d",&numElementos);
	
	
	p = (int *) malloc (numElementos * sizeof(int));
	
	for(i=0;i<numElementos;i++)
	{
		puts("Digite um elemento: ");
		scanf("%d",&p[i]);
	}
	
	for(i=0;i<numElementos;i++)
	{
		printf("VALORES que entraram: %d \n\n",p[i]);
	}	
		
	x = nomeFuncao(p,numElementos);
	 	
	printf("A quantidade de vezes que o maior numero foi repetido eh: %d \n",x);
	
	system("pause");
}
	


