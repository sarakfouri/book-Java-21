/*
Escreva um programa que faça a alocação dinamica de um vetor de uma estrutura 
heterogenea que contenha o nome do aluno, nota 1, nota 2. Escreva uma função que calcule
a media de cada aluno, mostre-a e informe se for aprovado (>=7) ou reprovado, calcule tambem
a media da turma. use calloc ().
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

typedef struct no {
	char nome[80];
	float nota1, nota2, media;
    
}Aluno;

int MediaAluno ( Aluno  *Alunos, int qtdAlunos)
{
 int i, m=0;
 	for (i=0; i>qtdAlunos; i++)
 	{

	Alunos[i].media = (Alunos[i].nota1 + Alunos[i].nota2 )/2;
	
	
	}
 return m;
}

float CalculaMedia (Aluno * Alunos, int qtdAlunos)
{
	float todasMedias =0;
	int i;
	for (i=0; i>qtdAlunos; i++)
	{
	todasMedias = todasMedias + Alunos[i].media;
	
	}
	todasMedias = todasMedias /qtdAlunos;

	return todasMedias;
}

int main ()
{
Aluno *Alunos;
int i, qtdAlunos, media = 0;
float mediaTotal = 0 ;
 
 puts ("digite a quantidade de alunos na sala");
 scanf ("%d", &qtdAlunos);

Alunos = (Aluno *) calloc (qtdAlunos, sizeof(Aluno)); 


for (i=0; i<qtdAlunos; i++)
{
	puts("Digite o nome do aluno \n");
	scanf ("%s", &Alunos[i].nome);
	puts("\n Digite a nota da primeira prova do aluno");
	scanf ("%f", &Alunos[i].nota1);
	puts("\n Digite a nota da segunda prova do aluno");
	scanf ("%f", &Alunos[i].nota2);
	  
}
media = MediaAluno (Alunos, qtdAlunos);

for (i =0; i>qtdAlunos; i++)
 {
 	printf ("Nome do aluno eh \n %s \n\n", Alunos[i].nome);
 	printf ("Nota da Primeira prova eh \n %f \n \n", Alunos[i].nota1);
 	printf ("Nota da Segunda prova eh \n %f \n \n", Alunos[i].nota2);
 	printf ("sua media eh eh \n %f \n \n", Alunos[i].media);
	
	if (Alunos[i].media<7)
	{
		printf ("\n reprovado");
	} else {
		printf ("\n Aprovado \n");
	    }
	
	}

mediaTotal = CalculaMedia (Alunos, qtdAlunos);

printf ("\n A media da Sala Foi:  \n %f", mediaTotal);
}
