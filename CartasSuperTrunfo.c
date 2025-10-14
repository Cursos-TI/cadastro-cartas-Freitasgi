#include <stdio.h>

int main() {
  // Variaveis
  char estado1, codigo1[5], cidade1[30];
  int populaçao1, pontosturisticos1;
  float area1, pib1, densidade1, pibpercapita1;

  char estado2, codigo2[5], cidade2[30];
  int populaçao2, pontosturisticos2;
  float area2, pib2, densidade2, pibpercapita2;

  // Entrada de dados
  // Carta 1
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

  // Carta 2
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

  printf("Informe o PIB da cidade: \n");
  scanf("%f", &pib2);

  printf("Informe a quantidade de pontos turísticos da cidade: \n");
  scanf("%d", &pontosturisticos2);

  // Operadores aritméticos
  //Carta 1
  densidade1 = (float) populaçao1 / area1;
  pibpercapita1 = (float) pib1 / populaçao1;
  //Carta2
  densidade2 = (float) populaçao2 / area2;
  pibpercapita2 = (float) pib2 / populaçao2;

  // Saída de dados
  printf("Carta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %d\n", populaçao1);
  printf("Área: %f\n", area1);
  printf("PIB: %f\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
  printf("Densidade Populacional: %.2f\n", densidade1);
  printf("PIB Per Capita: %.2f\n", pibpercapita1);

  printf("Carta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %d\n", populaçao2);
  printf("Área: %f\n", area2);
  printf("PIB: %f\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
  printf("Densidade Populacional: %.2f\n", densidade2);
  printf("PIB Per Capita: %.2f\n", pibpercapita2);

return 0;

} 
