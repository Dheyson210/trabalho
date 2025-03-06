#include <stdio.h>

int main() {
    // Dados da Carta 1
    char estado1 = 'A';
    char codigo1[] = "A01";
    char nomeCidade1[] = "Sao Paulo";
    int populacao1 = 123250;
    float area1 = 152.11;
    float pib1 = 69.28; // 69.28 bilhões
    int pontosTuristicos1 = 50;

    // Dados da Carta 2
    char estado2 = 'B';
    char codigo2[] = "B02";
    char nomeCidade2[] = "Rio de Janeiro";
    int populacao2 = 67480;
    float area2 = 120.25;
    float pib2 = 300.0; // 300.0 bilhões
    int pontosTuristicos2 = 30;

    // Cálculos para a Carta 1
    float densidadePopulacional1 = (float)populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;

    // Cálculos para a Carta 2
    float densidadePopulacional2 = (float)populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;

    // Exibição dos Resultados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1 / 1e9); // Exibe em bilhões
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita1);

    // Exibição dos Resultados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2 / 1e9); // Exibe em bilhões
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

}
