/*DESAFIO ROBO - ATIVIDADE*/
/*
#include <stdio.h>
#include <locale.h>



int main()
{   
    setlocale(LC_ALL, "Portuguese");

    int vida = 30, comida = 3, dias = 0, escolha;

    while (vida > 0 && dias < 7)
    {
        do
        {
        printf(" ========== MENU ========== \n\n");
        printf(" DIA %d NA FLORESTA\n", dias);
        printf(" VIDA: %d\n", vida);
        printf(" COMIDA: %d\n", comida);
        printf(" ========================== \n\n");
        printf(" Escolha sua ação para hoje:\n");
        printf(" [1] - Caçar\n");
        printf(" [2] - Comer\n");
        printf(" [3] - Descansar\n\n");

        printf("Escolha: ");
        scanf("%d", &escolha);
        }
        while (escolha < 1 || escolha > 3);
        

        if (escolha == 1)
        {
            printf("\nVoce se arrisca em busca de suprimentos...\n");
            comida = comida + 2;
            vida = vida - 15;
            if (vida <= 0)
            {
                vida = 0;
            }
            printf("Você ganhou +2 unidades de comida, mas perde 15 pontos de vida devido aos perigos e ao cansaço da caça :c\n");
            
        }

        else if (escolha == 2)
        {
            printf("\nVocê tenta se alimentar para recuperar energias...\n");
            if (comida >= 1)
            {
                comida = comida - 1;
                vida = vida + 10;
                if (vida > 30)
                {
                    vida = 30;
                }
                printf("\nVoce se alimentou e isso aumentou sua vida para %d pontos!\n", vida);
            }
            else
            {
                printf("\nVoce nao tem mais mantimentos disponiveis!");
                printf("\nVoce perdeu 20 de vida por conta da FOME!");
                vida = vida - 20;
            }
        }

        else if (escolha == 3)
        {
            printf("\nVoce decidiu poupar esforços!\n");
            vida = vida + 10;
            if (vida > 30)
            {
                vida = 30;
            }
            printf("\nIsso aumentou 10 pontos de vida!");
        }   

        printf("\nO desgaste natural fez voce perder 5 pontos de vida por fome!\n");
        vida = vida - 5;
        dias = dias +1;
        if (vida <= 0)
        {
            vida =0;
        }
        printf("\nVida atual: %d\n", vida);
        printf("\nComida atual: %d\n", comida);
        printf("\nDias sobrevividos: %d\n\n", dias);

        if (vida > 0 && dias >= 7)
        {
            printf("Parabéns! O resgate chegou e você sobreviveu aos 7 dias na floresta!");
        }
        else if (vida <= 0)
        {   
            vida = 0;
            printf("Você sucumbiu aos perigos da floresta no dia %d. Fim de jogo!", dias);
        }
    
    }
    
    return 0;


}*/
// -----------------------------------------------------------------------------------------------------
/*
#include <stdio.h>

int main()
{
    //CRIANDO UMA VARIÁVEL CONTADOR INICIANDO-A COM 1
    int num = 1;

    //DEFININDO O LAÇO DE REPETIÇÃO COM A CONDIÇÃO DE PARADA
    while(num <= 10)
    {
        //TRECHO DE CÓDIGO QUE IRÁ SER EXECUTADO ATÉ A CONDIÇÃO SER FALSA
        printf("%d \t", num); // (\t é responsavel por dar um "espaçamento" como se fosse um tab, na mesma linha)
        //num = num + 1 EQUIVALE A num ++
        num ++;
    }
    return 0;
}
*/

// --------------------------------------------------------------------------------------------------------------------

/*Contagem crescente
Exiba os números de 1 a 10, separados por tabulação (\t), usando while.*/
/*
#include <stdio.h>

int main()
{   
    int num = 1;

    while (num <= 10)
    {
        printf("%d \t", num);
        num = num +1;
    }

    return 0;

}
*/

/*Contagem regressiva
Exiba os números de 10 a 1 em ordem decrescente usando while.*/
/*
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num = 10;

    while (num >= 1)
    {
        printf("%d \t", num);
        num--;

    }


    return 0;

}*/

/*Tabuada do 7
Imprima a tabuada do 7 (de 7×1 até 7×10) usando for.*/
/*
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt-BR");

    for (int num = 1; num <= 10; num++)
    {
        printf("7 x %d = %d\n", num, 7*num);
    }
    return 0;

} */

/*Soma de 1 a 100
Calcule e exiba a soma de todos os números de 1 a 100 usando for.*/
/*
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int soma = 0;
    for (int num = 1; num <= 100; num++)
    {
        if (num == 100)
        {
            printf(" %d\n\n", num);
        }
        else
        {
            printf(" %d +", num);
        }
    soma += num;
    }
    printf("A soma total e: %d", soma);

    return 0;
}
*/
//Números pares
//Exiba apenas os números pares entre 1 e 20 usando for.

/*
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    for (int par = 1; par <= 20; par++)
    {
        if (par % 2 == 0)
        {
            printf("%d\n", par);
        }

    }

    return 0;

}
*/
/*Validação de entrada
Peça ao usuário para digitar um número entre 1 e 10. Repita até ele digitar um valor válido usando do-while.*/
/*
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    
    int escolha;

    do
    {
        printf("Escolha um numero entre 1 e 10:\nR: ");
        scanf("%d", &escolha);  
    }
    
    while (escolha < 1 || escolha > 10);

    printf("numero %d escolhido!", escolha);

    return 0;

}
*/

/*Menu interativo
Crie um menu com opções 1-Somar, 2-Subtrair, 0-Sair. Repita até o usuário digitar 0, usando do-while.*/
/*
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int escolha;

    do
    {
        printf("=== menu ===\n\n");
        printf("[1] - Somar\n");
        printf("[2] - Subtrair\n");
        printf("[0] - Sair\n");

        printf("Escolha: ");
        scanf("%d", &escolha);


    }
    while (escolha != 0);

    return 0;

}
*/

/*Fatorial de N
Leia um número N e calcule seu fatorial usando for. Ex: 5! = 120.*/

