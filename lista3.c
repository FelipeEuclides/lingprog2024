#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Exercício 1: Faça um programa que imprima todos os números de 1 até 100.
void exercicio1() {
    int i;
    for (i = 1; i <= 100; i++) {
        printf("%d\n", i);
    }
}

// Exercício 2: Faça um programa que imprima todos os números pares de 100 até 1.
void exercicio2() {
    int i;
    for (i = 100; i >= 1; i--) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
}

// Exercício 3: Faça um programa que imprima os múltiplos de 5, no intervalo de 1 até 500.
void exercicio3() {
    int i;
    for (i = 1; i <= 500; i++) {
        if (i % 5 == 0) {
            printf("%d\n", i);
        }
    }
}

// Exercício 4: Faça um programa que imprima o nome da pessoa se ela for do sexo masculino e tiver mais de 21 anos.
void exercicio4() {
    int i;
    char nome[20];
    int idade;
    char sexo;

    for (i = 0; i < 20; i++) {
        printf("Digite o nome: ");
        scanf("%s", nome);
        printf("Digite a idade: ");
        scanf("%d", &idade);
        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);

        if (sexo == 'M' && idade > 21) {
            printf("%s\n", nome);
        }
    }
}

// Exercício 5: Crie um programa que calcule o produto de dois números inteiros lidos.
void exercicio5() {
    int num1, num2, produto;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    produto = num1 * num2;
    printf("O produto é: %d\n", produto);
}

// Exercício 6: Crie um programa que imprima os 20 primeiros termos da série de Fibonacci.
void exercicio6() {
    int i, n, primeiro = 0, segundo = 1, proximo;
    printf("Os 20 primeiros termos da série de Fibonacci são:\n");
    for (i = 0; i < 20; i++) {
        if (i <= 1) {
            proximo = i;
        } else {
            proximo = primeiro + segundo;
            primeiro = segundo;
            segundo = proximo;
        }
        printf("%d\n", proximo);
    }
}

// Exercício 7: Crie um programa que permita entrar com o nome, a nota da prova 1 e da prova 2 de 15 alunos.
// Ao final, imprimir uma listagem, contendo: nome, nota da prova 1, nota da prova 2, e média das notas de cada aluno.
// Ao final, imprimir a média geral da turma.
void exercicio7() {
    int i;
    char nome[20];
    float nota1, nota2, media, mediaTurma = 0;

    for (i = 0; i < 15; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", nome);
        printf("Digite a nota da prova 1 do aluno %d: ", i + 1);
        scanf("%f", &nota1);
        printf("Digite a nota da prova 2 do aluno %d: ", i + 1);
        scanf("%f", &nota2);

        media = (nota1 + nota2) / 2;
        mediaTurma += media;

        printf("Aluno: %s, Nota 1: %.2f, Nota 2: %.2f, Média: %.2f\n", nome, nota1, nota2, media);
    }

    printf("Média geral da turma: %.2f\n", mediaTurma / 15);
}

// Exercício 8: Faça um programa que permita entrar com o nome e o salário bruto de 10 pessoas.
// Após ler os dados, imprimir o nome e o valor da alíquota do imposto de renda calculado conforme a tabela.
void exercicio8() {
    int i;
    char nome[20];
    float salario, irrf;

    for (i = 0; i < 10; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", nome);
        printf("Digite o salário bruto da pessoa %d: ", i + 1);
        scanf("%f", &salario);

        if (salario < 1300) {
            irrf = 0;
        } else if (salario < 2300) {
            irrf = salario * 0.10;
        } else {
            irrf = salario * 0.15;
        }

        printf("Nome: %s, IRRF: %.2f\n", nome, irrf);
    }
}

// Exercício 9: No dia da estreia do filme "Procurando Dory", uma grande emissora de TV realizou uma pesquisa.
// Criar um programa que receba a idade e a opinião de 20 espectadores, calcule e imprima:
// - A média das idades das pessoas que responderam excelente;
// - A quantidade de pessoas que responderam regular;
// - A percentagem de pessoas que responderam bom entre todos os espectadores analisados.
void exercicio9() {
    int i, idade, opiniao, totalBom = 0, totalRegular = 0, totalExcelente = 0, somaIdadeExcelente = 0;

    for (i = 0; i < 20; i++) {
        printf("Digite a idade do espectador %d: ", i + 1);
        scanf("%d", &idade);
        printf("Digite a opinião (1-regular, 2-bom, 3-excelente) do espectador %d: ", i + 1);
        scanf("%d", &opiniao);

        if (opiniao == 3) {
            totalExcelente++;
            somaIdadeExcelente += idade;
        } else if (opiniao == 1) {
            totalRegular++;
        } else if (opiniao == 2) {
            totalBom++;
        }
    }

    printf("Média das idades dos que responderam excelente: %.2f\n", (float)somaIdadeExcelente / totalExcelente);
    printf("Quantidade de pessoas que responderam regular: %d\n", totalRegular);
    printf("Percentagem de pessoas que responderam bom: %.2f%%\n", (float)(totalBom * 100) / 20);
}

// Exercício 10: Em um campeonato Europeu de Volleyball, se inscreveram 30 países.
// Sabendo-se que na lista oficial de cada país consta, além de outros dados, peso e idade de 12 jogadores,
// apresente as seguintes informações:
// - O peso médio e a idade média de cada um dos times;
// - O atleta mais pesado de cada time;
// - O atleta mais jovem de cada time;
// - O peso médio e a idade média de todos os participantes.
void exercicio10() {
    int i, j;
    float peso[30][12], idade[30][12], pesoTotal = 0, idadeTotal = 0, pesoMedio, idadeMedio;

    for (i = 0; i < 30; i++) {
        float pesoTime = 0, idadeTime = 0, pesoMaximo = 0, idadeMinima = 200;

        for (j = 0; j < 12; j++) {
            printf("Digite o peso do jogador %d do time %d: ", j + 1, i + 1);
            scanf("%f", &peso[i][j]);
            printf("Digite a idade do jogador %d do time %d: ", j + 1, i + 1);
            scanf("%f", &idade[i][j]);

            pesoTime += peso[i][j];
            idadeTime += idade[i][j];

            if (peso[i][j] > pesoMaximo) {
                pesoMaximo = peso[i][j];
            }

            if (idade[i][j] < idadeMinima) {
                idadeMinima = idade[i][j];
            }
        }

        pesoMedio = pesoTime / 12;
        idadeMedio = idadeTime / 12;

        printf("Time %d: Peso médio: %.2f, Idade média: %.2f\n", i + 1, pesoMedio, idadeMedio);
        printf("Atleta mais pesado: %.2f, Atleta mais jovem: %.2f\n", pesoMaximo, idadeMinima);

        pesoTotal += pesoTime;
        idadeTotal += idadeTime;
    }

    pesoMedio = pesoTotal / (30 * 12);
    idadeMedio = idadeTotal / (30 * 12);

    printf("Peso médio de todos os participantes: %.2f, Idade média de todos os participantes: %.2f\n", pesoMedio, idadeMedio);
}

// Exercício 11: Construa um programa que leia vários números e informe quantos números entre 100 e 200 foram digitados.
// Quando o valor 0 (zero) for lido, o algoritmo deverá cessar sua execução.
void exercicio11() {
    int numero, contador = 0;

    do {
        printf("Digite um número (digite 0 para sair): ");
        scanf("%d", &numero);

        if (numero >= 100 && numero <= 200) {
            contador++;
        }
    } while (numero != 0);

    printf("Quantidade de números entre 100 e 200: %d\n", contador);
}

// Exercício 13: Uma empresa de fornecimento de energia elétrica faz a leitura mensal dos medidores de consumo.
// Para cada consumidor, são digitados os seguintes dados:
// - número do consumidor
// - quantidade de kWh consumidos durante o mês
// - tipo (código) do consumidor
//   1 - residencial, preço em reais por kWh = 0.3
//   2 - comercial, preço em reais por kWh = 0.5
//   3 - industrial, preço em reais por kWh = 0.7
// Os dados devem ser lidos até que seja encontrado o consumidor com número 0 (zero).
// O programa deve calcular e imprimir:
// - O custo total para cada consumidor
// - O total de consumo para os três tipos de consumidor
// - A média de consumo dos tipos 1 e 2
void exercicio13() {
    int numero, tipo;
    float consumo, precoKwh, custo, totalResidencial = 0, totalComercial = 0, totalIndustrial = 0;
    int quantidadeResidencial = 0, quantidadeComercial = 0;
    float somaConsumoResidencial = 0, somaConsumoComercial = 0;

    do {
        printf("Digite o número do consumidor (ou 0 para sair): ");
        scanf("%d", &numero);

        if (numero != 0) {
            printf("Digite a quantidade de kWh consumidos: ");
            scanf("%f", &consumo);
            printf("Digite o tipo de consumidor (1 - residencial, 2 - comercial, 3 - industrial): ");
            scanf("%d", &tipo);

            switch (tipo) {
                case 1:
                    precoKwh = 0.3;
                    totalResidencial += consumo * precoKwh;
                    somaConsumoResidencial += consumo;
                    quantidadeResidencial++;
                    break;
                case 2:
                    precoKwh = 0.5;
                    totalComercial += consumo * precoKwh;
                    somaConsumoComercial += consumo;
                    quantidadeComercial++;
                    break;
                case 3:
                    precoKwh = 0.7;
                    totalIndustrial += consumo * precoKwh;
                    break;
                default:
                    printf("Tipo de consumidor inválido!\n");
                    break;
            }

            custo = consumo * precoKwh;
            printf("Custo total: R$%.2f\n", custo);
        }
    } while (numero != 0);

    printf("Total de consumo residencial: %.2f kWh\n", somaConsumoResidencial);
    printf("Total de consumo comercial: %.2f kWh\n", somaConsumoComercial);
    printf("Total de consumo industrial: %.2f kWh\n", totalIndustrial);
    printf("Média de consumo residencial e comercial: %.2f kWh\n", (somaConsumoResidencial + somaConsumoComercial) / (quantidadeResidencial + quantidadeComercial));
}


// Exercício 12: Dado um país A, com 5 milhões de habitantes e uma taxa de natalidade de 3% ao ano, e um país B com 7 milhões de habitantes e uma taxa de natalidade de 2% ao ano,
// fazer um programa que calcule e imprima o tempo necessário para que a população do país A ultrapasse a população do país B.
void exercicio12() {
    int populacaoA = 5000000, populacaoB = 7000000;
    int anos = 0;

    while (populacaoA <= populacaoB) {
        populacaoA *= 1.03; // Crescimento de 3% ao ano
        populacaoB *= 1.02; // Crescimento de 2% ao ano
        anos++;
    }

    printf("Serão necessários %d anos para a população do país A ultrapassar a população do país B.\n", anos);
}

// Exercício 14: Faça um programa que leia vários números inteiros e apresente o fatorial de cada número.
// O algoritmo encerra quando se digita um número menor do que 1.
void exercicio14() {
    int numero, i, j;
    long long fatorial;

    do {
        printf("Digite um número inteiro positivo (ou 0 para sair): ");
        scanf("%d", &numero);

        if (numero >= 1) {
            fatorial = 1;
            for (i = 1; i <= numero; i++) {
                fatorial *= i;
            }
            printf("Fatorial de %d: %lld\n", numero, fatorial);
        }
    } while (numero >= 1);
}

// Exercício 15: Faça um programa que permita entrar com a idade de várias pessoas e imprima:
// - Total de pessoas com menos de 21 anos
// - Total de pessoas com mais de 50 anos
void exercicio15() {
    int idade, menor21 = 0, maior50 = 0;

    do {
        printf("Digite a idade da pessoa (ou 0 para sair): ");
        scanf("%d", &idade);

        if (idade < 21 && idade > 0) {
            menor21++;
        } else if (idade > 50) {
            maior50++;
        }
    } while (idade != 0);

    printf("Total de pessoas com menos de 21 anos: %d\n", menor21);
    printf("Total de pessoas com mais de 50 anos: %d\n", maior50);
}

// Exercício 16: Sabendo-se que a unidade lógica e aritmética calcula a divisão por meio de subtrações sucessivas,
// criar um algoritmo que calcule e imprima o resto da divisão de números inteiros lidos.
// Para isso, basta subtrair o divisor do dividendo, sucessivamente, até que o resultado seja menor do que o divisor.
// O número de subtrações realizadas corresponde ao quociente inteiro e o valor restante da subtração corresponde ao resto.
// Suponha que os números lidos sejam positivos e que o dividendo seja maior do que o divisor.
void exercicio16() {
    int dividendo, divisor, resto;

    printf("Digite o dividendo: ");
    scanf("%d", &dividendo);
    printf("Digite o divisor: ");
    scanf("%d", &divisor);

    resto = dividendo;
    while (resto >= divisor) {
        resto -= divisor;
    }

    printf("Resto da divisão: %d\n", resto);
}
void exercicio17() {
    int numeroPedido, dia, mes, ano;
    float precoUnitario, totalCompra = 0;
    int quantidade;

    do {
        printf("Digite o número do pedido (ou 0 para sair): ");
        scanf("%d", &numeroPedido);

        if (numeroPedido != 0) {
            printf("Digite a data do pedido (dia mês ano): ");
            scanf("%d %d %d", &dia, &mes, &ano);
            printf("Digite o preço unitário: ");
            scanf("%f", &precoUnitario);
            printf("Digite a quantidade: ");
            scanf("%d", &quantidade);

            totalCompra += precoUnitario * quantidade;
        }
    } while (numeroPedido != 0);

    printf("Valor total da compra: R$%.2f\n", totalCompra);
}

// Exercício 18: Uma pousada estipulou o preço para a diária em R$30,00 e mais uma taxa de
// serviços diários de:
// - R$15,00, se o número de dias for menor que 10;
// - R$8,00, se o número de dias for maior ou igual a 10;
// Faça um programa que imprima o nome, a conta e o número da conta de cada
// cliente e ao final o total faturado pela pousada.
// O programa deverá ler novos clientes até que o usuário digite 0 (zero) como número da conta.
void exercicio18() {
    int numeroConta, numeroDias;
    char nome[100];
    float totalFaturado = 0;

    do {
        printf("Digite o número da conta (ou 0 para sair): ");
        scanf("%d", &numeroConta);

        if (numeroConta != 0) {
            printf("Digite o nome do cliente: ");
            scanf(" %[^\n]", nome);
            printf("Digite o número de dias de estadia: ");
            scanf("%d", &numeroDias);

            float taxaDiaria = (numeroDias < 10) ? 15.0 : 8.0;
            float totalConta = 30.0 + taxaDiaria * numeroDias;
            totalFaturado += totalConta;

            printf("Cliente: %s\n", nome);
            printf("Número da conta: %d\n", numeroConta);
            printf("Total da conta: R$%.2f\n", totalConta);
        }
    } while (numeroConta != 0);

    printf("Total faturado pela pousada: R$%.2f\n", totalFaturado);
}

// Exercício 19: Em uma Universidade, os alunos das turmas de informática fizeram uma prova de algoritmos.
// Cada turma possui um número de alunos. Criar um programa que imprima:
// - quantidade de alunos aprovados;
// - média de cada turma;
// - percentual de reprovados.
// Obs.: Considere aprovado com nota >= 7.0
void exercicio19() {
    int totalTurmas, totalAprovados = 0, totalAlunos = 0, totalReprovados = 0;
    float mediaTurma, nota, totalNotas;

    printf("Digite o número total de turmas: ");
    scanf("%d", &totalTurmas);

    for (int i = 0; i < totalTurmas; i++) {
        totalNotas = 0;
        printf("Turma %d:\n", i + 1);
        printf("Digite o número de alunos na turma: ");
        int alunos;
        scanf("%d", &alunos);

        for (int j = 0; j < alunos; j++) {
            printf("Digite a nota do aluno %d: ", j + 1);
            scanf("%f", &nota);
            totalNotas += nota;
            totalAlunos++;

            if (nota < 7.0) {
                totalReprovados++;
            } else {
                totalAprovados++;
            }
        }

        mediaTurma = totalNotas / alunos;
        printf("Média da turma %d: %.2f\n", i + 1, mediaTurma);
    }

    float percentualReprovados = (float)totalReprovados / totalAlunos * 100.0;
    printf("Total de alunos aprovados: %d\n", totalAprovados);
    printf("Percentual de reprovados: %.2f%%\n", percentualReprovados);
}
//20. Uma pesquisa de opinião realizada no Rio de Janeiro, teve as seguintes perguntas:
//• Qual o seu time de coração?
//1-Fluminense;
//2-Botafogo;
//3-Vasco;
//4-Flamengo;
//5-Outros
//• Onde você mora?
//1-RJ;
//2-Niterói;
//3-Outros
//• Qual o seu salário?
//Faça um programa que imprima:
//• o número de torcedores por clube;
//• a média salarial dos torcedores do Botafogo;
//• o número de pessoas moradoras do Rio de Janeiro, torcedores de outros
//clubes;
//• o número de pessoas de Niterói torcedoras do Fluminense
//3.12. Exercícios da Aula 73
//Obs.: O programa encerra quando se digita 0 para o time.

// Exercício 20
void exercicio20() {
    printf("\nExercício 20 - Pesquisa de opinião sobre times de futebol:\n");
    int torcedoresFluminense = 0, torcedoresBotafogo = 0, torcedoresVasco = 0, torcedoresFlamengo = 0, torcedoresOutros = 0;
    int moradoresRJOutros = 0, moradoresNiteroiFluminense = 0;
    float salarioBotafogo = 0;
    int time, local;
    float salario, totalSalarioBotafogo = 0;
    int totalTorcedores = 0;
    
    do {
        printf("Qual o seu time de coração? (1-Fluminense, 2-Botafogo, 3-Vasco, 4-Flamengo, 5-Outros, 0-Sair): ");
        scanf("%d", &time);
        
        if (time == 0) {
            break;
        }
        
        printf("Onde você mora? (1-RJ, 2-Niterói, 3-Outros): ");
        scanf("%d", &local);
        
        printf("Qual o seu salário? ");
        scanf("%f", &salario);
        
        if (time == 1) {
            torcedoresFluminense++;
            if (local == 2) {
                moradoresNiteroiFluminense++;
            }
        } else if (time == 2) {
            torcedoresBotafogo++;
            salarioBotafogo += salario;
        } else if (time == 3) {
            torcedoresVasco++;
            if (local == 1 && time != 3) {
                moradoresRJOutros++;
            }
        } else if (time == 4) {
            torcedoresFlamengo++;
            if (local == 1 && time != 4) {
                moradoresRJOutros++;
            }
        } else if (time == 5) {
            torcedoresOutros++;
            if (local == 1 && time != 5) {
                moradoresRJOutros++;
            }
        }
        
        totalTorcedores++;
    } while (time != 0);
    
    printf("Número de torcedores do Fluminense: %d\n", torcedoresFluminense);
    printf("Média salarial dos torcedores do Botafogo: %.2f\n", salarioBotafogo / torcedoresBotafogo);
    printf("Número de pessoas moradoras do Rio de Janeiro, torcedoras de outros clubes: %d\n", moradoresRJOutros);
    printf("Número de pessoas de Niterói torcedoras do Fluminense: %d\n", moradoresNiteroiFluminense);
}
//21. Emuma universidade cada aluno possui os seguintes dados:
//• Renda pessoal;
//• Renda familiar;
//• Total gasto com alimentação;
//• Total gasto com outras despesas;
//Faça um programa que imprima a porcentagem dos alunos que gasta acima de
//R$200,00 com outras despesas. O número de alunos com renda pessoal maior
//que a renda familiar e a porcentagem gasta com alimentação e outras despesas
//em relação às rendas pessoal e familiar.
//Obs.: O programa encerra quando se digita 0 para a renda pessoal.
// Exercício 21
void exercicio21() {
    printf("\nExercício 21 - Análise de despesas de alunos universitários:\n");
    int alunosAcima200 = 0, alunosRendaMaior = 0;
    float percentualDespesasAlimentacao = 0, percentualDespesasOutras = 0;
    float rendaPessoal, rendaFamiliar, despesasAlimentacao, despesasOutras;
    float totalAlunos = 0;
    
    do {
        printf("Renda pessoal do aluno (0 para sair): ");
        scanf("%f", &rendaPessoal);
        
        if (rendaPessoal == 0) {
            break;
        }
        
        printf("Renda familiar do aluno: ");
        scanf("%f", &rendaFamiliar);
        printf("Total gasto com alimentação: ");
        scanf("%f", &despesasAlimentacao);
        printf("Total gasto com outras despesas: ");
        scanf("%f", &despesasOutras);
        
        if (despesasOutras > 200.0) {
            alunosAcima200++;
        }
        
        if (rendaPessoal > rendaFamiliar) {
            alunosRendaMaior++;
        }
        
        totalAlunos++;
        percentualDespesasAlimentacao += (despesasAlimentacao / rendaPessoal) * 100;
        percentualDespesasOutras += (despesasOutras / rendaPessoal) * 100;
    } while (rendaPessoal != 0);
    
    printf("Porcentagem dos alunos que gastam acima de R$200,00 com outras despesas: %.2f%%\n", (alunosAcima200 / totalAlunos) * 100);
    printf("Número de alunos com renda pessoal maior que a renda familiar: %d\n", alunosRendaMaior);
    printf("Porcentagem gasta com alimentação em relação à renda pessoal: %.2f%%\n", percentualDespesasAlimentacao / totalAlunos);
    printf("Porcentagem gasta com outras despesas em relação à renda pessoal: %.2f%%\n", percentualDespesasOutras / totalAlunos);
}
//22. Crie um programa que ajude o DETRAN a saber o total de recursos que foram
//arrecadados com a aplicação de multas de trânsito.
//O algoritmo deve ler as seguintes informações para cada motorista:
//• número da carteira de motorista (de 1 a 4327);
//• número demultas;
//• valor de cada uma das multas.
//Deve ser impresso o valor da dívida para cada motorista e ao final da leitura o
//total de recursos arrecadados (somatório de todas as multas). O programa deverá
//imprimir tambémo número da carteira domotorista que obteve o maior número
//de multas.
//Obs.: O programa encerra ao ler a carteira de motorista de valor 0.
// Exercício 22
void exercicio22() {
    printf("\nExercício 22 - Arrecadação com multas de trânsito:\n");
    int numeroCarteira, numeroMultas, maiorNumeroMultas = 0;
    float valorMulta, totalArrecadado = 0;
    int carteiraMaiorNumeroMultas = 0;
    
    do {
        printf("Número da carteira de motorista (0 para sair): ");
        scanf("%d", &numeroCarteira);
        
        if (numeroCarteira == 0) {
            break;
        }
        
        printf("Número de multas: ");
        scanf("%d", &numeroMultas);
        
        if (numeroMultas > maiorNumeroMultas) {
            maiorNumeroMultas = numeroMultas;
            carteiraMaiorNumeroMultas = numeroCarteira;
        }
        
        for (int i = 0; i < numeroMultas; i++) {
            printf("Valor da multa %d: ", i + 1);
            scanf("%f", &valorMulta);
            totalArrecadado += valorMulta;
        }
    } while (numeroCarteira != 0);
    
    printf("Total arrecadado com multas: %.2f\n", totalArrecadado);
    printf("Número da carteira com o maior número de multas: %d\n", carteiraMaiorNumeroMultas);
}
//23. Crie um programa que leia um conjunto de informações (nome, sexo, idade, peso
//e altura) dos atletas que participaram de uma olimpíada, e informar:
//• a atleta do sexo feminino mais alta;
//• o atleta do sexomasculinomais pesado;
//• amédia de idade dos atletas.
//Obs.: Deverão se lidos dados dos atletas até que seja digitado o nome @ para um
//atleta.
//Para resolver este exercício, consulte a aula 7 que aborda o tratamento de strings,
//como comparação e atribuição de textos.
// Exercício 23
void exercicio23() {
    printf("\nExercício 23 - Análise de atletas olímpicos:\n");
    char nome[50], sexo;
    int idade;
    float peso, altura;
    char nomeMaisAlta[50];
    char nomeMaisPesado[50];
    float alturaMaisAlta = 0;
    float pesoMaisPesado = 0;
    float somaIdades = 0;
    int contadorAtletas = 0;
    
    printf("Digite os dados dos atletas (para sair, digite '@' no nome):\n");
    
    while (1) {
        printf("Nome: ");
        scanf("%s", nome);
        
        if (nome[0] == '@') {
            break;
        }
        
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);
        printf("Idade: ");
        scanf("%d", &idade);
        printf("Peso (kg): ");
        scanf("%f", &peso);
        printf("Altura (m): ");
        scanf("%f", &altura);
        
        if (sexo == 'F' && altura > alturaMaisAlta) {
            alturaMaisAlta = altura;
            strcpy(nomeMaisAlta, nome);
        }
        
        if (sexo == 'M' && peso > pesoMaisPesado) {
            pesoMaisPesado = peso;
            strcpy(nomeMaisPesado, nome);
        }
        
        somaIdades += idade;
        contadorAtletas++;
    }
    
    if (contadorAtletas > 0) {
        printf("Atleta do sexo feminino mais alta: %s\n", nomeMaisAlta);
        printf("Atleta do sexo masculino mais pesado: %s\n", nomeMaisPesado);
        printf("Média de idade dos atletas: %.2f\n", somaIdades / contadorAtletas);
    } else {
        printf("Nenhum atleta registrado.\n");
    }
}
//24. Faça um programa que calcule quantos litros de gasolina são usados em uma
//viagem, sabendo que um carro faz 10 km/litro. O usuário fornecerá a velocidade
//do carro e o período de tempo que viaja nesta velocidade para cada trecho do
//percurso. Então, usando as fórmulas distância = tempo x velocidade e litros
//consumidos = distância / 10, o programa computará, para todos os valores nãonegativos
//de velocidade, os litros de combustível consumidos. O programa deverá
//imprimir a distância e o número de litros de combustível gastos naquele trecho.
//Deverá imprimir também o total de litros gastos na viagem. O programa encerra
//quando o usuário informar umvalor negativo de velocidade.
//74 Aula 3. Estruturas de Iteração
// Exercício 24
void exercicio24() {
    printf("\nExercício 24 - Cálculo do consumo de gasolina em uma viagem:\n");
    float velocidade, tempo, distancia, litrosConsumidos = 0;
    
    while (1) {
        printf("Digite a velocidade (km/h): ");
        scanf("%f", &velocidade);
        
        if (velocidade < 0) {
            break;
        }
        
        printf("Digite o tempo (horas): ");
        scanf("%f", &tempo);
        
        distancia = velocidade * tempo;
        litrosConsumidos = distancia / 10.0;
        
        printf("Distância percorrida: %.2f km\n", distancia);
        printf("Litros consumidos: %.2f\n", litrosConsumidos);
    }
}
//25. Faça umprograma que calcule o imposto de renda de umgrupo de contribuintes,
//considerando que:
//a) os dados de cada contribuinte (CIC, número de dependentes e renda bruta
//anual) serão fornecidos pelo usuário via teclado;
//b) para cada contribuinte será feito umabatimento de R$600 por dependente;
//c) a renda líquida é obtida diminuindo-se o abatimento com os dependentes
//da renda bruta anual;
//d) para saber quanto o contribuinte deve pagar de imposto, utiliza-se a tabela
//a seguir:
//Renda Líquida Imposto
//até R$1000 Isento
//de R$1001 a R$5000 15%
//acima de R$5000 25%
//e) o valor de CIC igual a zero indica final de dados;
//f ) o programa deverá imprimir, para cada contribuinte, o número do CIC e o
//imposto a ser pago;
//g) ao final o programa deverá imprimir o total do imposto arrecadado pela
//Receita Federal e o número de contribuintes isentos;
//h) leve em consideração o fato de o primeiro CIC informado poder ser zero.
// Exercício 25
void exercicio25() {
    printf("\nExercício 25 - Cálculo do imposto de renda de um grupo de contribuintes:\n");
    int CIC, numeroDependentes, contribuintesIsentos = 0;
    float rendaBrutaAnual, rendaLiquida, impostoAPagar = 0, totalImposto = 0;
    
    while (1) {
        printf("CIC (0 para sair): ");
        scanf("%d", &CIC);
        
        if (CIC == 0) {
            break;
        }
        
        printf("Número de dependentes: ");
        scanf("%d", &numeroDependentes);
        printf("Renda bruta anual: ");
        scanf("%f", &rendaBrutaAnual);
        
        rendaLiquida = rendaBrutaAnual - (numeroDependentes * 600);
        
        if (rendaLiquida <= 1000) {
            impostoAPagar = 0;
            contribuintesIsentos++;
        } else if (rendaLiquida <= 5000) {
            impostoAPagar = rendaLiquida * 0.15;
        } else {
            impostoAPagar = rendaLiquida * 0.25;
        }
        
        printf("CIC: %d, Imposto a pagar: %.2f\n", CIC, impostoAPagar);
        totalImposto += impostoAPagar;
    }
    
    printf("Total do imposto arrecadado: %.2f\n", totalImposto);
    printf("Número de contribuintes isentos: %d\n", contribuintesIsentos);
}
//26. Foi feita uma pesquisa de audiência de canal de TV em várias casas de uma
//certa cidade, em umdeterminado dia. Para cada casa visitada foram fornecidos o
//número do canal (4, 5, 7, 12) e o número de pessoas que estavam assistindo a ele
//naquela casa. Se a televisão estivesse desligada, nada seria anotado, ou seja, esta
//casa não entraria na pesquisa. Criar um programa que:
//• Leia um número indeterminado de dados, isto é, o número do canal e o
//número de pessoas que estavam assistindo;
//• Calcule e imprima a porcentagem de audiência em cada canal.
//Obs.: Para encerrar a entrada de dados, digite o número do canal zero.

// Exercício 26
void exercicio26() {
    printf("\nExercício 26 - Pesquisa de audiência de canal de TV:\n");
    int canal, audienciaTotal = 0;
    int audienciaCanal[13] = {0}; // Índices de 0 a 12 correspondentes aos canais de 0 a 12
    float percentualAudiencia;
    
    while (1) {
        printf("Número do canal (0 para sair): ");
        scanf("%d", &canal);
        
        if (canal == 0) {
            break;
        }
        
        printf("Número de pessoas assistindo: ");
        scanf("%d", &audienciaTotal);
        
        audienciaCanal[canal] += audienciaTotal;
    }
    
    printf("Porcentagem de audiência em cada canal:\n");
    for (int i = 1; i <= 12; i++) {
        percentualAudiencia = (audienciaCanal[i] / audienciaTotal) * 100;
        printf("Canal %d: %.2f%%\n", i, percentualAudiencia);
    }
}
//27. Crie um programa que calcule e imprima o CR do período para os alunos de
//computação. Para cada aluno, o algoritmo deverá ler:
//• número da matrícula;
//• quantidade de disciplinas cursadas;
//• notas em cada disciplina;
//Além do CR de cada aluno, o programa deve imprimir o melhor CR dos
//alunos que cursaram5 ou mais disciplinas.
//• fim da entrada de dados é marcada por uma matrícula inválida (matrículas
//válidas de 1 a 5000);
//• CR do aluno é igual à média aritmética de suas notas.
// Exercício 27
void exercicio27() {
    printf("\nExercício 27 - Cálculo do CR dos alunos de computação:\n");
    int matricula, disciplinasCursadas, alunosCincoOuMais = 0;
    float nota, cr, melhorCR = 0;
    
    while (1) {
        printf("Número da matrícula (0 para sair): ");
        scanf("%d", &matricula);
        
        if (matricula == 0) {
            break;
        }
        
        printf("Quantidade de disciplinas cursadas: ");
        scanf("%d", &disciplinasCursadas);
        
        cr = 0;
        
        for (int i = 0; i < disciplinasCursadas; i++) {
            printf("Nota da disciplina %d: ", i + 1);
            scanf("%f", &nota);
            cr += nota;
        }
        
        cr /= disciplinasCursadas;
        
        if (disciplinasCursadas >= 5 && cr > melhorCR) {
            melhorCR = cr;
        }
        
        printf("CR do aluno: %.2f\n", cr);
    }
    
    printf("Melhor CR dos alunos que cursaram 5 ou mais disciplinas: %.2f\n", melhorCR);
}
//28. Construa umprograma que receba a idade, a altura e o peso de várias pessoas,
//Calcule e imprima:
//3.12. Exercícios da Aula 75
//• a quantidade de pessoas com idade superior a 50 anos;
//• amédia das alturas das pessoas com idade entre 10 e 20 anos;
//• a porcentagem de pessoas com peso inferior a 40 quilos entre todas as
//pessoas analisadas.
// Exercício 28
void exercicio28() {
    printf("\nExercício 28 - Análise de Idades, Alturas e Pesos:\n");
    int pessoasMaisDe50 = 0, totalPessoas = 0, pessoasIdadeEntre10e20 = 0;
    float somaAlturas = 0, mediaAlturas;
    int pessoasComPesoInferiorA40 = 0;
    
    while (1) {
        int idade;
        float altura, peso;
        
        printf("Digite a idade da pessoa (digite um número negativo para encerrar): ");
        scanf("%d", &idade);
        
        if (idade < 0) {
            break;
        }
        
        printf("Digite a altura da pessoa: ");
        scanf("%f", &altura);
        
        printf("Digite o peso da pessoa: ");
        scanf("%f", &peso);
        
        if (idade > 50) {
            pessoasMaisDe50++;
        }
        
        if (idade >= 10 && idade <= 20) {
            pessoasIdadeEntre10e20++;
            somaAlturas += altura;
        }
        
        if (peso < 40) {
            pessoasComPesoInferiorA40++;
        }
        
        totalPessoas++;
    }
    
    if (pessoasIdadeEntre10e20 > 0) {
        mediaAlturas = somaAlturas / pessoasIdadeEntre10e20;
    } else {
        mediaAlturas = 0;
    }
    
    printf("Quantidade de pessoas com idade superior a 50 anos: %d\n", pessoasMaisDe50);
    printf("Média das alturas das pessoas com idade entre 10 e 20 anos: %.2f\n", mediaAlturas);
    printf("Porcentagem de pessoas com peso inferior a 40 quilos: %.2f%%\n", (pessoasComPesoInferiorA40 * 100.0) / totalPessoas);
}
//29. Construa um programa que receba o valor e o código de várias mercadorias
//vendidas em umdeterminado dia. Os códigos obedecem a lista a seguir:
//L-limpeza
//A-Alimentação
//H-Higiene
//Calcule e imprima:
//• o total vendido naquele dia, com todos os códigos juntos;
//• o total vendido naquele dia em cada um dos códigos.
//Obs.: Para encerrar a entrada de dados, digite o valor da mercadoria zero.
// Exercício 29
void exercicio29() {
    printf("\nExercício 29 - Registro de Vendas de Mercadorias:\n");
    float totalVendido = 0;
    float totalLimpeza = 0, totalAlimentacao = 0, totalHigiene = 0;
    
    while (1) {
        char codigo;
        float valor;
        
        printf("Digite o código da mercadoria (L-limpeza, A-alimentação, H-higiene): ");
        scanf(" %c", &codigo);
        
        if (codigo == '0') {
            break;
        }
        
        printf("Digite o valor da mercadoria: ");
        scanf("%f", &valor);
        
        totalVendido += valor;
        
        switch (codigo) {
            case 'L':
                totalLimpeza += valor;
                break;
            case 'A':
                totalAlimentacao += valor;
                break;
            case 'H':
                totalHigiene += valor;
                break;
            default:
                printf("Código inválido.\n");
        }
    }
    
    printf("Total vendido naquele dia: %.2f\n", totalVendido);
    printf("Total vendido em mercadorias de limpeza: %.2f\n", totalLimpeza);
    printf("Total vendido em mercadorias de alimentação: %.2f\n", totalAlimentacao);
    printf("Total vendido em mercadorias de higiene: %.2f\n", totalHigiene);
}
//30. Faça um programa que receba a idade e o estado civil (C-casado, S-solteiro, Vviúvo
//e D-desquitado ou separado) de várias pessoas. Calcule e imprima:
//• a quantidade de pessoas casadas;
//• a quantidade de pessoas solteiras;
//• amédia das idades das pessoas viúvas;
//• a porcentagem de pessoas desquitadas ou separadas dentre todas as pessoas
//analisadas.
//Obs.: Para encerrar a entrada de dados, digite um número menor que zero para a
//idade.
// Exercício 30
void exercicio30() {
    printf("\nExercício 30 - Análise de Idades e Estado Civil:\n");
    int pessoasCasadas = 0, pessoasSolteiras = 0, totalViuvos = 0, idadeViuvos = 0;
    int totalPessoas = 0, totalDesquitados = 0;
    
    while (1) {
        int idade;
        char estadoCivil;
        
        printf("Digite a idade da pessoa (digite um número negativo para encerrar): ");
        scanf("%d", &idade);
        
        if (idade < 0) {
            break;
        }
        
        printf("Digite o estado civil da pessoa (C-casado, S-solteiro, V-viúvo, D-desquitado): ");
        scanf(" %c", &estadoCivil);
        
        totalPessoas++;
        
        switch (estadoCivil) {
            case 'C':
                pessoasCasadas++;
                break;
            case 'S':
                pessoasSolteiras++;
                break;
            case 'V':
                totalViuvos++;
                idadeViuvos += idade;
                break;
            case 'D':
                totalDesquitados++;
                break;
            default:
                printf("Estado civil inválido.\n");
        }
    }
    
    printf("Quantidade de pessoas casadas: %d\n", pessoasCasadas);
    printf("Quantidade de pessoas solteiras: %d\n", pessoasSolteiras);
    printf("Média das idades das pessoas viúvas: %.2f\n", (float)idadeViuvos / totalViuvos);
    printf("Porcentagem de pessoas desquitadas ou separadas: %.2f%%\n", (totalDesquitados * 100.0) / totalPessoas);
}

int main() {
    // Aqui você pode chamar qualquer uma das funções, por exemplo:
    q30();
    return EXIT_SUCCESS;
}