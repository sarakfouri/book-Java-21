#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


float CalculaMedia (float *notas,int qtdAlunos)
{
	int i;
	float media =0;
	for (i=0; i<qtdAlunos; i++)
	{
		media = media + notas[i];
     }
     media = media / qtdAlunos;
     return media;
}

int main()
{
	float *notas, media;
	int i, qtdAlunos;
	
	puts("quantos alunos tem na classe");
	scanf("%d", &qtdAlunos);
	
	notas = (float *) calloc (qtdAlunos, sizeof(float));
	
	for (i=0; i<qtdAlunos; i++)
	{
		puts ("digite a nota da prova");
		scanf("%f", &notas[i]);
	}
media = CalculaMedia(notas, qtdAlunos);	
printf("valor da media da sala é %.2f", media);
}

