#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Interatividade no Super Trunfo
// Nível Aventureiro - Menu Interativo para Comparação

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
  
  // Área para menu interativo e comparação das cartas
  
  int opcao;
  
  printf("\n=== Menu de Comparação ===\n");
  printf("Escolha o atributo para comparar as cartas:\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Pontos Turísticos\n");
  printf("5. Densidade Populacional\n");
  printf("6. PIB per Capita\n");
  printf("Digite sua escolha (1-6): ");
  scanf("%d", &opcao);
  
  printf("\n=== Resultado da Comparação ===\n");
  
  // Estrutura switch para processar a escolha do usuário
  switch(opcao) {
    case 1: // População
      printf("Atributo escolhido: População\n");
      printf("Carta 1 - %s (%c): %lu habitantes\n", cidade1, estado1, populacao1);
      printf("Carta 2 - %s (%c): %lu habitantes\n", cidade2, estado2, populacao2);
      
      if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
      } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
      } else {
        printf("Resultado: Empate!\n");
      }
      break;
      
    case 2: // Área
      printf("Atributo escolhido: Área\n");
      printf("Carta 1 - %s (%c): %.2f km²\n", cidade1, estado1, area1);
      printf("Carta 2 - %s (%c): %.2f km²\n", cidade2, estado2, area2);
      
      if (area1 > area2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
      } else if (area2 > area1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
      } else {
        printf("Resultado: Empate!\n");
      }
      break;
      
    case 3: // PIB
      printf("Atributo escolhido: PIB\n");
      printf("Carta 1 - %s (%c): %.2f bilhões de reais\n", cidade1, estado1, pib1);
      printf("Carta 2 - %s (%c): %.2f bilhões de reais\n", cidade2, estado2, pib2);
      
      if (pib1 > pib2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
      } else if (pib2 > pib1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
      } else {
        printf("Resultado: Empate!\n");
      }
      break;
      
    case 4: // Pontos Turísticos
      printf("Atributo escolhido: Pontos Turísticos\n");
      printf("Carta 1 - %s (%c): %d pontos turísticos\n", cidade1, estado1, pontos_turisticos1);
      printf("Carta 2 - %s (%c): %d pontos turísticos\n", cidade2, estado2, pontos_turisticos2);
      
      if (pontos_turisticos1 > pontos_turisticos2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
      } else if (pontos_turisticos2 > pontos_turisticos1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
      } else {
        printf("Resultado: Empate!\n");
      }
      break;
      
    case 5: // Densidade Populacional (menor vence)
      printf("Atributo escolhido: Densidade Populacional\n");
      printf("Carta 1 - %s (%c): %.2f hab/km²\n", cidade1, estado1, densidade_populacional1);
      printf("Carta 2 - %s (%c): %.2f hab/km²\n", cidade2, estado2, densidade_populacional2);
      printf("(Regra especial: menor densidade vence!)\n");
      
      if (densidade_populacional1 < densidade_populacional2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
      } else if (densidade_populacional2 < densidade_populacional1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
      } else {
        printf("Resultado: Empate!\n");
      }
      break;
      
    case 6: // PIB per Capita
      printf("Atributo escolhido: PIB per Capita\n");
      printf("Carta 1 - %s (%c): %.2f reais\n", cidade1, estado1, pib_per_capita1);
      printf("Carta 2 - %s (%c): %.2f reais\n", cidade2, estado2, pib_per_capita2);
      
      if (pib_per_capita1 > pib_per_capita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
      } else if (pib_per_capita2 > pib_per_capita1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
      } else {
        printf("Resultado: Empate!\n");
      }
      break;
      
    default: // Opção inválida
      printf("Opção inválida! Por favor, escolha uma opção de 1 a 6.\n");
      break;
  }

  return 0;
} 
