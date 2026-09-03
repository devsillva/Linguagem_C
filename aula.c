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


