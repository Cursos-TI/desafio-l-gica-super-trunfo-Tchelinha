#include <stdio.h> 

int main()
{
    // Carta 1
    char estado1[3];              
    char codigo1[3];              
    char nomeCidade1[50];         
    int populacao1;               
    float area1;                  
    float pib1;                   
    int pontosTuristicos1;        
    float densidadePopulacional1; 
    float pibPerCapita1;          

    // Carta 2
    char estado2[3];
    char codigo2[3];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    // Entrada dos dados da carta 1
    printf("-------- Bem-Vindo ao Super Trunfo -------\n\n");
    printf("# Carta 1\n\n");

    printf("Estado: ");
    scanf("%s", estado1);
    printf("Código: ");
    scanf(" %s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf(" %d", &populacao1);
    printf("Área: ");
    scanf(" %f", &area1);
    printf("PIB: ");
    scanf(" %f", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    //Cálculos Carta 1
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // Entrada dos dados da carta 2
    printf("\n # Carta 2\n\n");

    printf("Estado: ");
    scanf("%s", estado2);
    printf("Código: ");
    scanf(" %s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    //Cálculos Carta 2
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Exibição dos dados da carta 1
    printf("\n------------ Carta 1 ------------\n");
    printf ("Estado: %s\n", estado1);
    printf ("Código: %s\n", codigo1);
    printf ("Nome da Cidade: %s\n", nomeCidade1);
    printf ("População: %d\n", populacao1);
    printf ("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf ("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf ("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf ("PIB Per Capita: R$ %.2f\n", pibPerCapita1);

    // Exibição dos dados da carta 2
    printf("------------ Carta 2 ------------\n");
    printf ("Estado: %s\n", estado2);
    printf ("Código: %s\n", codigo2);
    printf ("Nome da Cidade: %s\n", nomeCidade2);
    printf ("População: %d\n", populacao2);
    printf ("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf ("Números de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf ("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf ("PIB Per Capita: R$ %.2f\n", pibPerCapita2);
    printf("---------------------------------\n\n");

    // Comparação com base na população
    printf("\nComparação de cartas (Atributo - População):\n\n");

    printf("Carta 1 - %s (%s): %d\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", nomeCidade2, estado2, populacao2);

    if(populacao1 > populacao2)
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    else
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);

    printf("\n");

    return 0; 
}
