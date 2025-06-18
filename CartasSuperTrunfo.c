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
    float densi1;
    float capita1;
    float super1;

    //Váriaveis da segunda carta.
    char estado2;
    char codigo2[4] = "02";
    char nome2[30] = "";
    int populacao2;
    int pontosTuris2;
    float km2;
    float pib2;
    float densi2;
    float capita2;
    float super2;

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

    //Calculo da densidade populacional.
    densi1 = populacao1/km1;

    //Calculo do PIB per capita.
    capita1 = populacao1/pib1;

    //Calculo do super poder.
    super1 = (float)populacao1 + pontosTuris1 + km1 + pib1 + capita1 + km1/populacao1;


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

    densi2 = populacao2/km2;

    capita2 = populacao2/pib2;

    super2 = (float)populacao2 + pontosTuris2 + km2 + pib2 + capita2 + km2/populacao2;


    //Apresentação da primeira carta.
    printf("\nCarta 1:\n");

    printf("Estado: %c\n", estado1);

    printf("Codigo da Carta: %c%s\n", estado1, codigo1);

    printf("Nome da Cidade: %s\n", nome1);

    printf("Populacao: %d\n", populacao1);

    printf("Pontos Turisticos: %d\n", pontosTuris1);

    printf("Area: %.2f\n", km1);

    printf("PIB: %.2f\n", pib1);

    printf("Densidade Populacional: %.2f\n", densi1);

    printf("Pib per Capita: %.2f\n", capita1);

    printf("Super Poder: %.2f\n", super1);

    //Apresentação da segunda carta.
    printf("\nCarta 2:\n");

    printf("Estado: %c\n", estado2);

    printf("Codigo da Carta: %c%s\n", estado2, codigo2);

    printf("Nome da Cidade: %s\n", nome2);

    printf("Populacao: %d\n", populacao2);

    printf("Pontos Turisticos: %d\n", pontosTuris2);

    printf("Area: %.2f\n", km2);

    printf("PIB: %.2f\n", pib2);

    printf("Densidade Populacional: %.2f\n", densi2);

    printf("Pib per Capita: %.2f\n", capita2);

    printf("Super Poder: %.2f\n", super2);


    //Comparação entre as duas cartas.
    printf("\nComparacao das Cartas: \n");

    printf("Populacao: ");
    if(populacao1 > populacao2){
        printf("Carta 1 venceu! (1)\n");
    } else{
        printf("Carta 2 venceu! (0)\n");
    }

    printf("Area: ");
    if(km1 > km2){
        printf("Carta 1 venceu! (1)\n");
    } else{
        printf("Carta 2 venceu! (0)\n");
    }

    printf("PIB: ");
    if(pib1 > pib2){
        printf("Carta 1 venceu! (1)\n");
    } else{
        printf("Carta 2 venceu! (0)\n");
    }

    printf("Pontos Turisticos: ");
    if(pontosTuris1 > pontosTuris2){
        printf("Carta 1 venceu! (1)\n");
    } else{
        printf("Carta 2 venceu! (0)\n");
    }

    printf("Densidade Populacional: ");
    if(densi1 < densi2){
        printf("Carta 1 venceu! (1)\n");
    } else{
        printf("Carta 2 venceu! (0)\n");
    }

    printf("PIB per Capita: ");
    if(capita1 > capita2){
        printf("Carta 1 venceu! (1)\n");
    } else{
        printf("Carta 2 venceu! (0)\n");
    }

    printf("Super Poder: ");
    if(super1 > super2){
        printf("Carta 1 venceu! (1)\n");
    } else{
        printf("Carta 2 venceu! (0)\n");
    }

    return 0;
}
