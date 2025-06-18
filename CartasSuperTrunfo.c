#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    //Váriaveis da primeira carta.
    char estado1;
    char codigo1[4] = "01";
    char nome1[30] = "";
    int populacao1;
    int pontosTuris1;
    float km1;
    float pib1;

    //Váriaveis da segunda carta.
    char estado2;
    char codigo2[4] = "02";
    char nome2[30] = "";
    int populacao2;
    int pontosTuris2;
    float km2;
    float pib2;

    //Apresentação do jogo e leitura do estado.
    printf("Bem Vindo ao Super Trunfo!\n\nDigite a letra inicial do estado de A a H:\n");
    scanf(" %c", &estado1);

    getchar();
    //Leitura do nome da cidade.
    printf("Digite o nome da cidade:\n");
    fgets(nome1, 30, stdin);
    nome1[strcspn(nome1, "\n")] = 0;

    //Leitura da população.
    printf("Digite o tamanho da populacao:\n");
    scanf(" %d", &populacao1);

    //Leitura dos pontos turisticos.
    printf("Digite quantos pontos turisticos tem na cidade:\n");
    scanf(" %d", &pontosTuris1);

    //Leitura da área da cidade.
    printf("Digite quanto de area pertence a cidade:\n");
    scanf(" %f", &km1);

    //Leitura do pib da cidade.
    printf("Digite o pib da cidade:\n");
    scanf(" %f", &pib1);


    //Leituras da segunda carta.
    printf("\nAgora vamos para a segunda carta!\nDigite a letra inicial do estado de A a H:\n");
    scanf(" %c", &estado2);

    getchar();
    printf("Digite o nome da cidade:\n");
    fgets(nome2, 30, stdin);
    nome2[strcspn(nome2, "\n")] = 0;

    printf("Digite o tamanho da populacao:\n");
    scanf(" %d", &populacao2);

    printf("Digite quantos pontos turisticos tem na cidade:\n");
    scanf(" %d", &pontosTuris2);

    printf("Digite quanto de area pertence a cidade:\n");
    scanf(" %f", &km2);

    printf("Digite o pib da cidade:\n");
    scanf(" %f", &pib2);


    //Apresentação da primeira carta.
    printf("\nCarta 1:\n");

    printf("Estado: %c\n", estado1);

    printf("Codigo da carta: %c%s\n", estado1, codigo1);

    printf("Nome da cidade: %s\n", nome1);

    printf("Populacao: %d\n", populacao1);

    printf("Pontos turisticos: %d\n", pontosTuris1);

    printf("Area: %.2f\n", km1);

    printf("Pib: %.2f\n", pib1);

    //Apresentação da segunda carta.
    printf("\nCarta 2:\n");

    printf("Estado: %c\n", estado2);

    printf("Codigo da carta: %c%s\n", estado2, codigo2);

    printf("Nome da cidade: %s\n", nome2);

    printf("Populacao: %d\n", populacao2);

    printf("Pontos turisticos: %d\n", pontosTuris2);

    printf("Area: %.2f\n", km2);

    printf("Pib: %.2f\n", pib2);

    return 0;
}
