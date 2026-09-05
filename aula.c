/*//PRIMEIRO PASSO - IMPORTAR AS BIBLIOTECAS QUE IRÃO SER UTILIZADAS
#include <stdio.h>

//SEGUNDO PASSO - CRIAR O MÉTODO MAIN
int main ()
{
    //PRINTF EQUIVALE AO SÍMBOLO DE SAÍDA DE DADOS DO FLUXOGRAMA
    printf("OLA MUNDO\n");
    printf("BEM VINDO AO MUNDO DA PROGRAMACAO");

    //DEFINIÇÃO DO RETORNO DA FUNÇÃO MAIN
    return 0;
*/

//--------------------------------------------------------------------------------


/*#include <stdio.h>

int main()
{
    
    //declara a variavel
    int num;
    
    //realiza a solicitação de entrada de um valor
    printf("Informe um valor: \n");
    scanf("%d", &num);
    
    //mostra o resultado e o %d" mostra a variavel que foi guardada
    printf------------------("Você digitou o numero: %d", num);------------------
    
    return 0;
    
    
}*/

//--------------------------------------------------------------------------------

/*#include <stdio.h>

int main()

{
    // GRAVAÇÃO DAS VARIAVEIS
    int num;
    
    //SOLICITAR PARA O USUARIO UM VALOR 
    printf("Informe um valor: \n");
    scanf("%d", &num);
    
    if (num % 2 == 0)
    {
        printf("O valor é PAR!\n");
    }
    else
    {
        printf("O valor é IMPAR!\n");
    }
    
    return 0;
    
    
}*/

//--------------------------------------------------------------------------------

/*#include <stdio.h>
#include <locale.h>

int main()

{
    //INSERINDO O PADRAO DE CARACTERIS BRASILEIROS
    setlocale (LC_ALL, "portuguese");
    
    float nota1, nota2, nota3, nota4;
    
    printf("Informe a primeira nota do aluno: \n");
    scanf("%f", &nota1);
    
    printf("Informe a segunda nota do aluno: \n");
    scanf("%f", &nota2);
    
    printf("Informe a terceira nota do aluno: \n");
    scanf("%f", &nota3);
    
    printf("Informe a quarta nota do aluno: \n");
    scanf("%f", &nota4);
    
    float media= (nota1 + nota2 + nota3 + nota4)/4;
    
    if (media >= 70)
    {
        printf("Aluno APROVADO!");
    }
    else if(media < 70 && media >=30)
    {
        float faltante = 70 - media;
        printf("Aluno em EXAME, necessita de %.1f de nota\n", faltante);
    }
    else
    {
        printf("Aluno REPROVADO!\n");
    }

    return 0;
}
*/

//--------------------------------------------------------------------------------

/*//IMPORTANDO AS BIBLIOTECAS
#include <stdio.h>

//IMPLEMENTANDO O METODO MAIN
int main()

{
    
    //DEFINIÇÃO DE VARIAVEIS
    int a, b, c;
    
    //SAIDA DE DADOS
    printf("Informe um valor: \n");
    
    //ENTRADA DE DADOS
    scanf("%d", &a);
    
    printf("Informe outro valor: \n");
    scanf("%d", &b);
    
    printf("Informe outro valor: \n");
    scanf("%d", &c);
    
    if((a + b) < c)
    {
        printf("A soma de A + B e menor que C \n");
    }
    else
    {
        printf("A soma de A + B e maior que C");
    }
    
    
    return 0;
    
    
}
*/

//--------------------------------------------------------------------------------


/*#include <stdio.h>

int main()

{
    int num;
    
    printf("Informe um numero: \n");
    scanf("%d", &num);
    
    if (num % 2 == 0)
    
    {
        printf("O numero é PAR!\n");
    }
    
    else
    
    {
        printf("O numero é IMPAR! \n");
    }
    
    
    return 0;
    
    
}
*/

//--------------------------------------------------------------------------------

/*// ATIVIDADE 1

# include <stdio.h>

int main()
{
    int a, b, c;
    
    printf("Informe o primeiro numero: \n");
    scanf("%d", &a);
    
    printf("Informe o segundo numero: \n");
    scanf("%d", &b);
    
    printf("Informe o terceiro numero: \n");
    scanf("%d", &c);
    
    if ((a + b) < c)
    
    {
        printf("\nO numero %d \n", a);
        printf("Somado com o numero %d \n", b);
        printf("São menores que o numero %d \n", c);
    }
    
    else
    {
        printf("A soma dos dois numeros é maior que %d", c);
    }

    return 0;
}*/

//--------------------------------------------------------------------------------

/*/ ATIVIDADE 2 - Faça um fluxograma para receber um número qualquer e informar na tela se é PAR ou ÍMPAR.

#include <stdio.h>

int main()
{
    int num;
    
    printf("Digite um numero para ver se ele e PAR ou IMPAR\n");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("Este numero e PAR!\n");
    }
    else
    {
        printf("Este numero e IMPAR!\n");
    }

    return 0;
    
}
*/

//-----------------------------------------------------------------------------------

/*/ ATIVIDADE 3 - Faça um fluxograma que leia dois valores inteiros A e B, se os valores forem
// iguais deverá somar os dois, caso contrário, multiplicar A por B. Ao final de
// qualquer um dos cálculos deve-se atribuir o resultado para uma variável C e
// mostrar seu conteúdo na tela.

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &a);

    printf("Digite o segundo numero: \n");
    scanf("%d", &b);

    if (a == b)
    {
        c = a + b;
        printf("O resultado da soma e: %d", c);
    }
    else
    {
        c = a * b;
        printf("O resultado da multiplicacao e: %d", c);
    }

    return 0;

}*/

// ---------------------------------------------------------------------------------------------

/*// seja positivo e o seu triplo caso seja negativo, imprimindo o resultado.

#include <stdio.h>

int main()
{
    int numero1;

    printf("Digite um numero positivo ou negativo: \n");
    scanf("%d", &numero1);

    if (numero1 < 0)
    {
        numero1 = numero1 * 3;
        printf("Este numero e negativo!\n%d", numero1);
    }
    else
    {
        numero1 = numero1 * 2;
        printf("Este numero e positivo!\n%d", numero1);
    }

    return 0;


}
*/

// --------------------------------------------------------------------------------------------

/*// ATIVIDADE 5 - Escreva um fluxograma que leia uma variável e some 5 caso seja par ou some 8
// caso seja ímpar, imprima o resultado desta operação.

#include <stdio.h>

int main()
{   
    int num;

    printf("Digite um numero par ou impar: \n");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        num = num + 5;
        printf("Este numero e PAR e foi atribuido +5 no resultado: %d", num);
    }
    else
    {
        num = num + 8;
        printf("Este numero e IMPAR e foi atribuido +8 no resultado: %d", num);
    }

}
*/

// -----------------------------------------------------------------------------------------------

/* ATIVIDADE 6 - O IMC – Índice de Massa Corporal é um critério da Organização Mundial da
Saúde para dar uma indicação sobre a condição de peso de uma pessoa adulta. A
fórmula é IMC = peso/ (altura)². Elabore um fluxograma que leia o peso e a
altura de um adulto e mostre sua condição de acordo com a tabela abaixo.
Abaixo de 18,5 Abaixo do Peso
Entre 18,5 e 25 Peso Normal
Entre 25 e 30 Acima do Peso
Acima de 30 Obeso */

/*#include <stdio.h>
#include <math.h>

int main()
{
    float peso, altura, imc;

    printf("\n-- CALCULADORA IMC --\n");


    printf("Para calcular seu IMC digite seu peso: \n");
    scanf("%f", &peso);

    printf("Agora, digite sua altura: \n");
    scanf("%f", &altura);

    imc = peso / pow(altura, 2);

    if (imc < 18.5)

    {
        printf("Voce esta abaixo do peso!\n%.1f", imc);
    }

    else if (imc >= 18.5 && imc <=25 )

    {
        printf("Voce esta no peso ideal!\n%.1f", imc);
    }

    else if (imc >=26 && imc <=30)

    {
        printf("Voce esta acima do peso\n%.1f", imc);
    }

    else
    {
        printf("Voce esta obeso(a)\n%.1f", imc);
    }

    return 0;

}*/

// --------------------------------------------------------------------------------------------------------------------

/*Escreva um programa para ler 2 valores (considere que não serão
informados valores iguais) e escrever o maior deles.*/
/*
#include <stdio.h>

int main()
{
    int valor1, valor2;

    printf("Informe o primeiro numero: \n");
    scanf("%d", &valor1);

    printf("Informe o segundo numero: \n");
    scanf("%d", &valor2);


    if (valor1 > valor2)
    {
        printf(" O maior numero e: %d", valor1);
    }
    else
    {
        printf("o maior numero e: %d", valor2);
    }

    return 0;

}
*/
// --------------------------------------------------------------------------------------------------------------------

/*2. Escreva um programa para ler o ano de nascimento de uma pessoa e
escrever uma mensagem que diga se ela poderá ou não votar este
ano (não é necessário considerar o mês em que ela nasceu).*/
/*
#include <stdio.h>

int main()
{
    int ano;
    
    printf("Digite seu ano de nascimento: \n");
    scanf("%d", &ano);

    if (ano > 2008)
    {
        printf("Desculpe, voce ainda nao pode votar!");
    }
    else if (ano < 2008)
    {
        printf("Voto registrado com sucesso!");
    }

    return 0;
}
*/
// --------------------------------------------------------------------------------------------------------------------

/*3. Escreva um programa que verifique a validade de uma senha fornecida
pelo usuário. A senha válida é o número 1234. Devem ser impressas
as seguintes mensagens:
ACESSO PERMITIDO caso a senha seja válida.
ACESSO NEGADO caso a senha seja inválida.*/
/*
#include <stdio.h>

int main()
{
    int senha;

    printf("--- DIGITE A SENHA PARA TER ACESSO ---\nR: ");
    scanf("%d", &senha);

    if (senha == 1234)
    {
        printf("ACESSO PERMITIDO");
    }

    else
    {
        printf("ACESSO NEGADO");
    }

    return 0;

}

*/
// ------------------------------------------------------------------------------------------------------------------

/*4. As maçãs custam R$ 0,30 cada se forem compradas menos do que uma
dúzia, e R$ 0,25 se forem compradas pelo menos doze. Escreva um
programa que leia o número de maçãs compradas, calcule e escreva
o valor total da compra.*/
/*
#include <stdio.h>

int main()
{
    float maca;

    printf("Digite quantas macas voce deseja:\nR: ");
    scanf("%f", &maca);

    if (maca >= 12)
    {
        maca = maca * 0.25;
        printf("\nTOTAL DA COMPRA: %.2f Reais", maca);
    }
    else
    {
        maca = maca * 0.30;
        printf("\nTOTAL DA COMPRA: %.2f Reais", maca);
    }

    return 0;
}
*/
// -----------------------------------------------------------------------------------------------------------------

/*5. Escreva um programa para ler 3 valores inteiros (considere que não
serão lidos valores iguais) e escrevê-los em ordem crescente.*/
/*

#include <stdio.h>

int main()
{
    int valor1, valor2, valor3;

    printf("Digite o primeiro numero:\nR: ");
    scanf("%d", &valor1);

    printf("Digite o segundo numero:\nR: ");
    scanf("%d", &valor2);

    printf("Digite o terceiro numero:\nR: ");
    scanf("%d", &valor3);

    if (valor1 > valor2 && valor1 > valor3)
    {
        if (valor2 > valor3)
        {
            printf("O ranking ficou: %d, %d, %d", valor1, valor2, valor3);
        }
        else
        {
            printf("O ranking ficou: %d, %d, %d", valor1, valor3, valor2);
        }

    }
    else if (valor2 > valor1 && valor2 > valor3)
    {
        if()
    }

    return 0;


}

*/

// ---------------------------------------------------------------------------------------------------------

/*DESAFIO ROBO - ATIVIDADE*/
/*
#include <stdio.h>
#include <locale.h>



int main()
{   
    setlocale(LC_ALL, "pt.BR_UTF-8");

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
            printf("Voce ganhou +2 unidades de comida, mas perde 15 pontos de vida devido aos perigos e ao cansaco da caca :c\n");
            
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


}*/

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

