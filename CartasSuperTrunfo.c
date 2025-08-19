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
    
    printf("DADOS DO 1º ESTADO \n");

    printf("Digite a População: \n");
    scanf("%d", &populacao1);

    printf("Digite a Área: \n");
    scanf("%f", &area1);
    
    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o Nº de Pontos Turísticos: \n");
    scanf("%d", &num_pontos_tur1);

    printf("Primeiro Estado - População: %d \n", populacao1 );
    printf("Primeiro Estado - Área: %f \n", area1);
    printf("Primeiro Estado - PIB: %f \n", pib1);   
    printf("Primeiro Estado - Nº Pontos Turísticos: %d \n", num_pontos_tur1);   
    
    printf("################################# \n");
    printf("DADOS DO 2º ESTADO \n");

    printf("Digite a População: \n");
    scanf("%d", &populacao2);

    printf("Digite a Área: \n");
    scanf("%f", &area2);
    
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o Nº de Pontos Turísticos: \n");
    scanf("%d", &num_pontos_tur2);

    printf("Segundo Estado - População: %d \n", populacao2 );
    printf("Segundo Estado - Área: %f \n", area2);
    printf("Segundo Estado - PIB: %f \n", pib2);   
    printf("Segundo Estado - Nº Pontos Turísticos: %d \n", num_pontos_tur2); 
    

    return 0;
}
