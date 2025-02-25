#include <stdio.h>


int main (){

    char estado1[3];
    char codigo1[3];
    char cidade1[50];
    float area1;
    float pib1;
    int populacao1;
    int pontos_turisticos1;

    printf("Insira os dados da Carta 01 \n");
    printf("_____________________ \n");
    
    printf("Estado: \n");
    scanf("%2s", &estado1);
    
    printf("Codigo: \n");
    scanf(" %3s", &codigo1);

    printf("Nome da cidade: \n");
    scanf(" %s", &cidade1);

    printf("Populacao: \n");
    scanf(" %d", &populacao1);

    printf("Area: \n");
    scanf(" %f", &area1);

    printf("PIB: \n");
    scanf(" %f", &pib1);

    printf("Pontos turisticos: \n");
    scanf(" %d", &pontos_turisticos1);

    printf("Dados da Carta 01 \n");
    printf("_____________________ \n");

    printf("Estado: %2s \n", estado1);
    printf("Codigo: %3s \n", codigo1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("Populacao: %d \n", populacao1);
    printf("Area: %.2f \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Pontos turisticos: %d \n", pontos_turisticos1);


    return 0;

}
