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

// ATIVIDADE 2 - Faça um fluxograma para receber um número qualquer e informar na tela se é PAR ou ÍMPAR.

#include <stdio.h>

int main()
{
    int num;
    
    printf("Digite um numero para ver se ele e PAR ou IMPAR\n");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("Este numero e PAR!");
    }
    else
    {
        printf("Este numero e IMPAR!");
    }
    
    
    
    return 0;
}

