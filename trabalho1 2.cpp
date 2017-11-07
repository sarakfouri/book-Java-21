/*Uma empresa contrata 15 funcionários temporários. De acordo com o valor das
vendas mensais, os funcionários ganham pontos que determinarão seus salários ao
fim de cada mês. Sabe-se que eles trabalham nos meses de novembro a janeiro. Faça
um programa que defina a estrutura de dados necessária para armazenar as
informações sobre os funcionários (nome, sexo, e vendas mensais – mês a mês) e:
(a) calcule e mostre a pontuação mensal de cada um dos funcionários. Sabese
que R$100,00 equivalem a 1 ponto;
(b) determine e mostre qual funcionário obteve a menor pontuação total
nos três meses. Deverão ser desconsiderados empates. */

#include <stdio.h>
#include <stdlib.h>


struct funcionario 
       {
       char nome[50], sexo;
       float novembro, dezembro, janeiro;
       int pnovembro; pdezembro, pjaneiro, totalpontuacao;
       };
       
       
void cadastrarFuncionario (struct funcionario cad[15])
{
 int i;
 
 //cadastro de cada funcionario e suas vendas
 for (i=0; i<15; i++)
     {
           puts ("digite o nome do funcionario");
           scanf ("%s", cad[i].nome);
           puts ("digite o sexo do funcionario se Feminino digite F se masculino digite M");
           scanf (" %c", &cad[i].sexo);
           puts ("digite a venda do mes de novembro");
           scanf ("%f", &cad[i].novembro);
           puts("digite a venda de dezembro");
           scanf ("%f", &cad[i].dezembro);
           puts ("digite a venda de janeiro");
           scanf ("%f", &cad[i].janeiro);
     }

}

void leiturafuncionario(struct funcionario cad[15])
// mostra o nome do funcionario e o pontos do mes
{
          
int i;
for (i=0; i<15; i++)
          { 
           
          pjaneiro = (int) cad[i].janeiro / 100; 
          pnovembro = (int) cad[i].novembro /100;
          pdezembro = (int) cad[i].dezembro /100; 
          printf("\n Nome do funcionario: %s", cad[i].nome);
          printf("\n Pontuação de novembro: %d", pnovembro);
          printf("\n Pontuação de dezembro: %d", pdezembro);
          printf("\n Pontuação de janeiro: %d", pjaneiro);
          }
}


void menorpuntuacaototal(struct funcionario cad[15])
{
// mostrar o funcioanrio que teve a menor pontuação no total dos 3 meses
int index, i; 
float menor; 
index = 0;
menor = cad[index].;
for (i=0; i<15; i++)

    {
        

}         
main()

{
struct funcionario cad[15]
 
 
      
}
