#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Nível Mestre - Batalha de Cartas com Super Poder

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  // Variáveis para a Carta 1
  char estado1;
  char codigo1[4];
  char cidade1[50];
  unsigned long int populacao1;
  float area1;
  float pib1;
  int pontos_turisticos1;
  float densidade_populacional1;
  float pib_per_capita1;
  float super_poder1;
  
  // Variáveis para a Carta 2
  char estado2;
  char codigo2[4];
  char cidade2[50];
  unsigned long int populacao2;
  float area2;
  float pib2;
  int pontos_turisticos2;
  float densidade_populacional2;
  float pib_per_capita2;
  float super_poder2;

  // Área para entrada de dados
  
  // Cadastro da Carta 1
  printf("=== Cadastro da Carta 1 ===\n");
  printf("Digite o Estado (A-H): ");
  scanf(" %c", &estado1);
  
  printf("Digite o Código da Carta (ex: A01): ");
  scanf("%s", codigo1);
  
  printf("Digite o Nome da Cidade: ");
  scanf(" %[^\n]", cidade1);
  
  printf("Digite a População: ");
  scanf("%lu", &populacao1);
  
  printf("Digite a Área (em km²): ");
  scanf("%f", &area1);
  
  printf("Digite o PIB (em bilhões de reais): ");
  scanf("%f", &pib1);
  
  printf("Digite o Número de Pontos Turísticos: ");
  scanf("%d", &pontos_turisticos1);
  
  printf("\n");
  
  // Cadastro da Carta 2
  printf("=== Cadastro da Carta 2 ===\n");
  printf("Digite o Estado (A-H): ");
  scanf(" %c", &estado2);
  
  printf("Digite o Código da Carta (ex: B02): ");
  scanf("%s", codigo2);
  
  printf("Digite o Nome da Cidade: ");
  scanf(" %[^\n]", cidade2);
  
  printf("Digite a População: ");
  scanf("%lu", &populacao2);
  
  printf("Digite a Área (em km²): ");
  scanf("%f", &area2);
  
  printf("Digite o PIB (em bilhões de reais): ");
  scanf("%f", &pib2);
  
  printf("Digite o Número de Pontos Turísticos: ");
  scanf("%d", &pontos_turisticos2);

  // Área para cálculos das propriedades derivadas
  
  // Cálculos para a Carta 1
  // Densidade Populacional = População / Área
  densidade_populacional1 = (float)populacao1 / area1;
  
  // PIB per Capita = PIB / População (convertendo bilhões para reais)
  pib_per_capita1 = (pib1 * 1000000000) / (float)populacao1;
  
  // Super Poder = População + Área + PIB + Pontos Turísticos + PIB per Capita + (1 / Densidade)
  super_poder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + (float)pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade_populacional1);
  
  // Cálculos para a Carta 2
  // Densidade Populacional = População / Área
  densidade_populacional2 = (float)populacao2 / area2;
  
  // PIB per Capita = PIB / População (convertendo bilhões para reais)
  pib_per_capita2 = (pib2 * 1000000000) / (float)populacao2;
  
  // Super Poder = População + Área + PIB + Pontos Turísticos + PIB per Capita + (1 / Densidade)
  super_poder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + (float)pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade_populacional2);

  // Área para exibição dos dados das cartas
  
  printf("\n=== Cartas Cadastradas ===\n\n");
  
  // Exibição da Carta 1
  printf("Carta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %lu\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
  printf("Super Poder: %.2f\n", super_poder1);
  
  printf("\n");
  
  // Exibição da Carta 2
  printf("Carta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
  printf("Super Poder: %.2f\n", super_poder2);
  
  // Área para comparação das cartas
  
  printf("\n=== Comparação de Cartas ===\n\n");
  
  // População: maior vence
  printf("População: Carta %d venceu (%d)\n", 
         (populacao1 > populacao2) ? 1 : 2,
         (populacao1 > populacao2) ? 1 : 0);
  
  // Área: maior vence
  printf("Área: Carta %d venceu (%d)\n",
         (area1 > area2) ? 1 : 2,
         (area1 > area2) ? 1 : 0);
  
  // PIB: maior vence
  printf("PIB: Carta %d venceu (%d)\n",
         (pib1 > pib2) ? 1 : 2,
         (pib1 > pib2) ? 1 : 0);
  
  // Pontos Turísticos: maior vence
  printf("Pontos Turísticos: Carta %d venceu (%d)\n",
         (pontos_turisticos1 > pontos_turisticos2) ? 1 : 2,
         (pontos_turisticos1 > pontos_turisticos2) ? 1 : 0);
  
  // Densidade Populacional: menor vence (invertido)
  printf("Densidade Populacional: Carta %d venceu (%d)\n",
         (densidade_populacional1 < densidade_populacional2) ? 1 : 2,
         (densidade_populacional1 < densidade_populacional2) ? 1 : 0);
  
  // PIB per Capita: maior vence
  printf("PIB per Capita: Carta %d venceu (%d)\n",
         (pib_per_capita1 > pib_per_capita2) ? 1 : 2,
         (pib_per_capita1 > pib_per_capita2) ? 1 : 0);
  
  // Super Poder: maior vence
  printf("Super Poder: Carta %d venceu (%d)\n",
         (super_poder1 > super_poder2) ? 1 : 2,
         (super_poder1 > super_poder2) ? 1 : 0);

  return 0;
} 
