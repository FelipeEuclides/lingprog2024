#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//1. Faça um programa que leia dois valores numéricos inteiros e efetue a adição, caso o resultado seja maior que 10, apresentá-lo.
void questao01() {
    int num1, num2, resultado;

    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);

    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    resultado = num1 + num2;

    if (resultado > 10) {
        printf("Resultado: %d\n", resultado);
    }
}

//2. Faça um programa que leia dois valores inteiros e efetue a adição. Caso o valor somado seja maior que 20, este deverá ser apresentado somando-se a ele mais 8, caso o valor somado seja menor ou igual a 20, este deverá ser apresentado subtraindo-se 5.
void questao02() {
    int num1, num2, resultado;

    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);

    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    resultado = num1 + num2;

    if (resultado > 20) {
        resultado += 8;
    } else {
        resultado -= 5;
    }

    printf("Resultado: %d\n", resultado);
}

//3. Faça um programa que leia um número e imprima uma das duas mensagens: "É múltiplo de 3"ou "Não é múltiplo de 3".
void questao03() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num % 3 == 0) {
        printf("%d é múltiplo de 3.\n", num);
    } else {
        printf("%d não é múltiplo de 3.\n", num);
    }
}

//4. Faça um programa que leia um número e informe se ele é ou não divisível por 5.
void questao04() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num % 5 == 0) {
        printf("%d é divisível por 5.\n", num);
    } else {
        printf("%d não é divisível por 5.\n", num);
    }
}

//5. Faça um programa que leia um número e informe se ele é divisível por 3 e por 7.
void questao05() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 7 == 0) {
        printf("%d é divisível por 3 e por 7.\n", num);
    } else {
        printf("%d não é divisível por 3 e por 7.\n", num);
    }
}

//6. A prefeitura do Rio de Janeiro abriu uma linha de crédito para os funcionários
//estatutários. O valor máximo da prestação não poderá ultrapassar 30% do salário
//bruto. Faça um programa em linguagem C que permita entrar com o salário bruto e o
//valor da prestação e informar se o empréstimo pode ou não ser concedido.
void questao06() {
    float salario_bruto, prestacao;

    printf("Digite o salário bruto: ");
    scanf("%f", &salario_bruto);

    printf("Digite o valor da prestação: ");
    scanf("%f", &prestacao);

    if (prestacao <= salario_bruto * 0.3) {
        printf("Empréstimo concedido.\n");
    } else {
        printf("Empréstimo não concedido.\n");
    }
}

//7. Faça um programa que leia um número e indique se o número está compreendido
//entre 20 e 50 ou não.
void questao07() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num >= 20 && num <= 50) {
        printf("%d está compreendido entre 20 e 50.\n", num);
    } else {
        printf("%d não está compreendido entre 20 e 50.\n", num);
    }
}

//8. Faça um programa que leia um número e imprima uma das mensagens: 
//"Maior do que 20", "Igual a 20"ou "Menor do que 20".
void questao08() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num > 20) {
        printf("Maior do que 20.\n");
    } else if (num == 20) {
        printf("Igual a 20.\n");
    } else {
        printf("Menor do que 20.\n");
    }
}

//9. Faça um programa que permita entrar com o ano de nascimento da pessoa e como ano
//atual. O programa deve imprimir a idade da pessoa. Não se esqueça de verificar se o
//ano de nascimento informado é válido.
void questao09() {
    int ano_nascimento, ano_atual, idade;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    if (ano_nascimento <= ano_atual) {
        idade = ano_atual - ano_nascimento;
        printf("Idade: %d anos.\n", idade);
    } else {
        printf("Ano de nascimento inválido.\n");
    }
}

//10. Faça um programa que leia três números inteiros e imprima os três em ordem
//crescente.
void questao10() {
    int num1, num2, num3, temp;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 > num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("Números em ordem crescente: %d, %d, %d\n", num1, num2, num3);
}

//11. Faça um programa que leia 3 números e imprima o maior deles.
void questao11() {
    int num1, num2, num3, maior;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    maior = num1;

    if (num2 > maior) {
        maior = num2;
    }
    if (num3 > maior) {
        maior = num3;
    }

    printf("O maior número é: %d\n", maior);
}

//12. Faça um programa que leia a idade de uma pessoa e informe:
//• Se é maior de idade
//• Se é menor de idade
//• Se é maior de 65 anos
void questao12() {
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Maior de idade.\n");
    } else {
        printf("Menor de idade.\n");
    }

    if (idade > 65) {
        printf("Maior de 65 anos.\n");
    }
}

//13. Faça um programa que permita entrar com o nome, a nota da prova 1 e a nota da
//prova 2 de umaluno. O programa deve imprimir o nome, a nota da prova 1, a nota da prova 2, a média das notas e uma das mensagens: "Aprovado", "Reprovado"ou "em Prova Final"(a média é 7 para aprovação, menor que 3 para reprovação e as demais em prova final).
void questao13() {
    char nome[100];
    float nota1, nota2, media;

    printf("Digite o nome do aluno: ");
    scanf("%s", nome);

    printf("Digite a nota da prova 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota da prova 2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("Nome: %s\n", nome);
    printf("Nota da prova 1: %.2f\n", nota1);
    printf("Nota da prova 2: %.2f\n", nota2);
    printf("Média das notas: %.2f\n", media);

    if (media >= 7) {
        printf("Aprovado.\n");
    } else if (media < 3) {
        printf("Reprovado.\n");
    } else {
        printf("Em Prova Final.\n");
    }
}

//14. Faça um programa que permita entrar com o salário de uma pessoa e imprima o
//desconto do INSS segundo a tabela seguir:
//Salário Faixa de Desconto
//Menor ou igual à R$600,00 Isento
//Maior que R$600,00 e menor ou igual a R$1200,00 20%
//Maior que R$1200,00 e menor ou igual a R$2000,00 25%
//Maior que R$2000,00 30%
void questao14() {
    float salario, desconto;

    printf("Digite o salário: ");
    scanf("%f", &salario);

    if (salario <= 600) {
        desconto = 0;
    } else if (salario <= 1200) {
        desconto = salario * 0.20;
    } else if (salario <= 2000) {
        desconto = salario * 0.25;
    } else {
        desconto = salario * 0.30;
    }

    printf("Desconto do INSS: %.2f\n", desconto);
}

//15. Um comerciante comprou umproduto e quer vendê-lo com umlucro de 45% se o valor
//da compra for menor que R$20,00, caso contrário, o lucro será de 30%. Faça um programa que leia o valor do produto e imprima o valor da venda.
void questao15() {
    float valor_compra, valor_venda;

    printf("Digite o valor de compra do produto: ");
    scanf("%f", &valor_compra);

    if (valor_compra < 20) {
        valor_venda = valor_compra * 1.45;
    } else {
        valor_venda = valor_compra * 1.30;
    }

    printf("Valor de venda: %.2f\n", valor_venda);
}

//16. A confederação brasileira de natação irá promover eliminatórias para o próximo
//mundial. Faça um programa que receba a idade de um nadador e imprima a sua categoria segundo a tabela a seguir:
//Categoria Idade
//Infantil A 5 - 7 anos
//Infantil B 8 - 10 anos
//Juvenil A 11 - 13 anos
//Juvenil B 14 - 17 anos
//Sênior maiores de 18 anos
void questao16() {
    int idade;

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7) {
        printf("Categoria: Infantil A\n");
    } else if (idade >= 8 && idade <= 10) {
        printf("Categoria: Infantil B\n");
    } else if (idade >= 11 && idade <= 13) {
        printf("Categoria: Juvenil A\n");
    } else if (idade >= 14 && idade <= 17) {
        printf("Categoria: Juvenil B\n");
    } else {
        printf("Categoria: Sênior\n");
    }
}

//17. Depois da liberação do governo para as mensalidades dos planos de saúde, as pessoas começaram a fazer pesquisas para descobrir um bom plano, não muito caro. Umvendedor de um plano de saúde apresentou a tabela a seguir. Faça um programa que entre com o nome e a idade de uma pessoa e imprima o nome e o valor que ela deverá pagar.
//Idade Valor
//Até 10 anos R$30,00
//Acima de 10 até 29 anos R$60,00
//Acima de 29 até 45 anos R$120,00
//Acima de 45 até 59 anos R$150,00
//Acima de 59 até 65 anos R$250,00
//Maior que 65 anos R$400,00
void questao17() {
    char nome[100];
    int idade;
    float valor;

    printf("Digite o nome: ");
    scanf("%s", nome);

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade <= 10) {
        valor = 30.00;
    } else if (idade <= 29) {
        valor = 60.00;
    } else if (idade <= 45) {
        valor = 120.00;
    } else if (idade <= 59) {
        valor = 150.00;
    } else if (idade <= 65) {
        valor = 250.00;
    } else {
        valor = 400.00;
    }

    printf("Nome: %s\n", nome);
    printf("Valor a pagar: %.2f\n", valor);
}

//18. Faça um programa que leia um número inteiro entre 1 e 12 e escreva o mês correspondente. Caso o usuário digite umnúmero fora desse intervalo, deverá aparecer uma mensagem informando que não existe mês com este número. Utilize o switch para este problema.
void questao18() {
    int mes;

    printf("Digite um número entre 1 e 12: ");
    scanf("%d", &mes);

    switch (mes) {
        case 1:
            printf("Janeiro\n");
            break;
        case 2:
            printf("Fevereiro\n");
            break;
        case 3:
            printf("Março\n");
            break;
        case 4:
            printf("Abril\n");
            break;
        case 5:
            printf("Maio\n");
            break;
        case 6:
            printf("Junho\n");
            break;
        case 7:
            printf("Julho\n");
            break;
        case 8:
            printf("Agosto\n");
            break;
        case 9:
            printf("Setembro\n");
            break;
        case 10:
            printf("Outubro\n");
            break;
        case 11:
            printf("Novembro\n");
            break;
        case 12:
            printf("Dezembro\n");
            break;
        default:
            printf("Mês inválido.\n");
    }
}

//19. Em um campeonato nacional de arco-e-flecha, tem-se equipes de três jogadores para cada estado. Sabendo-se que os arqueiros de uma equipe não obtiveram o mesmo número de pontos, criar um programa que informe se uma equipe foi classificada, de acordo com a seguinte especificação:
//• Ler os pontos obtidos por cada jogador da equipe;
//• Mostrar esses valores em ordem decrescente;
//• Se a soma dos pontos for maior do que 100, imprimir a média aritmética entre eles, caso contrário, imprimir a mensagem "Equipe desclassificada".
void questao19() {
    int pontos[3], soma = 0;
    float media;

    printf("Digite os pontos do primeiro jogador: ");
    scanf("%d", &pontos[0]);

    printf("Digite os pontos do segundo jogador: ");
    scanf("%d", &pontos[1]);

    printf("Digite os pontos do terceiro jogador: ");
    scanf("%d", &pontos[2]);

    // Ordena os pontos em ordem decrescente
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (pontos[i] < pontos[j]) {
                int temp = pontos[i];
                pontos[i] = pontos[j];
                pontos[j] = temp;
            }
        }
    }

    printf("Pontos em ordem decrescente: %d, %d, %d\n", pontos[0], pontos[1], pontos[2]);

    soma = pontos[0] + pontos[1] + pontos[2];
    if (soma > 100) {
        media = soma / 3.0;
        printf("Média dos pontos: %.2f\n", media);
    } else {
        printf("Equipe desclassificada.\n");
    }
}

//20. O banco XXX concederá um crédito especial com juros de 2% aos seus clientes de acordo com o saldomédio no último ano. Faça um programa que leia o saldo médio de um cliente e calcule o valor do crédito de acordo com a tabela a seguir. O programa deve imprimir uma mensagem informando o saldo médio e o valor de crédito.
//Saldo Médio Percentual
//de 0 a 500 nenhum crédito
//de 501 a 1000 30% do valor do saldo médio
//de 1001 a 3000 40% do valor do saldo médio
//acima de 3001 50% do valor do saldo médio
void questao20() {
    float saldo_medio, credito;

    printf("Digite o saldo médio: ");
    scanf("%f", &saldo_medio);

    if (saldo_medio <= 500) {
        credito = 0;
    } else if (saldo_medio <= 1000) {
        credito = saldo_medio * 0.30;
    } else if (saldo_medio <= 3000) {
        credito = saldo_medio * 0.40;
    } else {
        credito = saldo_medio * 0.50;
    }

    printf("Saldo médio: %.2f\n", saldo_medio);
    printf("Valor do crédito: %.2f\n", credito);
}

//21. A biblioteca de uma Universidade deseja fazer um programa que leia o nome do livro que será emprestado, o tipo de usuário (professor ou aluno) e possa imprimir um recibo conforme mostrado a seguir. Considerar que o professor tem dez dias para devolver o livro e o aluno só três dias.
//• Nome do livro:
//• Tipo de usuário:
//• Total de dias:
void questao21() {
    char nome_livro[100], tipo_usuario[20];
    int total_dias;

    printf("Digite o nome do livro: ");
    scanf("%s", nome_livro);

    printf("Digite o tipo de usuário (professor ou aluno): ");
    scanf("%s", tipo_usuario);

    if (strcmp(tipo_usuario, "professor") == 0) {
        total_dias = 10;
    } else if (strcmp(tipo_usuario, "aluno") == 0) {
        total_dias = 3;
    } else {
        printf("Tipo de usuário inválido.\n");
        return;
    }

    printf("Nome do livro: %s\n", nome_livro);
    printf("Tipo de usuário: %s\n", tipo_usuario);
    printf("Total de dias para devolução: %d\n", total_dias);
}

//22. Construa um programa que leia o percurso em quilómetros, o tipo do carro e informe o consumo estimado de combustível, sabendo-se que umcarro tipo C faz 12 kmcom umlitro de gasolina, um tipo B faz 9 kme o tipo A, 8 km.
void questao22() {
    float percurso, consumo;
    char tipo_carro;

    printf("Digite o percurso em quilômetros: ");
    scanf("%f", &percurso);

    printf("Digite o tipo do carro (A, B ou C): ");
    scanf(" %c", &tipo_carro);

    switch (tipo_carro) {
        case 'A':
            consumo = percurso / 8;
            break;
        case 'B':
            consumo = percurso / 9;
            break;
        case 'C':
            consumo = percurso / 12;
            break;
        default:
            printf("Tipo de carro inválido.\n");
            return;
    }

    printf("Consumo estimado de combustível: %.2f litros\n", consumo);
}

//23. Escreva um programa que leia as idades de 2 homens e de 2 mulheres (considere que as idades dos homens serão sempre diferentes entre si, bem como as das mulheres). Calcule e escreva a soma das idades do homem mais velho com a mulher mais nova, e o produto das idades do homem mais novo com a mulher mais velha.
void questao23() {
    int idade_h1, idade_h2, idade_m1, idade_m2;
    int soma_idades, produto_idades;

    printf("Digite a idade do primeiro homem: ");
    scanf("%d", &idade_h1);

    printf("Digite a idade do segundo homem: ");
    scanf("%d", &idade_h2);

    printf("Digite a idade da primeira mulher: ");
    scanf("%d", &idade_m1);

    printf("Digite a idade da segunda mulher: ");
    scanf("%d", &idade_m2);

    // Determina o homem mais velho
    int homem_mais_velho = (idade_h1 > idade_h2) ? idade_h1 : idade_h2;

    // Determina a mulher mais nova
    int mulher_mais_nova = (idade_m1 < idade_m2) ? idade_m1 : idade_m2;

    // Calcula a soma das idades do homem mais velho com a mulher mais nova
    soma_idades = homem_mais_velho + mulher_mais_nova;

    // Calcula o produto das idades do homem mais novo com a mulher mais velha
    int homem_mais_novo = (idade_h1 < idade_h2) ? idade_h1 : idade_h2;
    int mulher_mais_velha = (idade_m1 > idade_m2) ? idade_m1 : idade_m2;
    produto_idades = homem_mais_novo * mulher_mais_velha;

    printf("Soma das idades do homem mais velho com a mulher mais nova: %d\n", soma_idades);
    printf("Produto das idades do homem mais novo com a mulher mais velha: %d\n", produto_idades);
}

//24. Faça um programa que leia um valor inteiro entre 1 e 7 correspondendo a um dia da semana (sendo 1 para domingo), e imprima o dia da semana por extenso.
void questao24() {
    int dia;

    printf("Digite um número entre 1 e 7: ");
    scanf("%d", &dia);

    switch (dia) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terça-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sábado\n");
            break;
        default:
            printf("Dia da semana inválido.\n");
    }
}

//25. Uma fruteira está vendendo frutas com a seguinte tabela de preços:
//                      Até 5 Kg           Acima de 5 Kg
//Morango         R$ 2,50 por Kg       R$ 2,20 por Kg
//Maçã                R$ 1,80 por Kg       R$ 1,50 por Kg
//Se o cliente comprar mais de 8 Kg em frutas ou o valor total da compra ultrapassar R$ 25,00, receberá ainda um desconto de 10% sobre este total. Escreva um algoritmo para ler a quantidade (em Kg) de morangos e a quantidade (em Kg) de maças adquiridas e escreva o valor a ser pago pelo cliente.
void questao25() {
    float kg_morango, kg_maca, valor_morango, valor_maca, total, desconto;

    printf("Digite a quantidade de morangos (em Kg): ");
    scanf("%f", &kg_morango);

    printf("Digite a quantidade de maçãs (em Kg): ");
    scanf("%f", &kg_maca);

    if (kg_morango <= 5) {
        valor_morango = kg_morango * 2.50;
    } else {
        valor_morango = kg_morango * 2.20;
    }

    if (kg_maca <= 5) {
        valor_maca = kg_maca * 1.80;
    } else {
        valor_maca = kg_maca * 1.50;
    }

    total = valor_morango + valor_maca;

    if ((kg_morango + kg_maca) > 8 || total > 25.00) {
        desconto = total * 0.10;
        total -= desconto;
    }

    printf("Valor a ser pago pelo cliente: R$ %.2f\n", total);
}

int main() {
    int opcao;

    printf("Digite o número da questão (1 a 25): ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            questao01();
            break;
        case 2:
            questao02();
            break;
        case 3:
            questao03();
            break;
        case 4:
            questao04();
            break;
        case 5:
            questao05();
            break;
        case 6:
            questao06();
            break;
        case 7:
            questao07();
            break;
        case 8:
            questao08();
            break;
        case 9:
            questao09();
            break;
        case 10:
            questao10();
            break;
        case 11:
            questao11();
            break;
        case 12:
            questao12();
            break;
        case 13:
            questao13();
            break;
        case 14:
            questao14();
            break;
        case 15:
            questao15();
            break;
        case 16:
            questao16();
            break;
        case 17:
            questao17();
            break;
        case 18:
            questao18();
            break;
        case 19:
            questao19();
            break;
        case 20:
            questao20();
            break;
        case 21:
            questao21();
            break;
        case 22:
            questao22();
            break;
        case 23:
            questao23();
            break;
        case 24:
            questao24();
            break;
        case 25:
            questao25();
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    return EXIT_SUCCESS;
}