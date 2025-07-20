#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "");

    int populacao, turistico, populacao_2, turistico_2;
    float area, pib, area_2, pib_2, densidade, densidade_2, pib_per_capita, pib_per_capita_2;
    char estado[3], estado_2[3];
    char codigodacarta[10], codigodacarta_2[10];
    char cidade[100], cidade_2 [100];

    printf("---- Carta 1 ----\n");
    printf("- Insira o estado (Ex: SP):\n ");
    scanf(" %2s", estado);

    printf("- Insira o código:\n ");
    scanf(" %9s", codigodacarta);

    printf("- Insira o nome da cidade:\n ");
    getchar();
    fgets(cidade, 100, stdin);
    cidade[strcspn(cidade, "\n")] = 0;

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
    scanf(" %2s", estado_2);

    printf("- Insira o código:\n ");
    scanf(" %9s", codigodacarta_2);

    printf("- Insira o nome da cidade:\n ");
    getchar(); // Limpar ENTER pendente
    fgets(cidade_2, 100, stdin);
    cidade_2[strcspn(cidade_2, "\n")] = 0; // Remover ENTER do final

    printf("- Insira o número da população:\n ");
    scanf("%i", &populacao_2);

    printf("- Insira a área:\n ");
    scanf("%f", &area_2);

    printf("- Insira o PIB:\n ");
    scanf("%f", &pib_2);

    printf("- Insira a quantidade de pontos turísticos do local:\n ");
    scanf("%i", &turistico_2);

    densidade = populacao / area;
    densidade_2 = populacao_2 / area_2;
    pib_per_capita = pib / populacao;
    pib_per_capita_2 = pib_2 / populacao_2;

    printf("\n- Resultados -\n");
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigodacarta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %i\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %i\n", turistico);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n\n", pib_per_capita);

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado_2);
    printf("Código: %s\n", codigodacarta_2);
    printf("Nome da Cidade: %s\n", cidade_2);
    printf("População: %i\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %i\n", turistico_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_2);
    printf("PIB per Capita: %.2f reais\n\n", pib_per_capita_2);

    return 0;
}
