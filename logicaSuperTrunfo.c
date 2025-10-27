#include <stdio.h>

/*
    Programa: Super Trunfo de Cidades - Nível Novato
    Autor: Thomas Felipe
    Descrição:
        Este código permite o cadastro de duas cartas de cidades e realiza
        uma comparação entre elas com base em um atributo definido no código.

        Atributos cadastrados:
        - Estado
        - Código da carta
        - Nome da cidade
        - População
        - Área
        - PIB
        - Número de pontos turísticos

        Regra:
        - O maior valor vence (exceto densidade populacional, onde o menor vence)
*/

int main() {
    //DECLARAÇÃO DE VARIÁVEIS 
    char estado1[3], estado2[3];
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int pontosTuristicos1, pontosTuristicos2;
    float populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;

    //CADASTRO DA PRIMEIRA CARTA
    printf("=== Cadastro da Primeira Carta ===\n");
    printf("Digite o estado (ex: SP): ");
    scanf("%s", estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1); 

    printf("Digite a população: ");
    scanf("%f", &populacao1);

    printf("Digite a área (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    //CADASTRO DA SEGUNDA CARTA
    printf("=== Cadastro da Segunda Carta ===\n");
    printf("Digite o estado (ex: RJ): ");
    scanf("%s", estado2);

    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a população: ");
    scanf("%f", &populacao2);

    printf("Digite a área (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n");

    //EXIBIÇÃO DAS CARTAS
    printf("===== CARTA 1 =====\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %.0f habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %.0f habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    printf("\n");

    //COMPARAÇÃO
    printf("=== Comparação: PIB ===\n");
    if (pib1 > pib2) {
        printf("Vencedora: %s (Carta 1 - %s)\n", cidade1, codigo1);
    } else if (pib2 > pib1) {
        printf("Vencedora: %s (Carta 2 - %s)\n", cidade2, codigo2);
    } else {
        printf("Empate! Ambas as cidades possuem o mesmo PIB.\n");
    }

    printf("\n=== Fim da Partida ===\n");

    return 0;
}

