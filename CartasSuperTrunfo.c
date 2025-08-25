#include <stdio.h>

int main() {
    // Carta 1 
    char estado1;   
    char codigo1[5];
    char cidade1[50]; 
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Carta 2
    char estado2;
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Cadastro Carta 1
    printf("Cadastro da Carta 1\n");
    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade (sem espacos): ");
    scanf("%s", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);

    // Cadastro Carta 2
    printf("\nCadastro da Carta 2\n");
    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade (sem espacos): ");
    scanf("%s", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // Exibicao formatada
    printf("\nCarta 1:\n\n");
    printf("Estado: %c\n\n", estado1);
    printf("Codigo: %s\n\n", codigo1);
    printf("Nome da Cidade: %s\n\n", cidade1);
    printf("Populacao: %d\n\n", populacao1);
    printf("Area: %f km²\n\n", area1);
    printf("PIB: %f bilhoes de reais\n\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n\n", pontos1);

    printf("Carta 2:\n\n");
    printf("Estado: %c\n\n", estado2);
    printf("Codigo: %s\n\n", codigo2);
    printf("Nome da Cidade: %s\n\n", cidade2);
    printf("Populacao: %d\n\n", populacao2);
    printf("Area: %f km²\n\n", area2);
    printf("PIB: %f bilhoes de reais\n\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n\n", pontos2);

    return 0;
}
