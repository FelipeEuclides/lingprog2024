#include <stdio.h>
#include <stdlib.h>

/*
Exercícios sobre os comandos básicos em C
*/

// 1. Faça um programa que imprima o seu nome.
void q01() {
    printf("Jubileu\n");
}

// 2. Faça um programa que imprima o produto dos valores 30 e 27.
void q02() {
    printf("Produto: %d\n", 30 * 27);
}

// 3. Faça um programa que imprima a média aritmética entre os números 5, 8, 12.
void q03() {
    int a = 5, b = 8, c = 12;
    float m = (a + b + c) / 3.0;

    printf("A media é: %d %d %d %f\n", a, b, c, m);
}

// 4. Faça um programa que leia e imprima um número inteiro.
void q04() {
    int f;
    printf("digite um numero: ");
    scanf("%d", &f);

    printf("O numero é: %d\n", f);
}
// 5. Faça um programa que leia dois números reais e os imprima.
void q05() {
    float a, b;

    printf("Digite um numero: ");
    scanf("%f", &a);

    printf("Digite outro numero: ");
    scanf("%f", &b);

    printf("Os numeros sao: %f %f\n", a, b);
}
// 6. Faça um programa que leia um número inteiro e imprima o seu
//    antecessor e o seu sucessor.
void q06() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    printf("Antecessor: %d\n", num - 1);
    printf("Sucessor: %d\n", num + 1);
}

// 7. Faça um programa que leia o nome, o endereço e o telefone de
//    um cliente e ao final, imprima esses dados.
void q07() {
    char nome[100], endereco[100], telefone[20];

    printf("Digite o nome do cliente: ");
    scanf(" %[^\n]", nome);

    printf("Digite o endereço do cliente: ");
    scanf(" %[^\n]", endereco);

    printf("Digite o telefone do cliente: ");
    scanf(" %[^\n]", telefone);

    printf("Nome: %s\n", nome);
    printf("Endereço: %s\n", endereco);
    printf("Telefone: %s\n", telefone);
}

// 8. Faça um programa que leia dois números inteiros e imprima a
//    subtração deles.
void q08() {
    int num1, num2;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    printf("Subtração: %d\n", num1 - num2);
}

// 9. Faça um programa que leia um número real e imprima ¼ deste número.
void q09() {
    float num;

    printf("Digite um número real: ");
    scanf("%f", &num);

    printf("1/4 do número: %.2f\n", num * 0.25);
}

// 10. Faça um programa que leia três números reais e calcule a
//     média aritmética destes números. Ao final, o programa deve
//     imprimir o resultado do cálculo.
void q10() {
    float num1, num2, num3, media;

    printf("Digite três números reais separados por espaço: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    media = (num1 + num2 + num3) / 3;

    printf("Média aritmética: %.2f\n", media);
}

// 11. Faça um programa que leia dois números reais e calcule as
//     quatro operações básicas entre estes dois números: adição,
//     subtração, multiplicação e divisão. Ao final, o programa
//     deve imprimir os resultados dos cálculos.
void q11() {
    float num1, num2;

    printf("Digite dois números reais separados por espaço: ");
    scanf("%f %f", &num1, &num2);

    printf("Soma: %.2f\n", num1 + num2);
    printf("Subtração: %.2f\n", num1 - num2);
    printf("Multiplicação: %.2f\n", num1 * num2);
    
    if (num2 != 0) {
        printf("Divisão: %.2f\n", num1 / num2);
    } else {
        printf("Divisão por zero não é possível.\n");
    }
}

// 12. Faça um programa que leia um número real e calcule o
//     quadrado deste número. Ao final, o programa deve
//     imprimir o resultado do cálculo.
void q12() {
    float num;

    printf("Digite um número real: ");
    scanf("%f", &num);

    printf("Quadrado: %.2f\n", num * num);
}

// 13. Faça um programa que leia o saldo de uma conta poupança e
//     imprima o novo saldo, considerando um reajuste de 2%.
void q13() {
    float saldo;

    printf("Digite o saldo da conta poupança: ");
    scanf("%f", &saldo);

    saldo *= 1.02; // Aumento de 2%

    printf("Novo saldo: %.2f\n", saldo);
}

// 14. Faça um programa que leia a base e a altura de um retângulo
//     e imprima o perímetro (base + altura) e a área (base * altura).
void q14() {
    float base, altura;

    printf("Digite a base e a altura do retângulo separadas por espaço: ");
    scanf("%f %f", &base, &altura);

    printf("Perímetro: %.2f\n", 2 * (base + altura));
    printf("Área: %.2f\n", base * altura);
}

// 15. Faça um programa que leia o valor de um produto, o percentual
//     do desconto desejado e imprima o valor do desconto e o valor
//     do produto subtraindo o desconto.
void q15() {
    float valorProduto, percentualDesconto;

    printf("Digite o valor do produto: ");
    scanf("%f", &valorProduto);

    printf("Digite o percentual de desconto: ");
    scanf("%f", &percentualDesconto);

    float desconto = valorProduto * (percentualDesconto / 100);
    float valorComDesconto = valorProduto - desconto;

    printf("Desconto: %.2f\n", desconto);
    printf("Valor do produto com desconto: %.2f\n", valorComDesconto);
}

// 16. Faça um programa que calcule o reajuste do salário de um
//     funcionário. Para isso, o programa deverá ler o salário atual
//     do funcionário e ler o percentual de reajuste. Ao final imprimir
//     o valor do novo salário.
void q16() {
    float salarioAtual, percentualReajuste;

    printf("Digite o salário atual do funcionário: ");
    scanf("%f", &salarioAtual);

    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percentualReajuste);

    float novoSalario = salarioAtual * (1 + percentualReajuste / 100);

    printf("Novo salário: %.2f\n", novoSalario);
}

// 17. Faça um programa que calcule a conversão entre graus centígrados
//     e Fahrenheit. Para isso, leia o valor em centígrados e calcule
//     com base na fórmula a seguir. Após calcular o programa deve
//     imprimir o resultado da conversão.
//     F = (9 x C + 160) / 5
void q17() {
    float celsius, fahrenheit;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (9 * celsius + 160) / 5;

    printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit);
}

// 18. Faça um programa que calcule a quantidade de litros de combustível
//     consumidos em uma viagem, sabendo-se que o carro tem autonomia de
//     12 km por litro de combustível. O programa deverá ler o tempo
//     decorrido na viagem e a velocidade média e aplicar as fórmulas:
//     D = T x V       L = D / 12
//     Em que:
//     • D = Distância percorrida em horas
//     • T = Tempo
//     • V = Velocidade média
//     • L = Litros de combustível consumidos
//     Ao final, o programa deverá imprimir a distância percorrida e a
//     quantidade de litros consumidos na viagem.
void q18() {
    float tempo, velocidadeMedia, distancia, litros;

    printf("Digite o tempo decorrido na viagem (em horas): ");
    scanf("%f", &tempo);

    printf("Digite a velocidade média (em km/h): ");
    scanf("%f", &velocidadeMedia);

    distancia = tempo * velocidadeMedia;
    litros = distancia / 12;

    printf("Distância percorrida: %.2f km\n", distancia);
    printf("Litros de combustível consumidos: %.2f\n", litros);
}

// 19. Faça um programa que calcule o valor de uma prestação em atraso.
//     Para isso, o programa deve ler o valor da prestação vencida, a
//     taxa periódica de juros e o período de atraso. Ao final, o
//     programa deve imprimir o valor da prestação atrasada, o período
//     de atraso, os juros que serão cobrados pelo período de atraso, o
//     valor da prestação acrescido dos juros. Considere juros simples.
void q19() {
    float prestacaoVencida, taxaJuros, periodoAtraso, prestacaoAtrasada, juros;

    printf("Digite o valor da prestação vencida: ");
    scanf("%f", &prestacaoVencida);

    printf("Digite a taxa de juros (em porcentagem): ");
    scanf("%f", &taxaJuros);

    printf("Digite o período de atraso (em meses): ");
    scanf("%f", &periodoAtraso);

    juros = prestacaoVencida * (taxaJuros / 100) * periodoAtraso;
    prestacaoAtrasada = prestacaoVencida + juros;

    printf("Valor da prestação atrasada: %.2f\n", prestacaoAtrasada);
    printf("Período de atraso: %.0f meses\n", periodoAtraso);
    printf("Juros: %.2f\n", juros);
    printf("Valor da prestação acrescido dos juros: %.2f\n", prestacaoAtrasada);
}

// 20. Faça um programa que efetue a apresentação do valor da conversão
//     em real (R$) de um valor lido em dólar (US$). Para isso, será
//     necessário também ler o valor da cotação do dólar.
void q20() {
    float valorDolar, cotacao, valorReal;

    printf("Digite o valor em dólar (US$): ");
    scanf("%f", &valorDolar);

    printf("Digite a cotação do dólar: ");
    scanf("%f", &cotacao);

    valorReal = valorDolar * cotacao;

    printf("Valor em reais (R$): %.2f\n", valorReal);
}
int main() {
    q03();

    return EXIT_SUCCESS;
}