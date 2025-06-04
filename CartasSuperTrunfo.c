#include <stdio.h>

int main(){
    //char carta1;
    char estado = 'A';
    char codigo [6] = "A01";
    char nome_cidade[10] = "Recife";
    int populacao = 1488920;
    float area = 218.843;
    float pib = 54970305.43;
    int numero_pontos_turisticos1 = 10;
    float quocientedens = (float) populacao / area;
    float quocientepib = (float) pib / populacao;

    //char carta2;
    char estado2 = 'B';
    char codigo2 [6] = "B02";
    char nome_cidade2[10] = "Natal";
    int populacao2 = 751300;
    float area2 = 167.401;
    float pib2 = 24186261.543;
    int numero_pontos_turisticos2 = 15;
    float quocientedens2 = (float) populacao2 / area2;
    float quocientepib2 = (float) pib2 / populacao2; 

    printf("*** Desfio Super Trunfo - Nível Aventureiro ***: \n");

    printf("\n");

    printf("Carta1: \n");
    printf("Estado: %c\n", estado);
    scanf("%c", &estado);

    printf("Código: %s\n", codigo);
    scanf("%s", &codigo);

    printf("Nome Da Cidade: %s\n", nome_cidade);
    scanf("%s", &nome_cidade);

    printf("População: %d \n", populacao);
    scanf("%d", &populacao);

    printf("Área: %.2f Km²\n", area);
    scanf("%.2f", &area);

    printf("PIB: %.2f Bilhões\n", pib);
    scanf("%.2f", &pib);

    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos1);
    scanf("%d", &numero_pontos_turisticos1);

    printf("Densidade Populacional: %.2f hab/Km²\n", quocientedens);
    scanf("%.2f", &quocientedens);

    printf("PIB per Capita: %.2f reais\n", quocientepib);
    scanf("%.2f", &quocientepib);

    printf("\n");

    printf("Carta2: \n");
    printf("Estado: %c\n", estado2);
    scanf("%c", &estado2);

    printf("Código: %s\n", codigo2);
    scanf("%s", &codigo2);

    printf("Nome Da Cidade: %s\n", nome_cidade2);
    scanf("%s", &nome_cidade2);

    printf("População: %d\n", populacao2);
    scanf("%d", &populacao2);

    printf("Área: %.2f Km²\n", area);
    scanf("%.2f", &area);

    printf("PIB: %.2f Bilhões\n", pib2);
    scanf("%.2f", &pib2);

    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos2);
    scanf("%d", &numero_pontos_turisticos2);

    printf("Densidade Populacional: %.2f hab/Km²\n", quocientedens2);
    scanf("%.2f", &quocientedens2);

    printf("PIB per Capita: %.2f reais\n", quocientepib2);
    scanf("%.2f", &quocientepib2);

    return 0;
    
}