/*Fa�a um programa que cadastre o nome e o sal�rio de seis funcion�rios em uma
lista duplamente encadeada e ordenada pelo sal�rio de forma crescente. A seguir, o
programa deve mostrar o nome, o valor do imposto e o valor a receber (ou seja, o
sal�rio menos o imposto) de todos os funcion�rios cadastrados. Posteriormente, o
programa deve ser capaz de remover os funcion�rios cujos nomes comecem por uma
letra digitada pelo usu�rio (considerar a possibilidade de letras mai�sculas e
min�sculas). Se nenhum funcion�rio tiver o nome come�ado com a letra digitada pelo
usu�rio, mostrar mensagem. Finalmente, o programa deve apresentar duas listagens
ap�s a remo��o.
(a) dos nomes e sal�rios dos funcion�rios por ordem crescente de sal�rio;
(b) dos nomes e sal�rios dos funcion�rios por ordem decrescente de sal�rio.*/

#include <stdio.h>
#include <stdilib.h>
#include <string.h>

typedef struct no
{
    char nome[50];
    float salario;
    struct no *ant, *prox;
}Lista_dupla;

Lista_dupla * insere_ordenado (Lista_dupla *p, char nome_func[], float salario_func)
{
    Lista_dupla *novo, *aux;
    //alocando memoria para o novo no
    novo = (Lista_dupla *) malloc (sizeof(Lista_dupla));
    //colocando as informa��es no novo no
    strcpy(novo->nome, nome_func);
    novo->salario = salario_func;
    
    //fazendo as liga��es dos nos
    
    //lista vazia
    if (p == NULL)
    {
        novo->ant = NULL;
        novo->prox = NULL;  
        p = novo;
    }
    else //lista n�o est� vazia
    {
    //procurando a posi��o na lista para inserir o valor x ordenado
    aux = p;
    while ( (aux->prox != NULL) && (aux->info) < x )
    aux = aux->prox;
    if ( (aux->ant == NULL) && (aux->info) > x ) // insere no inicio
        {
    novo->prox = aux;
    novo->ant = NULL;
    aux->ant = novo;
    p = novo;
    }
        else //insere no meio OU no final
            {
            if (aux->info > x) // inser��o no meio
            {
                novo->prox = aux;
                novo->ant = aux->ant;
                (aux->ant )->prox = novo;
                aux->ant = novo;
            }
            else //insere no final
            {
                novo->prox = aux->prox;
                novo->ant = aux;
                aux->prox = novo;
            }
    }
    return (p);
}

void mostrarDados ()

Lista_dupla * remove (Lista_dupla *p, char nome_func[], char letra)
    {
        Lista_dupla *aux, *pe, *pd;
        if ( p != NULL)
        { //lista n�o vazia
        aux = p;
        while ( (aux != NULL) && (aux->nome_func[0] < letra) )
        aux = aux->prox;
        if ( (aux != NULL) && (aux->nome_func[0] == letra) )
        { //elemento pertence � lista
            pd = aux->prox;
            pe = aux->ant;
        if ( pe == NULL) //remove do inicio
            {
                p = p->prox;
                p->ant = NULL;
                free(aux);
            }
        else //remove do meio ou do final
            {
                pe->prox = pd;
                if ( pd != NULL ) // meio
                pd->ant = pe;
                free(aux);
            }
            } // fim do if elemento pertence � lista
            else
            puts(�O elemento nao pertence a lista�);
            }
    return (p);
}

main ()
Lista_dupla * L1;
char nome_func[50];
float salario_func;


    do{  
        // armazena na lista                
        puts("\n Digite o nome do funcionario:"); 
        scanf("%d", &nome_func); 
        puts ("\n Digite o salario do funcionario")  
        L1=insereInicio(L1,num);//usando o modulo ja pronto isereInicio(envia o valor de L1->info) L3 recebe o valor de L1->info 
        printf("\n Inserir valor na lista 1? S/N: "); 
        scanf(" %c", &op); 
    }while(op!='n' && op!='N'); 
  
    mostrarDados(L1); 
