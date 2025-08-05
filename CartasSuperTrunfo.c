#include <stdio.h>


int main() {
    char state1;
    char code1[4];
    char name1[50];
    unsigned long int population1;
    float area1;
    float pib1;
    int touristSpots1;
    float density1;
    float pibPerCapita1;
    long double superPower1;
    
    char state2;
    char code2[4];
    char name2[50];
    unsigned long int population2;
    float area2;
    float pib2;
    int touristSpots2;
    float density2;
    float pibPerCapita2;
    long double superPower2;
    
    //Entrada de dados da carta 1  
    printf("Carta 1\n");
    
    printf("Digite a letra do estado: \n");
    scanf(" %c", &state1);
    
    printf("Digite o código da cidade: \n");
    scanf(" %s", code1);
    
    printf("Digite o nome da cidade: \n");
    scanf(" %49[^\n]", name1);
    
    printf("Digite o número de habitantes: \n");
    scanf(" %lu", &population1);
    
    printf("Digite o tamanho da área: \n");
    scanf(" %f", &area1);
    
    printf("Digite o valor do PIB: \n");
    scanf(" %f", &pib1);
    
    printf("Digite quantos pontos turísticos há: \n");
    scanf(" %d", &touristSpots1);
    
    density1 = population1 / area1;
    pibPerCapita1 = (pib1 *  1000000000) / population1;
    superPower1 = (long double) population1 + area1 + pib1 + touristSpots1 + pibPerCapita1 + (1 / density1);
    
    
    //Entrada de dados da carta 2 
    printf("Carta 2\n");
    
    printf("Digite a letra do estado: \n");
    scanf(" %c", &state2);
    
    printf("Digite o código da cidade: \n");
    scanf(" %s", code2);
    
    printf("Digite o nome da cidade: \n");
    scanf(" %49[^\n]", name2);
    
    printf("Digite o número de habitantes: \n");
    scanf(" %lu", &population2);
    
    printf("Digite o tamanho da área: \n");
    scanf(" %f", &area2);
    
    printf("Digite o valor do PIB: \n");
    scanf(" %f", &pib2);
    
    printf("Digite quantos pontos turísticos há: \n");
    scanf(" %d", &touristSpots2);


    density2 = population2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / population2;
    superPower2 = (long double) population2 + area2 + pib2 + touristSpots2 + pibPerCapita2 + (2 / density2);
   
    //Print cartas
    printf("Carta 1\n");
    printf("Estado: %c\n", state1);
    printf("Código: %s\n", code1);
    printf("Nome: %s\n", name1);
    printf("População: %lu\n", population1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", touristSpots1);
    printf("Densidade Populacional:  %.2f hab/km²\n", density1);
    printf("PIB per capita:  %.2f\n", pibPerCapita1);
    printf("O SuperPoder é: %.2Lf\n", superPower1);

  
    
    printf("Carta 2\n");
    printf("Estado: %c\n", state2);
    printf("Código: %s\n", code2);
    printf("Nome: %s\n", name2);
    printf("População: %lu\n", population2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", touristSpots2);
    printf("Densidade Populacional:  %.2f hab/km²\n", density2);
    printf("PIB per capita:  %.2f\n", pibPerCapita2);
    printf("O SuperPoder é: %.2Lf\n", superPower2);



    //Print comparativos
    printf("Comparação: \n");
    printf("População: %d\n", population1 > population2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", touristSpots1 > touristSpots2);
    printf("Densidade Populacional: %d\n", density1 < density2);
    printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: %d\n", superPower1 > superPower2);

    

    return 0;
}
