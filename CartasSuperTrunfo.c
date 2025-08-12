#include <stdio.h>

int main()
{
    char state1[3], state2[3];
    ;
    char code1[4], code2[4];
    char name1[50], name2[50];
    unsigned long int population1, population2;
    float area1, area2;
    float pib1, pib2;
    int touristSpots1, touristSpots2;
    float density1, density2;
    float pibPerCapita1, pibPerCapita2;
    long double superPower1, superPower2;
    int option1, option2;

    // Entrada de dados da carta 1
    printf("Carta 1\n");

    printf("Digite a letra do estado: \n");
    scanf(" %s", state1);

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
    pibPerCapita1 = (pib1 * 1000000000) / population1;
    superPower1 = (long double)population1 + area1 + pib1 + touristSpots1 + pibPerCapita1 + (1.0 / density1);

    // Entrada de dados da carta 2
    printf("Carta 2\n");

    printf("Digite a letra do estado: \n");
    scanf(" %s", state2);

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
    superPower2 = (long double)population2 + area2 + pib2 + touristSpots2 + pibPerCapita2 + (1.0 / density2);

    // //Print cartas
    // printf("Carta 1\n");
    // printf("Estado: %s\n", state1);
    // printf("Código: %s\n", code1);
    // printf("Nome: %s\n", name1);
    // printf("População: %lu\n", population1);
    // printf("Área: %.2f km²\n", area1);
    // printf("PIB: %.2f\n", pib1);
    // printf("Número de Pontos Turísticos: %d\n", touristSpots1);
    // printf("Densidade Populacional:  %.2f hab/km²\n", density1);
    // printf("PIB per capita:  %.2f\n", pibPerCapita1);
    // printf("O SuperPoder é: %.2Lf\n", superPower1);

    // printf("Carta 2\n");
    // printf("Estado: %s\n", state2);
    // printf("Código: %s\n", code2);
    // printf("Nome: %s\n", name2);
    // printf("População: %lu\n", population2);
    // printf("Área: %.2f km²\n", area2);
    // printf("PIB: %.2f\n", pib2);
    // printf("Número de Pontos Turísticos: %d\n", touristSpots2);
    // printf("Densidade Populacional:  %.2f hab/km²\n", density2);
    // printf("PIB per capita:  %.2f\n", pibPerCapita2);
    // printf("O SuperPoder é: %.2Lf\n", superPower2);

    // //Print comparativos
    // printf("Comparação: \n");
    // printf("População: %d\n", population1 > population2);
    // printf("Área: %d\n", area1 > area2);
    // printf("PIB: %d\n", pib1 > pib2);
    // printf("Pontos Turísticos: %d\n", touristSpots1 > touristSpots2);
    // printf("Densidade Populacional: %d\n", density1 < density2);
    // printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2);
    // printf("Super Poder: %d\n", superPower1 > superPower2);

    // printf("Carta 1 - %s: %lu\n", state1, population1);
    // printf("Carta 2 - %s: %lu\n", state2, population2);

    // if(population1 > population2) {
    //    printf("Carta 1 %s venceu!\n", name1);
    // } else {
    //     printf("Carta 2 %s venceu\n", name2);
    // };

    // Menu de escolha de comparativo.
    printf("Escolha o primero atributo para comparar: \n 1 - População \n 2 - Área \n 3 - PIB \n 4 - Número de pontos turísticos \n 5 - Densidade demográfica \n");
    scanf(" %d", &option1);

    switch (option1)
    {
    case 1:
        if (population1 > population2)
        {
            printf("Nome: %s vs %s\n", name1, name2);
            printf("Atributo escolhido: População\n");
            printf("Carta 1: %lu, Carta 2: %lu\n", population1, population2);
            printf("Soma: %lu", (population1 + population2));
            printf("Vencedor: Carta 1");
        }
        else if (population1 < population2)
        {
            printf("%s vs %s\n", name1, name2);
            printf("Atributo escolhido: População\n");
            printf("Carta 1: %lu, Carta 2: %lu\n", population1, population2);
            printf("Soma: %lu", population1 + population2);
            printf("Vencedor: Carta 2\n");
        }
        else
        {
            printf("Empate!");
        }
        break;
    case 2:
        if (area1 > area2)
        {
            printf("Nome: %s vs %s\n", name1, name2);
            printf("Atributo escolhido: Área\n");
            printf("Carta 1: %f, Carta 2: %f\n", area1, area2);
            printf("Soma: %f", area1 + area2);
            printf("Vencedor: Carta 1");
        }
        else if (area1 < area2)
        {
            printf("Nome: %s vs %s\n", name1, name2);
            printf("Atributo escolhido: Área\n");
            printf("Carta 1: %f, Carta 2: %f\n", area1, area2);
            printf("Soma: %f", area1 + area2);
            printf("Vencedor: Carta 2\n");
        }
        else
        {
            printf("Empate!");
        }
        break;
    case 3:
        if (pib1 > pib2)
        {
            printf("Nome: %s vs %s\n", name1, name2);
            printf("Atributo escolhido: PIB\n");
            printf("Carta 1: %f, Carta 2: %f\n", pib1, pib2);
            printf("Soma: %f", pib1 + pib2);
            printf("Vencedor: Carta 1");
        }
        else if (pib1 < pib2)
        {
            printf("Nome: %s vs %s\n", name1, name2);
            printf("Atributo escolhido: PIB\n");
            printf("Carta 1: %f, Carta 2: %f\n", pib1, pib2);
            printf("Soma: %f", pib1 + pib2);
            printf("Vencedor: Carta 2\n");
        }
        else
        {
            printf("Empate!");
        }
        break;
    case 4:
        if (touristSpots1 > touristSpots2)
        {
            printf("Nome: %s vs %s\n", name1, name2);
            printf("Atributo escolhido: Número de pontos turísticos\n");
            printf("Carta 1: %d, Carta 2: %d\n", touristSpots1, touristSpots2);
            printf("Soma: %d", touristSpots1 + touristSpots2);
            printf("Vencedor: Carta 1");
        }
        else if (touristSpots1 < touristSpots2)
        {
            printf("Nome: %s vs %s\n", name1, name2);
            printf("Atributo escolhido: Número de pontos turísticos\n");
            printf("Carta 1: %d, Carta 2: %d\n", touristSpots1, touristSpots2);
            printf("Soma: %d", touristSpots1 + touristSpots2);
            printf("Vencedor: Carta 2\n");
        }
        else
        {
            printf("Empate!");
        }
        break;
    case 5:
        if (density1 > density2)
        {
            printf("Nome: %s vs %s\n", name1, name2);
            printf("Atributo escolhido: Densidade demográfica\n");
            printf("Carta 1: %f, Carta 2: %f\n", density1, density2);
            printf("Soma: %f", density1 + density2);
            printf("Vencedor: Carta 2\n");
        }
        else if (density1 < density2)
        {
            printf("Nome: %s vs %s\n", name1, name2);
            printf("Atributo escolhido: Densidade demográfica\n");
            printf("Carta 1: %f, Carta 2: %f\n", density1, density2);
            printf("Soma: %f", density1 + density2);
            printf("Vencedor: Carta 1\n");
        }
        else
        {
            printf("Empate!");
        }
        break;
    default:
        printf("Opção inválida, tente novamente.");
    }

    printf("Escolha o segundo atributo para comparar: \n 1 - População \n 2 - Área \n 3 - PIB \n 4 - Número de pontos turísticos \n 5 - Densidade demográfica \n");
    scanf(" %d", &option2);

    if (option1 == option2)
    {
        printf("Selecione um atributo diferente do primeiro\n");
    }
    else
    {
        switch (option2)
        {
        case 1:
            if (population1 > population2)
            {
                printf("Nome: %s vs %s\n", name1, name2);
                printf("Atributo escolhido: População\n");
                printf("Carta 1: %lu, Carta 2: %lu\n", population1, population2);
                printf("Soma: %lu\n", (population1 + population2));
                printf("Vencedor: Carta 1");
            }
            else if (population1 < population2)
            {
                printf("%s vs %s\n", name1, name2);
                printf("Atributo escolhido: População\n");
                printf("Carta 1: %lu, Carta 2: %lu\n", population1, population2);
                printf("Soma: %lu\n", population1 + population2);
                printf("Vencedor: Carta 2\n");
            }
            else
            {
                printf("Empate!");
            }
            break;
        case 2:
            if (area1 > area2)
            {
                printf("Nome: %s vs %s\n", name1, name2);
                printf("Atributo escolhido: Área\n");
                printf("Carta 1: %f, Carta 2: %f\n", area1, area2);
                printf("Soma: %f\n", area1 + area2);
                printf("Vencedor: Carta 1");
            }
            else if (area1 < area2)
            {
                printf("Nome: %s vs %s\n", name1, name2);
                printf("Atributo escolhido: Área\n");
                printf("Carta 1: %f, Carta 2: %f\n", area1, area2);
                printf("Soma: %f\n", area1 + area2);
                printf("Vencedor: Carta 2\n");
            }
            else
            {
                printf("Empate!");
            }
            break;
        case 3:
            if (pib1 > pib2)
            {
                printf("Nome: %s vs %s\n", name1, name2);
                printf("Atributo escolhido: PIB\n");
                printf("Carta 1: %f, Carta 2: %f\n", pib1, pib2);
                printf("Soma: %f\n", pib1 + pib2);
                printf("Vencedor: Carta 1");
            }
            else if (pib1 < pib2)
            {
                printf("Nome: %s vs %s\n", name1, name2);
                printf("Atributo escolhido: PIB\n");
                printf("Carta 1: %f, Carta 2: %f\n", pib1, pib2);
                printf("Soma: %f\n", pib1 + pib2);
                printf("Vencedor: Carta 2\n");
            }
            else
            {
                printf("Empate!");
            }
            break;
        case 4:
            if (touristSpots1 > touristSpots2)
            {
                printf("Nome: %s vs %s\n", name1, name2);
                printf("Atributo escolhido: Número de pontos turísticos\n");
                printf("Carta 1: %d, Carta 2: %d\n", touristSpots1, touristSpots2);
                printf("Soma: %d\n", touristSpots1 + touristSpots2);
                printf("Vencedor: Carta 1");
            }
            else if (touristSpots1 < touristSpots2)
            {
                printf("Nome: %s vs %s\n", name1, name2);
                printf("Atributo escolhido: Número de pontos turísticos\n");
                printf("Carta 1: %d, Carta 2: %d\n", touristSpots1, touristSpots2);
                printf("Soma: %d\n", touristSpots1 + touristSpots2);
                printf("Vencedor: Carta 2\n");
            }
            else
            {
                printf("Empate!");
            }
            break;
        case 5:
            if (density1 > density2)
            {
                printf("Nome: %s vs %s\n", name1, name2);
                printf("Atributo escolhido: Densidade demográfica\n");
                printf("Carta 1: %f, Carta 2: %f\n", density1, density2);
                printf("Soma: %f\n", density1 + density2);
                printf("Vencedor: Carta 2\n");
            }
            else if (density1 < density2)
            {
                printf("Nome: %s vs %s\n", name1, name2);
                printf("Atributo escolhido: Densidade demográfica\n");
                printf("Carta 1: %f, Carta 2: %f\n", density1, density2);
                printf("Soma: %f\n", density1 + density2);
                printf("Vencedor: Carta 1\n");
            }
            else
            {
                printf("Empate!");
            }
            break;
        default:
            printf("Opção inválida, tente novamente.");
        }

        return 0;
    }
};
