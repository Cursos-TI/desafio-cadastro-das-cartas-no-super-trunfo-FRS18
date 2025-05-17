#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    // Definição das variáveis utilizadas no sistema
    unsigned long int populacao[2];
    int n_pontos_turisticos[2];
    float area[2], pib[2], densidade[2], pib_per_capita[2], super_poder[2];

    // Cadastro das cidades
    printf(" ---------- CADASTRAR CIDADES --------- \n");
    printf(" -------------- Cidade 1 -------------- \n\n");

    printf("Qual é a quantidade de população da cidade? \n");
    scanf("%lu", &populacao[0]);

    printf("Qual é a quantidade de pontos turísticos da cidade? \n");
    scanf("%i", &n_pontos_turisticos[0]);

    printf("Qual é a área desta cidade? \n");
    scanf("%f", &area[0]);

    printf("Qual é o valor do PIB desta cidade? \n");
    scanf("%f", &pib[0]);

    // Calculando a Densidade, Pib per capita e Super Poder com base nos valores fornecidos
    densidade[0] = populacao[0] / area[0];
    pib_per_capita[0] = pib[0] / populacao[0];
    super_poder[0] = populacao[0] + n_pontos_turisticos[0] + area[0] + pib[0] + (1 / densidade[0]) + pib_per_capita[0];


    printf("\n -------------- Cidade 2 -------------- \n\n");

    printf("Qual é a quantidade de população da cidade? \n");
    scanf("%lu", &populacao[1]);

    printf("Qual é a quantidade de pontos turísticos da cidade? \n");
    scanf("%i", &n_pontos_turisticos[1]);

    printf("Qual é a área desta cidade? \n");
    scanf("%f", &area[1]);

    printf("Qual é o valor do PIB desta cidade? \n");
    scanf("%f", &pib[1]);

    // Calculando a densidade e o pib per capita com base nos valores fornecidos
    densidade[1] = populacao[1] / area[1];
    pib_per_capita[1] = pib[1] / populacao[1];
    super_poder[1] = populacao[1] + n_pontos_turisticos[1] + area[1] + pib[1] + (1 / densidade[1]) + pib_per_capita[1];


    // Exibição das cidades cadastradas e dos dados calculados
    printf("\n\n --------- CIDADES CADASTRADAS -------- \n");
    printf("\n -------------- Cidade 1 -------------- \n");

    printf("População: %lu habitantes \n", populacao[0]);
    printf("Quantidade de pontos turísticos: %i\n", n_pontos_turisticos[0]);
    printf("Área: %.2f Km2\n", area[0]);
    printf("PIB: R$ %.2f\n", pib[0]);
    printf("Densidade: R$ %.2f Habitante por Km2\n", densidade[0]);
    printf("PIB PER CAPITA: R$ %.2f\n", pib_per_capita[0]);
    printf("Super Poder: %.2f\n", super_poder[0]);

    printf("\n -------------- Cidade 2 -------------- \n");

    printf("População: %lu habitantes \n", populacao[1]);
    printf("Quantidade de pontos turísticos: %i\n", n_pontos_turisticos[1]);
    printf("Área: %.2f Km2\n", area[1]);
    printf("PIB: R$ %.2f\n", pib[1]);
    printf("Densidade: %.2f Habitante por Km2\n", densidade[1]);
    printf("PIB PER CAPITA: R$ %.2f\n", pib_per_capita[1]);
    printf("Super Poder: %.2f\n", super_poder[1]);

    // Comparação das Cidades cadastradas (1 se a Carta 1 vence, 0 se a Carta 2 vence).
    printf("\n -------- Comparação de Cartas -------- \n");
    if(populacao[0] > populacao[1]){
        printf("Maior População: 1 \n");
    } else {
        printf("Maior População: 0 \n");
    }

    if(n_pontos_turisticos[0] > n_pontos_turisticos[1]){
        printf("Pontos Turíticos: 1 \n");
    } else {
        printf("Pontos Turíticos: 0 \n");
    }

    if(area[0] > area[1]){
        printf("Área: 1 \n");
    } else {
        printf("Área: 0 \n");
    }

    if(pib[0] > pib[1]){
        printf("PIB: 1 \n");
    } else {
        printf("PIB: 0 \n");
    }

    if(densidade[0] < densidade[1]){
        printf("Densidade: 1 \n");
    } else {
        printf("Densidade: 0 \n");
    }

    if(pib_per_capita[0] > pib_per_capita[1]){
        printf("Pib Per Capita: 1 \n");
    } else {
        printf("Pib Per Capita: 0 \n");
    }

    if(super_poder[0] > super_poder[1]){
        printf("Super Poder: 1 \n");
    } else {
        printf("Super Poder: 0 \n");
    }

    return 0;
}
