#include <stdio.h>

int main() {
    char state1;
    int code1;
    char name1[20];
    int population1;
    float area1;
    int touristSpots1;

    char state2;
    int code2;
    char name2[20];
    int population2;
    float area2;
    int touristSpots2;

    // Entrada de dados da carta 2 

    printf("Carta 1\n");

    printf("Digite a letra do estado: ");
    scanf(" %c", &state1);
    
    printf("Digite o código da cidade: ");
    scanf(" %d", &code1);

    printf("Digite seu nome: ");
    scanf(" %s", name1);

    printf("Digite o número de habitantes: ");
    scanf(" %d", &population1);

    printf("Digite o tamanho da área: ");
    scanf(" %f", &area1);

    printf("Digite quantos pontos turísticos há: ");
    scanf(" %d\n", &touristSpots1);

 
    printf("Carta 1\n");
    printf("Estado: %c\n", state1);
    printf("Código: %c0%d\n",state1, code1);
    printf("Nome: %s\n", name1);
    printf("População: %d\n", population1);
    printf("Área: %f\n", area1);
    printf("Número de Pontos Turísticos: %d\n", touristSpots1);

    
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
