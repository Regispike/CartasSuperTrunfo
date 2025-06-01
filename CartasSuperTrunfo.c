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



return 0;

} 
