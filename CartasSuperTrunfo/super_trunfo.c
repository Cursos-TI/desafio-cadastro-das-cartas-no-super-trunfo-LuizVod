#include <stdio.h>

int main(){
    int Populacao, Pontos;
    float PIB, Area, Densidade, PIBper;
    char Codigo[4], Estado[80], Nome[50];
    

    // Primeira carta \\

    printf("***Jogo de Cartas do Super Trunfo*** \n");

    printf("Digite estado (A-H) da primeira carta: \n");
    scanf("%s", &Estado);

    printf("Digite o código (ex: A01-01) da carta: \n");
    scanf("%s", &Codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &Nome);

    printf("Digite a população da cidade: \n");
    scanf("%d", &Populacao);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &Area);

    printf("Digite o PIB em bilhões de reais: \n");
    scanf("%f", &PIB);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &Pontos);

    Densidade = Populacao / Area;

    Densidade = PIB / Populacao;
    
    // Segunda Carta \\

    int Populacao1, Pontos1;
    float PIB1, Area1, Densidade1, PIBper1;
    char Codigo1[4], Estado1[80], Nome1[50];
    
    printf("Digite estado (A-H) da segunda carta: \n");
    scanf("%s", &Estado1);

    printf("Digite o código (ex: A02-02) da carta: \n");
    scanf("%s", &Codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &Nome1);

    printf("Digite a população da cidade: \n");
    scanf("%d", &Populacao1);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &Area1);

    printf("Digite o PIB em bilhões de reais: \n");
    scanf("%f", &PIB1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &Pontos1);

    Densidade1 = Populacao / Area;

    PIBper1 = PIB / Populacao;
    

    printf("Digite estado (A-H) da primeira carta:%s \n", Estado);
    printf("Digite o código (ex: A01-01) da carta:%s \n", Codigo);
    printf("Digite o nome da cidade:%s \n", Nome);
    printf("Digite a população da cidade:%d \n", Populacao);
    printf("Digite a área da cidade em km²:%.2f \n", Area);
    printf("Digite o PIB em bilhões de reais:%.2f \n", PIB);
    printf("Número de Pontos Turísticos:%d \n", Pontos);
    printf("Densidade Populacional:%.2f \n", Densidade);
    printf("PIB per Capita:%.2f \n", PIBper);
    
    
    printf("Digite estado (A-H) da segunda carta:%s \n", Estado1);
    printf("Digite o código (ex: A02-02) da carta:%s \n", Codigo1);
    printf("Digite o nome da cidade:%s \n", Nome1);
    printf("Digite a população da cidade:%d \n", Populacao1);
    printf("Digite a área da cidade em km²:%.2f \n", Area1);
    printf("Digite o PIB em bilhões de reais:%.2f \n", PIB1);
    printf("Número de Pontos Turísticos:%d \n", Pontos1);
    printf("Densidade Populacional:%.2f \n", Densidade1);
    printf("PIB per Capita:%.2f \n", PIBper1);
    
    return 0;

}