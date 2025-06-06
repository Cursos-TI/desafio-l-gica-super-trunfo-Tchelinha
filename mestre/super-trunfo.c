#include <stdio.h>
#include <string.h>

int main()
{
    // Carta 1 
    char codigo1[4], estado1[4], nomePais1[50], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidadeDemografica1, pibPerCapita1;

    // Carta 2
    char codigo2[4], estado2[4], nomePais2[50], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidadeDemografica2, pibPerCapita2;

    int atributo1, atributo2;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;

    printf("-------- Bem-Vindo ao Super Trunfo -------\n\n");

    // Entrada de dados da Carta 1
    printf("# Carta 1\n\n");
    printf("Código: ");
    scanf(" %3s", codigo1);
    printf("Nome do país: ");
    scanf(" %s", nomePais1);
    printf("Estado: ");
    scanf(" %3s", estado1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos Carta 1
    densidadeDemografica1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // Entrada de dados da Carta 2
    printf("\n# Carta 2\n\n");
    printf("Código: ");
    scanf(" %3s", codigo2);
    printf("Nome do país: ");
    scanf(" %s", nomePais2);
    printf("Estado: ");
    scanf(" %3s", estado2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos Carta 2
    densidadeDemografica2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // --- Menu dinâmico de seleção de atributos
    printf("\n---------- MENU DE ATRIBUTOS ----------\n");
    printf("1. Nome do País (exibe detalhes)\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Número de Pontos Turísticos\n");
    printf("6. Densidade Demográfica (menor vence)\n");
    printf("---------------------------------------\n");

    // Leitura do primeiro atributo
    printf("Escolha o 1º atributo (2 a 6): ");
    scanf("%d", &atributo1);

    // Leitura do segundo atributo, com verificação
    printf("Escolha o 2º atributo (diferente do primeiro): ");
    scanf("%d", &atributo2);

    if (atributo1 < 2 || atributo1 > 6 || atributo2 < 2 || atributo2 > 6 || atributo1 == atributo2) {
        printf("\nErro: Atributos inválidos. Selecione dois atributos numéricos diferentes entre 2 e 6.\n");
        return 1;
    }

    // Associação dos atributos selecionados às variáveis
    switch (atributo1) {
        case 2: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 3: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 4: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 5: valor1_carta1 = pontosTuristicos1; valor1_carta2 = pontosTuristicos2; break;
        case 6: valor1_carta1 = densidadeDemografica1; valor1_carta2 = densidadeDemografica2; break;
    }

    switch (atributo2) {
        case 2: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 3: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 4: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 5: valor2_carta1 = pontosTuristicos1; valor2_carta2 = pontosTuristicos2; break;
        case 6: valor2_carta1 = densidadeDemografica1; valor2_carta2 = densidadeDemografica2; break;
    }

    // Impressão dos países e atributos
    printf("\nComparando os países: %s x %s\n", nomePais1, nomePais2);
    printf("Atributo 1 (%d): %.2f x %.2f\n", atributo1, valor1_carta1, valor1_carta2);
    printf("Atributo 2 (%d): %.2f x %.2f\n", atributo2, valor2_carta1, valor2_carta2);

    // Comparação do atributo 1
    printf("\nResultado da comparação do Atributo 1: ");
    if (atributo1 == 6) {
        printf("%s\n", (valor1_carta1 < valor1_carta2) ? "Carta 1 venceu!" :
                       (valor1_carta2 < valor1_carta1) ? "Carta 2 venceu!" : "Empate!");
    } else {
        printf("%s\n", (valor1_carta1 > valor1_carta2) ? "Carta 1 venceu!" :
                       (valor1_carta2 > valor1_carta1) ? "Carta 2 venceu!" : "Empate!");
    }

    // Comparação do atributo 2
    printf("Resultado da comparação do Atributo 2: ");
    if (atributo2 == 6) {
        printf("%s\n", (valor2_carta1 < valor2_carta2) ? "Carta 1 venceu!" :
                       (valor2_carta2 < valor2_carta1) ? "Carta 2 venceu!" : "Empate!");
    } else {
        printf("%s\n", (valor2_carta1 > valor2_carta2) ? "Carta 1 venceu!" :
                       (valor2_carta2 > valor2_carta1) ? "Carta 2 venceu!" : "Empate!");
    }

    // Soma dos atributos
    float soma1 = valor1_carta1 + valor2_carta1;
    float soma2 = valor1_carta2 + valor2_carta2;

    printf("\nSoma dos dois atributos:\n");
    printf("%s: %.2f\n", nomePais1, soma1);
    printf("%s: %.2f\n", nomePais2, soma2);

    // Resultado final
    printf("Resultado Final: ");
    printf("%s\n", (soma1 > soma2) ? "Carta 1 venceu!" :
                   (soma2 > soma1) ? "Carta 2 venceu!" : "Empate!");

    return 0;
}
