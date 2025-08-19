#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
   
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int num_pontos_tur1, num_pontos_tur2;
    char estado1[2], estado2[2];
    char codigo1[4], codigo2[4];
    
    printf("DADOS DO 1º ESTADO \n");

    printf("Digite a letra do Estado: \n");
    scanf("%s", estado1);

    printf("Digite o código da cidade: \n");
    scanf("%s", codigo1);

    printf("Digite a População: \n");
    scanf("%d", &populacao1);

    printf("Digite a Área: \n");
    scanf("%f", &area1);
    
    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o Nº de Pontos Turísticos: \n");
    scanf("%d", &num_pontos_tur1);

    float densidade1 = (float) populacao1 / area1;
    float pib_percapita1 = (float) pib1 / populacao1;

    
    printf("Primeiro Estado - População: %d \n", populacao1 );
    printf("Primeiro Estado - Área: %0.2f \n", area1);
    printf("Primeiro Estado - PIB: %0.2f \n", pib1);   
    printf("Primeiro Estado - Nº Pontos Turísticos: %d \n", num_pontos_tur1);   
    printf("Densidade Populacional do Estado 1: %0.2f \n", densidade1);
    printf("O Pib per Capita da do Estado 1: %0.2f \n", pib_percapita1);


    printf("################################# \n");
    
    printf("DADOS DO 2º ESTADO \n");

    printf("Digite a letra do Estado: \n");
    scanf(" %s", estado2);

    printf("Digite o código da cidade: \n");
    scanf("%s", codigo2);

    printf("Digite a População: \n");
    scanf("%d", &populacao2);

    printf("Digite a Área: \n");
    scanf("%f", &area2);
    
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o Nº de Pontos Turísticos: \n");
    scanf("%d", &num_pontos_tur2);

    float densidade2 = (float) populacao2 / area2;
    float pib_percapita2 = (float) pib2 / populacao2;

    printf("Segundo Estado - População: %d \n", populacao2 );
    printf("Segundo Estado - Área: %0.2f \n", area2);
    printf("Segundo Estado - PIB: %0.2f \n", pib2);   
    printf("Segundo Estado - Nº Pontos Turísticos: %d \n", num_pontos_tur2); 
    printf("Densidade Populacional do Estado 2: %0.2f \n", densidade2);
    printf("O Pib per Capita da do Estado 2: %0.2f \n",  pib_percapita2);
    

    return 0;
}
