#include <stdio.h>
#include <stdlib.h>
#define LETRAS 50
struct Tcliente
{
       int codigo;
       char nome[LETRAS];
       char fone[15];
       char sexo;
       float limite;
};

void entrada (FILE *F);

void ler_imprime(FILE *F);

main ()

{ 
     FILE *cliente;
     cliente = fopen ("cliente.txt", "w");
     if (cliente == NULL)
     {
     puts ("Impossivel Criar Arquivo");
     }
     else
     {
         entrada(cliente);
         fclose (cliente); 
     }
     cliente = fopen("cliente.txt", "r");
     if (cliente == NULL)
     {
                 puts ("impossivel abrir arquivo"); 
     }
     else 
     {
          ler_imprime(cliente);
          fclose(cliente);
     }
     
}

void entrada (FILE *cliente)
{
     struct Tcliente Vcli;
     do
     { 
            puts ("digite o codigo do cliente ou zero para encerrrar");
            scanf ("%d", &Vcli.codigo);
            if(Vcli.codigo != 0)
            {
                           puts ("digite o nome");
                           scanf ("%s", Vcli.nome);
                           puts ("digite o sexo F/M");
                           scanf (" %c", &Vcli.sexo);
                           puts("digite o telefone");
                           scanf("%s", Vcli.fone);
                           puts ("digite o limite do credito");
                           scanf ("%f", &Vcli.limite);
                           fprintf(cliente, "%d %s %c %s %2.f", Vcli.codigo, Vcli.nome, Vcli.sexo, Vcli.fone, Vcli.limite);
            }//fecha o if
     }//fecha o do
     while (Vcli.codigo !=0);
}//fim da fução

void ler_imprime (FILE *cliente)
{
     struct Tcliente Cliente[LETRAS];
     int i = 0, aux, j;
     aux = fscanf (cliente, "%d %s %c %s %", & Cliente[i].codigo, Cliente[i].nome, Cliente[i].fone, Cliente[i].limite);
     while (aux != EOF)
        {
            i++;
             aux = fscanf (cliente, "%d %s %c %s %", & Cliente[i].codigo, Cliente[i].nome, Cliente[i].fone, Cliente[i].limite);
             }       
             puts ("informações do cliente");
        for (j=0; j<i; j++)
           { 
                  printf("codigo do cliente %d", Cliente[j].codigo);
                  printf("nome = %s", Cliente[j].nome );
                  printf("Sexo = %c", Cliente[j].sexo);
                  printf("Telefone : %s ", Cliente[j].fone);
                  printf("Limite %f", Cliente[j].limite);
           }
}
