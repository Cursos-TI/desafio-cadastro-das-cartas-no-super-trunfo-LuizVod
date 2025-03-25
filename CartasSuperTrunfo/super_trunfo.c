#include <stdio.h>

int main(){
    int Populacao, Pontos;
    float PIB, Area;
    char Codigo[4], Estado[80], Nome[50];


    // Primeira carta //


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


    // Segunda Carta //


    printf("Digite estado (A-H) da segunda carta: \n");
    scanf("%s", &Estado);

    printf("Digite o código (ex: A02-02) da carta: \n");
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

    printf("Digite estado (A-H) da primeira carta:%s \n", Estado);
    printf("Digite o código (ex: A01-01) da carta:%s \n", Codigo);
    printf("Digite o nome da cidade:%s \n", Nome);
    printf("Digite a população da cidade:%d \n", Populacao);
    printf("Digite a área da cidade em km²:%f \n", Area);
    printf("Digite o PIB em bilhões de reais:%f \n", PIB);
    printf("Número de Pontos Turísticos:%d \n", Pontos);
    
    printf("Digite estado (A-H) da segunda carta:%s \n", Estado);
    printf("Digite o código (ex: A02-02) da carta:%s \n", Codigo);
    printf("Digite o nome da cidade:%s \n", Nome);
    printf("Digite a população da cidade:%d \n", Populacao);
    printf("Digite a área da cidade em km²:%f \n", Area);
    printf("Digite o PIB em bilhões de reais:%f \n", PIB);
    printf("Número de Pontos Turísticos:%d \n", Pontos);

    return 0;

}