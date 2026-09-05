#include <stdio.h>
#include <locale.h>



int main()
{   
    setlocale(LC_ALL, "PT.BR_UTF-8");

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
        printf(" Escolha sua acao para hoje:\n");
        printf(" [1] - Cacar\n");
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
            printf("Voce ganhou +2 unidades de comida, mas perde 15 pontos de vida devido aos perigos e ao cansaco da caca :c\n");
            //printf("\nComida: %d\n", comida);
            //printf("Vida: %d\n", vida);
            //return;
        }

        else if (escolha == 2)
        {
            printf("\nVoce tenta se alimentar para recuperar energias...\n");
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
            printf("\nVoce decidiu poupar esforcos!\n");
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
            printf("Parabens! O resgate chegou e voce sobreviveu aos 7 dias na floresta!");
        }
        else if (vida <= 0)
        {   
            vida = 0;
            printf("Voce sucumbiu aos perigos da floresta no dia %d. Fim de jogo!", dias);
        }
    
    }
    
    return 0;


}