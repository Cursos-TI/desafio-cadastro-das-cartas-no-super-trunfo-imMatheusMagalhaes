#include <stdio.h>
// Já programo à 5 anos ;)
// Função para calcular a densidade populacional
float calcular_densidade_populacional(unsigned long int populacao, float area)
{
    return populacao / area;
}

// Função para calcular o PIB per capita
float calcular_pib_per_capita(float pib, unsigned long int populacao)
{
    return pib / populacao;
}

// Função para calcular o super poder
float calcular_super_poder(unsigned long int populacao, float area, float pib, float pib_per_capita, float densidade, int pontos_turisticos)
{
    return populacao + area + pib + pib_per_capita + (1 / densidade) + pontos_turisticos;
}

int main()
{
    // Variáveis para a primeira carta
    char estado1[3], codigo1[10], nome1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos_turisticos1;
    float densidade1, pib_per_capita1, super_poder1;

    // Variáveis para a segunda carta
    char estado2[3], codigo2[10], nome2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos_turisticos2;
    float densidade2, pib_per_capita2, super_poder2;

    // Entrada de dados para a primeira carta
    printf("Digite os dados da primeira carta:\n");
    printf("Estado (2 caracteres): ");
    scanf("%s", estado1);
    printf("Código da carta: ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área em km²: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Calcula as propriedades derivadas para a primeira carta
    densidade1 = calcular_densidade_populacional(populacao1, area1);
    pib_per_capita1 = calcular_pib_per_capita(pib1, populacao1);
    super_poder1 = calcular_super_poder(populacao1, area1, pib1, pib_per_capita1, densidade1, pontos_turisticos1);

    // Entrada de dados para a segunda carta
    printf("\nDigite os dados da segunda carta:\n");
    printf("Estado (2 caracteres): ");
    scanf("%s", estado2);
    printf("Código da carta: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área em km²: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Calcula as propriedades derivadas para a segunda carta
    densidade2 = calcular_densidade_populacional(populacao2, area2);
    pib_per_capita2 = calcular_pib_per_capita(pib2, populacao2);
    super_poder2 = calcular_super_poder(populacao2, area2, pib2, pib_per_capita2, densidade2, pontos_turisticos2);

    // Comparação das cartas
    printf("\nComparando as cartas:\n");

    // Comparação de população
    printf("População: Carta 1 (%lu) vs Carta 2 (%lu) -> %d\n", populacao1, populacao2, populacao1 > populacao2);

    // Comparação de área
    printf("Área: Carta 1 (%.2f) vs Carta 2 (%.2f) -> %d\n", area1, area2, area1 > area2);

    // Comparação de PIB
    printf("PIB: Carta 1 (%.2f) vs Carta 2 (%.2f) -> %d\n", pib1, pib2, pib1 > pib2);

    // Comparação de densidade populacional (menor valor vence)
    printf("Densidade Populacional: Carta 1 (%.2f) vs Carta 2 (%.2f) -> %d\n", densidade1, densidade2, densidade1 < densidade2);

    // Comparação de PIB per capita
    printf("PIB per capita: Carta 1 (%.2f) vs Carta 2 (%.2f) -> %d\n", pib_per_capita1, pib_per_capita2, pib_per_capita1 > pib_per_capita2);

    // Comparação de pontos turísticos
    printf("Pontos Turísticos: Carta 1 (%d) vs Carta 2 (%d) -> %d\n", pontos_turisticos1, pontos_turisticos2, pontos_turisticos1 > pontos_turisticos2);

    // Comparação de super poder
    printf("Super Poder: Carta 1 (%.2f) vs Carta 2 (%.2f) -> %d\n", super_poder1, super_poder2, super_poder1 > super_poder2);

    return 0;
}