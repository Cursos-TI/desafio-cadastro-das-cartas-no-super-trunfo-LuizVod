#include <stdio.h>

int main(){
    int Populacao, Populacao1; // %d - int //
    int Pontos, Pontos1; // %d - int //
    float PIB, PIB1; // %f - float //
    float Area, Area1; // %f - float //
    float Densidade, Densidade1; // %f - float //
    float PIBper, PIBper1; // %f - float //
    float SuperPoder, SuperPoder1; // %f - float //
    char Codigo[50], Codigo1[50]; // %s - string //
    char Estado[80], Estado1[80]; // %s - string //
    char Nome[50], Nome1[50]; // %s - string //

    // Primeira carta //

    printf("***Jogo de Cartas do Super Trunfo*** \n");

    printf("Digite estado (A-H) da primeira carta: \n");
    scanf("%s", Estado);

    printf("Digite o código (ex: A01-01) da carta: \n");
    scanf("%s", Codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Nome);

    printf("Digite a população da cidade: \n");
    scanf("%d", &Populacao);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &Area);

    printf("Digite o PIB em bilhões de reais: \n");
    scanf("%f", &PIB);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &Pontos);

    Densidade = Populacao / Area;

    PIBper = PIB / Populacao;

    SuperPoder = Populacao + PIBper;

    // Segunda Carta //

    printf("Digite estado (A-H) da segunda carta: \n");
    scanf("%s", Estado1);

    printf("Digite o código (ex: A02-02) da carta: \n");
    scanf("%s", Codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Nome1);

    printf("Digite a população da cidade: \n");
    scanf("%d", &Populacao1);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &Area1);

    printf("Digite o PIB em bilhões de reais: \n");
    scanf("%f", &PIB1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &Pontos1);

    Densidade1 = Populacao1 / Area1;

    PIBper1 = PIB1 / Populacao1;

    SuperPoder1 = Populacao1 + PIBper1;

    // Imprimir primeira carta. //

    printf("Digite estado (A-H) da primeira carta:%s \n", Estado);
    printf("Digite o código (ex: A01-01) da carta:%s \n", Codigo);
    printf("Digite o nome da cidade:%s \n", Nome);
    printf("Digite a população da cidade:%d \n", Populacao);
    printf("Digite a área da cidade em km²:%.2f \n", Area);
    printf("Digite o PIB em bilhões de reais:%.2f \n", PIB);
    printf("Número de Pontos Turísticos:%d \n", Pontos);
    printf("Densidade Populacional:%.2f \n", Densidade);
    printf("PIB per Capita:%.2f \n", PIBper);

    // Imprimir segunda carta. //

    printf("Digite estado (A-H) da segunda carta:%s \n", Estado1);
    printf("Digite o código (ex: A02-02) da carta:%s \n", Codigo1);
    printf("Digite o nome da cidade:%s \n", Nome1);
    printf("Digite a população da cidade:%d \n", Populacao1);
    printf("Digite a área da cidade em km²:%.2f \n", Area1);
    printf("Digite o PIB em bilhões de reais:%.2f \n", PIB1);
    printf("Número de Pontos Turísticos:%d \n", Pontos1);
    printf("Densidade Populacional:%.2f \n", Densidade1);
    printf("PIB per Capita:%.2f \n", PIBper1);

    // Se. // Se Não. //

    if (SuperPoder > SuperPoder1) {
      printf("Primeira carta é a vencedora");
    } else {
      printf("Segunda carta é a vencedora");
    }

    printf("***Fim do Jogo*** \n");

    return 0;

}