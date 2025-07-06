#include <stdio.h>

int main()
{
    int populacao, turistico;
    int populacao_2, turistico_2;
    float area, pib;
    float area_2, pib_2;
    char estado[3];
    char estado_2[3];
    char codigodacarta[10];
    char codigodacarta_2[10];
    char cidade[100];
    char cidade_2[100];

    printf("---- Carta 1 ----\n");
    printf("- Insira o estado (Ex: SP):\n ");
    scanf("%2s", &estado);
    printf("- Insira o código:\n ");
    scanf("%9s", &codigodacarta);
    printf("- Insira o nome da cidade:\n ");
    scanf("%99s", &cidade);
    printf("- Insira o número da população:\n ");
    scanf("%i", &populacao);
    printf("- Insira a área:\n ");
    scanf("%f", &area);
    printf("- Insira o PIB:\n ");
    scanf("%f", &pib);
    printf("- Insira a quantidade de pontos turísticos do local:\n ");
    scanf("%i", &turistico);

    printf("---- Carta 2 ----\n");
    printf("- Insira o estado (Ex: SP):\n ");
    scanf("%2s", &estado_2);
    printf("- Insira o código:\n ");
    scanf("%9s", &codigodacarta_2);
    printf("- Insira o nome da cidade:\n ");
    scanf("%99s", &cidade_2);
    printf("- Insira o número da população:\n ");
    scanf("%i", &populacao_2);
    printf("- Insira a área:\n ");
    scanf("%f", &area_2);
    printf("- Insira o PIB:\n ");
    scanf("%f", &pib_2);
    printf("- Insira a quantidade de pontos turísticos do local:\n ");
    scanf("%i", &turistico_2);

    printf("\n- Resultados -\n");
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigodacarta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %i\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %i\n\n", turistico);

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado_2);
    printf("Código: %s\n", codigodacarta_2);
    printf("Nome da Cidade: %s\n", cidade_2);
    printf("População: %i\n", populacao_2);
    printf("Área: %f km²\n", area_2);
    printf("PIB: %f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %i\n\n", turistico_2);

    return 0;
}
