#include <stdio.h>


int main (){

    // LEIA ANTES DE INICIAR ESSE MATERIAL:

    // Por favor usar esse material apenas para tirar dúvidas e não para copiar e colar. Obrigado.
    // Discord Jornada DEV: https://discord.gg/VDzXrqJAEc
    // Grupo do Whatsapp: https://chat.whatsapp.com/ESPAiK831Ca1XRfjpUx9jo
    // Feito por: 'Jo' + dicas da comunidade.

    // Declaração de variáveis. pode ser organizadas de duas maneiras diferentes.**
    //01 - Organização em linhas as mesmas variáveis:
    //Ex: char estado1, estado2; 
    //02 - Organização em linhas diferentes para cada variável:
    //Ex: char estado1; 
        //char estado2;
    
    // **A organização das variáveis é uma questão de estilo de programação. Não influencia no funcionamento do código.

    char estado1, estado2, codigo1[8], codigo2[8], cidade1[50], cidade2[50]; // char para caracteres, [] para vetores de caracteres.
    float area1, area2, pib1, pib2; // float para números reais.
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2; // int para números inteiros.

   

    printf("╔════════════════════════════════════════╗\n");
    printf("║   Insira as informações da Carta 01    ║\n");
    printf("╚════════════════════════════════════════╝\n");
    
    printf("Escolha uma letra de A a H para representar o primeiro estado. \n"); // printf para mostrar a mensagem na tela. \n para pular uma linha.
    printf("Estado: ");
    scanf(" %c", &estado1); // %c para ler um caractere. O espaço antes do %c é para limpar o buffer do teclado. & é para pegar o endereço da variável.
    
    printf("Escolha entre 01 a 04 para definir o número da carta. \n");
    printf("Número: ");
    scanf(" %2s", codigo1); // %2s para ler uma string de 2 caracteres. Não possui & pois o vetor '[]' já é um ponteiro.

    printf("Insira o nome da primeira cidade. \n");
    printf("Nome da cidade: ");
    getchar(); // Limpa o buffer do teclado, para não pegar o \n que ficou no buffer e complementar o fgets abaixo.
    fgets(cidade1, sizeof(cidade1), stdin); // fgets para ler strings com espaços. O sizeof é para limitar o tamanho da string. stdin é para ler do teclado

    printf("Insira a quantidade de habitantes da cidade \n");
    printf("População: ");
    scanf(" %d", &populacao1); // %d para ler um número inteiro.
    
    printf("Insira a área territorial da cidade \n");
    printf("Área km²: ");
    scanf(" %f", &area1); // %f para ler um número real.

    printf("Insira o valor do produto interno bruto da cidade \n");
    printf("PIB: ");
    scanf(" %f", &pib1); // %f para ler um número real.

    printf("Insira a quantidade de pontos turísticos da cidade \n");
    printf("Pontos turisticos: ");
    scanf(" %d", &pontos_turisticos1); // %d para ler um número inteiro.


    // Repetir o processo para a segunda carta. Alterando apenas o número das variaveis (1 -> 2).

    printf("╔════════════════════════════════════════╗\n");
    printf("║   Insira as informações da Carta 02    ║\n");
    printf("╚════════════════════════════════════════╝\n");
    
    printf("Escolha uma letra de A a H para representar o segundo estado. \n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    
    printf("Escolha entre 01 a 04 para definir o número da carta. \n");
    printf("Número: ");
    scanf(" %2s", codigo2);

    printf("Insira o nome da segunda cidade. \n");
    printf("Nome da cidade: ");
    getchar(); 
    fgets(cidade2, sizeof(cidade2), stdin); 

    printf("Insira a quantidade de habitantes da cidade \n");
    printf("População: ");
    scanf(" %d", &populacao2);
    
    printf("Insira a área territorial da cidade \n");
    printf("Área km²: ");
    scanf(" %f", &area2);

    printf("Insira o valor do produto interno bruto da cidade \n");
    printf("PIB: ");
    scanf(" %f", &pib2);

    printf("Insira a quantidade de pontos turísticos da cidade \n");
    printf("Pontos turisticos: ");
    scanf(" %d", &pontos_turisticos2);

    // Mostrar os dados das cartas na tela.


    printf("╔════════════════════════════════════════╗\n");
    printf("║            Dados da Carta 01           ║\n");
    printf("╚════════════════════════════════════════╝\n");

    printf("Estado: '%c' \n", estado1); // %c para imprimir um caractere.
    printf("Codigo: %c%2s \n", estado1, codigo1); // Observação: %c%2s para imprimir um caractere e uma string para gerar o código da carta. Estado + número.
    printf("Nome da cidade: %s", cidade1); // %s para imprimir uma string.
    printf("Populacao: %d \n", populacao1); // %d para imprimir um número inteiro.
    printf("Area: %.2f km² \n", area1); // %.2f para imprimir um número real com 2 casas decimais.
    printf("PIB: %.2f bilhões de reais\n", pib1); // %.2f para imprimir um número real com 2 casas decimais.
    printf("Pontos turisticos: %d \n", pontos_turisticos1); // %d para imprimir um número inteiro.

   // Repetir o processo para a segunda carta. Alterando apenas o número das variaveis (1 -> 2).

    printf("╔════════════════════════════════════════╗\n");
    printf("║            Dados da Carta 02           ║\n");
    printf("╚════════════════════════════════════════╝\n");

    printf("Estado: '%c' \n", estado2);
    printf("Codigo: %c%2s \n", estado2, codigo2);
    printf("Nome da cidade: %s", cidade2);
    printf("Populacao: %d \n", populacao2);
    printf("Area: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Pontos turisticos: %d \n", pontos_turisticos2);



    return 0;

}
