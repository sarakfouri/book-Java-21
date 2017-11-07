#include <stdio.h>
#include <stdlib.h>

#define m 10

struct Fila
{
       char elemento [m];
       int comeco,fim;
};

void iniciarFila (struct Fila *F)
{
     F -> comeco = 0;
     F -> fim = -1;
}

void Inserir (struct Fila *F,char x)
{
     if (F -> fim == m-1)
     puts ("\n Fila Cheia");
     else
     {
         F -> fim++;
         F -> elemento [F->fim] = x;
     }
}

void Retirar (struct Fila *F)
{
     if (F->fim < F->comeco)
     puts ("\n Fila Vazia");
     else
     F-> comeco++;
}

char Consulta (struct Fila F)
{
     char x;
     if (F.fim < F.comeco)
     {
       puts ("\n Fila Vazia");
       exit (1);
     }
     else
     x = F.elemento [F.comeco];
     return (x);
}

void Mostrar (struct Fila F)
{
     int i;
     for (i=F.comeco;i<=F.fim;i++)
     printf ("\n %c",F.elemento[i]);
}

main ()
{
     struct Fila F;
     int op;
     char ch;
     op = 0;
     while (op !=6)
     {
           puts ("\n Operacoes sobre Fila \n");
           puts ("\n 1-Inicia");
           puts ("\n 2-Insere um elemento");
           puts ("\n 3-Acessa o primeiro elemento");
           puts ("\n 4-Retira um elemento");
           puts ("\n 5-Mostra a fila");
           puts ("\n 6-Sair");
           puts ("\n Escolha uma opcao: ");
           scanf ("%d",&op);
           switch (op)
           {
                  case 1: iniciarFila(&F);
                  break;
                  case 2: puts ("\n Digite um caracter para inserir: ");
                  scanf (" %c",&ch);
                  Inserir (&F,ch);
                  break;
                  case 3: ch = Consulta(F);
                  printf ("\n Primeiro elemento da fila: %c",ch);
                  break;
                  case 4: Retirar(&F);
                  break;
                  case 5: Mostrar(F);
                  break;
           }
     }
}
