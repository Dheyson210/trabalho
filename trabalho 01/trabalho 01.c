#include <stdio.h>

// Definição da estrutura da carta
typedef struct {
  char estado;
  char codigoCarta[4];
  char nomeCidade[50];
  int populacao;
  float area;
  float pib;
  int numPontosTuristicos;
} CartaSuperTrunfo;

int main() {
  // Declaração das duas cartas
  CartaSuperTrunfo carta1, carta2;

  // Leitura dos dados da primeira carta
  printf("Digite os dados da primeira carta:\n");
  printf("Estado (A-H): ");
  scanf(" %c", &carta1.estado);
  printf("Código da Carta (ex: A01): ");
  scanf("%s", carta1.codigoCarta);
  printf("Nome da Cidade: ");
  scanf(" %[^\n]s", carta1.nomeCidade); // Lê a linha inteira, incluindo espaços
  printf("População: ");
  scanf("%d", &carta1.populacao);
  printf("Área (km²): ");
  scanf("%f", &carta1.area);
  printf("PIB: ");
  scanf("%f", &carta1.pib);
  printf("Número de Pontos Turísticos: ");
  scanf("%d", &carta1.numPontosTuristicos);

  // Leitura dos dados da segunda carta
  printf("\nDigite os dados da segunda carta:\n");
  printf("Estado (A-H): ");
  scanf(" %c", &carta2.estado);
  printf("Código da Carta (ex: A01): ");
  scanf("%s", carta2.codigoCarta);
  printf("Nome da Cidade: ");
  scanf(" %[^\n]s", carta2.nomeCidade); // Lê a linha inteira, incluindo espaços
  printf("População: ");
  scanf("%d", &carta2.populacao);
  printf("Área (km²): ");
  scanf("%f", &carta2.area);
  printf("PIB: ");
  scanf("%f", &carta2.pib);
  printf("Número de Pontos Turísticos: ");
  scanf("%d", &carta2.numPontosTuristicos);

  // Exibição dos dados das cartas
  printf("\nDados da primeira carta:\n");
  printf("Estado: %c\n", carta1.estado);
  printf("Código da Carta: %s\n", carta1.codigoCarta);
  printf("Nome da Cidade: %s\n", carta1.nomeCidade);
  printf("População: %d\n", carta1.populacao);
  printf("Área: %.2f km²\n", carta1.area);
  printf("PIB: %.2f\n", carta1.pib);
  printf("Número de Pontos Turísticos: %d\n", carta1.numPontosTuristicos);

  printf("\nDados da segunda carta:\n");
  printf("Estado: %c\n", carta2.estado);
  printf("Código da Carta: %s\n", carta2.codigoCarta);
  printf("Nome da Cidade: %s\n", carta2.nomeCidade);
  printf("População: %d\n", carta2.populacao);
  printf("Área: %.2f km²\n", carta2.area);
  printf("PIB: %.2f\n", carta2.pib);
  printf("Número de Pontos Turísticos: %d\n", carta2.numPontosTuristicos);

}