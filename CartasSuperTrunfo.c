#include <stdio.h>


int main() {
    char state1;
    int code1;
    char name1[50];
    int population1;
    float area1;
    float pib1;
    int touristSpots1;
    float density1;
    float pibPerCapita1;
    
    char state2;
    int code2;
    char name2[50];
    int population2;
    float area2;
    float pib2;
    int touristSpots2;
    float density2;
    float pibPerCapita2;
    
    
    // Entrada de dados da carta 1  
    printf("Carta 1\n");
    
    printf("Digite a letra do estado: \n");
    scanf(" %c", &state1);
    
    printf("Digite o código da cidade: \n");
    scanf(" %d", &code1);
    
    printf("Digite seu nome: \n");
    scanf("%s", name1);
    
    printf("Digite o número de habitantes: \n");
    scanf(" %d", &population1);
    
    printf("Digite o tamanho da área: \n");
    scanf(" %f", &area1);
    
    printf("Digite o valor do PIB: \n");
    scanf(" %f", &pib1);
    
    printf("Digite quantos pontos turísticos há: \n");
    scanf(" %d", &touristSpots1);
    
     density1 = population1 / area1;
     pibPerCapita1 = (pib1 * 1000000000) / population1;
    
    
    // Entrada de dados da carta 2 
    printf("Carta 2\n");
    
    printf("Digite a letra do estado: \n");
    scanf(" %c", &state2);
    
    printf("Digite o código da cidade: \n");
    scanf(" %d", &code2);
    
    printf("Digite seu nome: \n");
    scanf("%s", name2);
    
    printf("Digite o número de habitantes: \n");
    scanf(" %d", &population2);
    
    printf("Digite o tamanho da área: \n");
    scanf(" %f", &area2);
    
    printf("Digite o valor do PIB: \n");
    scanf(" %f", &pib2);
    
    printf("Digite quantos pontos turísticos há: \n");
    scanf(" %d", &touristSpots2);
     
  
     density2 = population2 / area2;
     pibPerCapita2 = (pib2 * 1000000000) / population2;

   
    //Print cartas
    printf("Carta 1\n");
    printf("Estado: %c\n", state1);
    printf("Código: %d\n", code1);
    printf("Nome: %s\n", name1);
    printf("População: %d\n", population1);
    printf("Área: %.2fkm²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", touristSpots1);
    printf("Densidade Populacional:  %.2fhab/km²\n", density1);
    printf("PIB per capita:  %.2f\n", pibPerCapita1);
  
    
    printf("Carta 2\n");
    printf("Estado: %c\n", state2);
    printf("Código: %d\n", code2);
    printf("Nome: %s\n", name2);
    printf("População: %d\n", population2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", touristSpots2);
    printf("Densidade Populacional:  %.2fhab/km²\n", density2);
    printf("PIB per capita:  %.2f\n", pibPerCapita2);

    return 0;
}
