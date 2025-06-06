#include <stdio.h> // Biblioteca para entrada e saída de dados

int main()
{
    // Carta 1
    char codigo1[3], estado1[3], nomePais1[50], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidadeDemografica1, pibPerCapita1;

    // Carta 2
    char codigo2[3], estado2[3], nomePais2[50], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidadeDemografica2, pibPerCapita2;

    int opc; // Opção de atributo para comparação

    // Entrada dos dados da Carta 1
    printf("-------- Bem-Vindo ao Super Trunfo -------\n\n");
    printf("# Carta 1\n\n");
    printf("Código: ");
    scanf(" %s", codigo1);
    printf("Nome do país: ");
    scanf(" %s", nomePais1);
    printf("Estado: ");
    scanf(" %s", estado1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf(" %d", &populacao1);
    printf("Área: ");
    scanf(" %f", &area1);
    printf("PIB: ");
    scanf(" %f", &pib1);
    printf("Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    // Cálculo Carta 1
    densidadeDemografica1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // Entrada dos dados da Carta 2
    printf("\n# Carta 2\n\n");
    printf("Código: ");
    scanf(" %s", codigo2);
    printf("Nome do país: ");
    scanf(" %s", nomePais2);
    printf("Estado: ");
    scanf(" %s", estado2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf(" %d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo Carta 2
    pibPerCapita2 = pib2 / populacao2;
    densidadeDemografica2 = populacao2 / area2;

    // Menu de atributos
    printf("\n---------- MENU ----------\n");
    printf("1. Nome do País\n2. População\n3. Área\n4. PIB\n5. Número de Pontos Turísticos\n6. Densidade Demográfica\n");
    printf("--------------------------\n");

    // Leitura da opção escolhida
    printf("Informe uma das opções acima para comparação:\n(Obs.: Opção 1 apenas exibe os dados das cartas)\n>> ");
    scanf("%d", &opc);
    printf("\n");

    // Estrutura de decisão para comparar conforme a opção escolhida
    switch(opc)
    {
        case 1:
            // Mostra todas as informações das cartas
            printf("------------ Carta 1 ------------\n");
            printf("Código: %s\n", codigo1);
            printf("Nome do País: %s\n", nomePais1);
            printf("Estado: %s\n", estado1);
            printf("Cidade: %s\n", nomeCidade1);
            printf("População: %d\n", populacao1);
            printf("Área: %.2f km²\n", area1);
            printf("PIB: R$ %.2f bilhões\n", pib1);
            printf("Pontos Turísticos: %d\n", pontosTuristicos1);
            printf("Densidade Populacional: %.2f hab/km²\n", densidadeDemografica1);
            printf("PIB Per Capita: R$ %.2f\n", pibPerCapita1);

            printf("------------ Carta 2 ------------\n");
            printf("Código: %s\n", codigo2);
            printf("Nome do País: %s\n", nomePais2);
            printf("Estado: %s\n", estado2);
            printf("Cidade: %s\n", nomeCidade2);
            printf("População: %d\n", populacao2);
            printf("Área: %.2f km²\n", area2);
            printf("PIB: R$ %.2f bilhões\n", pib2);
            printf("Pontos Turísticos: %d\n", pontosTuristicos2);
            printf("Densidade Populacional: %.2f hab/km²\n", densidadeDemografica2);
            printf("PIB Per Capita: R$ %.2f\n", pibPerCapita2);
        break;

        case 2:
            // Comparação por população
            printf("Comparando População...\n");
            if(populacao1 > populacao2)
                printf("Carta vencedora: Carta 1 (%s)\n", nomePais1);
            else if(populacao2 > populacao1)
                printf("Carta vencedora: Carta 2 (%s)\n", nomePais2);
            else
                printf("Empate!\n");
        break;

        case 3:
            // Comparação por área
            printf("Comparando Área...\n");
            if(area1 > area2)
                printf("Carta vencedora: Carta 1 (%s)\n", nomePais1);
            else if(area2 > area1)
                printf("Carta vencedora: Carta 2 (%s)\n", nomePais2);
            else
                printf("Empate!\n");
        break;

        case 4:
            // Comparação por PIB
            printf("Comparando PIB...\n");
            if(pib1 > pib2)
                printf("Carta vencedora: Carta 1 (%s)\n", nomePais1);
            else if(pib2 > pib1)
                printf("Carta vencedora: Carta 2 (%s)\n", nomePais2);
            else
                printf("Empate!\n");
        break;

        case 5:
            // Comparação por pontos turísticos
            printf("Comparando Pontos Turísticos...\n");
            if(pontosTuristicos1 > pontosTuristicos2)
                printf("Carta vencedora: Carta 1 (%s)\n", nomePais1);
            else if(pontosTuristicos2 > pontosTuristicos1)
                printf("Carta vencedora: Carta 2 (%s)\n", nomePais2);
            else
                printf("Empate!\n");
        break;

        case 6:
            // Comparação por densidade demográfica (menor valor vence)
            printf("Comparando Densidade Demográfica (menor vence)...\n");
            if(densidadeDemografica1 < densidadeDemografica2)
                printf("Carta vencedora: Carta 1 (%s)\n", nomePais1);
            else if(densidadeDemografica2 < densidadeDemografica1)
                printf("Carta vencedora: Carta 2 (%s)\n", nomePais2);
            else
                printf("Empate!\n");
        break;

        default:
            // Caso opção inválida
            printf("Opção inválida. Tente novamente.\n");
    }

    printf("\nObrigado por jogar Super Trunfo!\n");

    return 0;
}
