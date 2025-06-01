#include <stdio.h>

int main() {
    printf("Desavio Super Trunfo\n");
    printf("Novo commit\n");

    char carta1;
    char estado = 'A';
    char codigo[4] = "A01";
    int populacao = 1500000;
    float area = 320.8;
    float pib = 75256.54;
    int pontos_turisticos = 5;

    char carta2;
    char estado2 = 'B';
    char codigo2[4] = "B02";
    int populacao2 = 3000000;
    float area2 = 450.5;
    float pib2 = 80356.59;
    int pontos_turisticos2 = 10;

    printf("Carta1: %s\n", codigo);
    scanf("%s", &codigo);

    printf("População: %d\n", populacao);
    scanf("%d", &populacao);

    printf("Área: %.2f\n", area);
    scanf("%.2f", &area);

    printf("PIB: %.2f\n", pib);
    scanf("%f", &pib);

    printf("Número de pontos turisticos: %d\n", pontos_turisticos);
    scanf("%.2d", &pontos_turisticos);

    printf("Carta2: %s\n", codigo2);
    scanf("%s", &codigo2);

    printf("População: %d\n", populacao2);
    scanf("%d", &populacao2);

    printf("Área: %.2f\n", area2);
    scanf("%.2f", &area2);

    printf("PIB: %.2f\n", pib2);
    scanf("%f", &pib2);

    printf("Número de pontos turisticos: %d\n", pontos_turisticos2);
    scanf("%.2d", &pontos_turisticos2);


return 0;

} 
