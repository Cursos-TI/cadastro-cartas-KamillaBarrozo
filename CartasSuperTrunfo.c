#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado[10], carta[5], cidade[20];
    int populacao, turisticos;
    float area, pib;

  // Área para entrada de dados
    printf("Criando as Cartas do Super Trunfo! \nDigite as informações solicitadas: \n\n");
    
    printf("CARTA 1 \n");
    printf("Uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf("%s", estado);
    printf("Letra do estado seguida de um número de 01 a 04 (ex: A02, C01) para formar o código da carta: ");
    scanf("%s", carta);
    printf("Nome da cidade: ");
    scanf("%s", cidade);
    printf("Número de habitantes da cidade: ");
    scanf("%d", &populacao);
    printf("Área da cidade em quilômetros quadrados: ");
    scanf("%f", &area);
    printf("Produto interno da cidade (PIB): ");
    scanf("%f", &pib);
    printf("Quantidade de pontos túristicos na cidade: ");
    scanf("%d", &turisticos);

  // Área para exibição dos dados da cidade
    printf("\n\nDados computados!\n");
    printf("CARTA 1\n");
    printf("Estado: %s\n", estado);
    printf("Código da Carta: %s\n", carta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área %f km²\n", area);
    printf("PIB: %f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", turisticos);

    //Área para entrada de dados
    printf("\n\nDigite as informações para o cadastro da carta 2:\n\n");

    printf("CARTA 2 \n");
    printf("Uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf("%s", estado);
    printf("Letra do estado seguida de um número de 01 a 04 (ex: A02, C01) para formar o código da carta: ");
    scanf("%s", carta);
    printf("Nome da cidade: ");
    scanf("%s", cidade);
    printf("Número de habitantes da cidade: ");
    scanf("%d", &populacao);
    printf("Área da cidade em quilômetros quadrados: ");
    scanf("%f", &area);
    printf("Produto interno da cidade (PIB): ");
    scanf("%f", &pib);
    printf("Quantidade de pontos túristicos na cidade: ");
    scanf("%d", &turisticos);

    //Área para exibição dos dados da cidade
    printf("\n\nDados computados!\n");
    printf("CARTA 2\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", carta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", turisticos);

return 0;
} 
