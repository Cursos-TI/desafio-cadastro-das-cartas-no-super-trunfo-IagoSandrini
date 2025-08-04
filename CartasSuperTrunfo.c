#include <stdio.h>

int main() {
    char state1;
    int code1;
    char name1[50];
    int population1;
    float area1;
    float pib1;
    int touristSpots1;

    char state2;
    int code2;
    char name2[50];
    int population2;
    float area2;
    float pib2;
    int touristSpots2;

    // Entrada de dados da carta 2 

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
    scanf(" %2f", &area1);

    printf("Digite o valor do PIB: \n");
    scanf(" %2f", &pib1);

    printf("Digite quantos pontos turísticos há: \n");
    scanf(" %d", &touristSpots1);
    

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

 
    printf("Carta 1\n");
    printf("Estado: %c\n", state1);
    printf("Código: %c0%d\n",state1, code1);
    printf("Nome: %s\n", name1);
    printf("População: %d\n", population1);
    printf("Área: %.2f\n", area1);
    printf("Número de Pontos Turísticos: %d\n", touristSpots1);
    
    printf("Carta 2\n");
    printf("Estado: %c\n", state2);
    printf("Código: %c0%d\n",state2, code2);
    printf("Nome: %s\n", name2);
    printf("População: %d\n", population2);
    printf("Área: %.2f\n", area2);
    printf("Número de Pontos Turísticos: %d\n", touristSpots2);

    return 0;
}
