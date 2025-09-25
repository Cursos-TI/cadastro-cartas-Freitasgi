#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado1;
  char codigo1[5];
  char cidade1[30];
  int populaçao1;
  float area1;
  float pib1;
  int pontosturisticos1;

  char estado2;
  char codigo2[5];
  char cidade2[30];
  int populaçao2;
  float area2;
  float pib2;
  int pontosturisticos2;

  // Área para entrada de dados

  printf("Carta 1:\n");
  printf("Informe o estado (A-H): \n");
  scanf("%c", &estado1);

  printf("Informe o código da carta (ex. A01, B02): \n");
  scanf("%s", &codigo1);

  printf("Informe o nome da cidade: \n");
  scanf("%s", &cidade1);

  printf("Informe o número de habitantes da cidade: \n");
  scanf("%d", &populaçao1);

  printf("Informe a área da cidade em km²: \n");
  scanf("%f", &area1);

  printf("Informe o PIB da cidade: \n");
  scanf("%f", &pib1);

  printf("Informe a quantidade de pontos turísticos da cidade: \n");
  scanf("%d", &pontosturisticos1);

  printf("Carta 2:\n");
  printf("Informe o estado (A-H): \n");
  scanf("%c", &estado2);

  printf("Informe o código da carta (ex. A01, B02): \n");
  scanf("%s", &codigo2);

  printf("Informe o nome da cidade: \n");
  scanf("%s", &cidade2);

  printf("Informe o número de habitantes da cidade: \n");
  scanf("%d", &populaçao2);

  printf("Informe a área da cidade em km²: \n");
  scanf("%f", &area2);

  print("Informe o PIB da cidade: \n");
  scanf("%f", &pib2);

  printf("Informe a quantidade de pontos turísticos da cidade: \n");
  scanf("%d", &pontosturisticos2);

  // Área para exibição dos dados da cidade

  printf("Carta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %d\n", populaçao1);
  printf("Área: %f\n", area1);
  printf("PIB: %f\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);

  printf("Carta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %d\n", populaçao2);
  printf("Área: %f\n", area2);
  printf("PIB: %f\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);

return 0;
} 
