/*  mostrar o maior numero do vetor
motrar a posição do menor numero do vetor
a quantidade de numeros pares do vetor
mostrar os numeros impares do vetor*/

#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
void LerVetor (int v[], int n)
{
int i;
for (i=0;i<n; i++)
{
 printf ("digite um valor para o vetor");
 scanf ("%d", &v[i]);
 
}
}
int procurarMaior(int v[], int n)
{
 int MaiorValor, i;
 MaiorValor = v[0];
 
for (i=0; i <n; i++)
    {
          if (v[i] > MaiorValor)
          { 
                v[i] = MaiorValor;
          }
    
}
   return MaiorValor;
}
int MostrarMenor(int v[], int n)  
{ 
     
     int i, MenorP;
     MenorP = v[i];
     for (i=0;i<n; i++)
     {
         if (v[i] < v[MenorP])
              {
              i = MenorP;
              }
     
     }

     return MenorP;

}
int MostrarQPares(int v[], int n)
{
     int i, QtdPares;
     for (i=0;i<n;i++)
         {
         if (v[i] %2 ==0)
         { 
                  QtdPares = QtdPares +1;
         }


}return QtdPares;
}
void MostrarImpar (int v[], int n)
{
 int i, MostraImpar ;
 for (i=0; i<n; i++)
 {   
     if (v[i] % 2 !=0)
     {
        MostraImpar = v[i];
        printf("\n %d", MostraImpar);
}
} return;
}
void MostrarVetor (int v[], int n)
{
int i;
for (i=0;i<n;i++)
{ printf (" \n %d ", v[i]);
}
}

main ()
{
int v[10], Maior, Menor, Par,MostraQPares;

LerVetor(v,10);

//Maior = procurarMaior(v,10);

//Menor = MostrarMenor(v,10);

//MostraQPares = MostrarQPares(v,10);

printf("Numeros Impares");
MostrarImpar(v,10);
printf ("vetor v");
MostrarVetor(v,10);
printf ("Mostrar Maior %d", Maior );

system ("pause");

}
