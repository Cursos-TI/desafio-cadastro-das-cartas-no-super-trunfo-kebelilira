#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "");

    unsigned long int populacao, populacao2;
    float area, area2, pib, pib2;
    int turistico, turistico2;
    
    float densidade, densidade2;
    float pibPerCapita, pibPerCapita2;
    float inversoDensidade, inversoDensidade2;
    float superPoder, superPoder2;

    char estado[3], estado2[3];
    char codigo[10], codigo2[10];
    char cidade[100], cidade2[100];

    /*Entrada dos dados da Carta 1*/
    printf("---- Carta 1 ----\n");
    printf("- Insira o estado:\n ");
    scanf(" %2s", estado);

    printf("- Insira o código:\n ");
    scanf(" %9s", codigo);

    /*Usei uma forma diferente de pegar os dados para que a formatação
    para que aceite espaços e acentos*/
    printf("- Insira o nome da cidade:\n ");
    getchar();
    fgets(cidade, 100, stdin);
    cidade[strcspn(cidade, "\n")] = 0;

    printf("- Insira o número da população:\n ");
    scanf("%lu", &populacao);

    printf("- Insira a área:\n ");
    scanf("%f", &area);

    printf("- Insira o PIB:\n ");
    scanf("%f", &pib);

    printf("- Insira a quantidade de pontos turísticos do local:\n ");
    scanf("%i", &turistico);

    /*Entrada dos dados da carta 2*/
    printf("---- Carta 2 ----\n");
    printf("- Insira o estado (Ex: SP):\n ");
    scanf(" %2s", estado2);

    printf("- Insira o código:\n ");
    scanf(" %9s", codigo2);

    /*Usei uma forma diferente de pegar os dados para que a formatação
    para que aceite espaços e acentos*/
    printf("- Insira o nome da cidade:\n ");
    getchar();
    fgets(cidade2, 100, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("- Insira o número da população:\n ");
    scanf("%lu", &populacao2);

    printf("- Insira a área:\n ");
    scanf("%f", &area2);

    printf("- Insira o PIB:\n ");
    scanf("%f", &pib2);

    printf("- Insira a quantidade de pontos turísticos do local:\n ");
    scanf("%i", &turistico2);

    /*Efetuando as divisões para cada dado*/
    densidade = populacao / area;
    densidade2 = populacao2 / area2;

    pibPerCapita = pib / populacao;
    pibPerCapita2 = pib2 / populacao2;

    inversoDensidade = 1 / densidade;
    inversoDensidade2 = 1 / densidade2;

    superPoder = (float)populacao + area + turistico + pibPerCapita + inversoDensidade;
    superPoder2 = (float)populacao2 + area2 + turistico2 + pibPerCapita2 + inversoDensidade2;

    /* Comparações */
    int cPopulacao = populacao > populacao2;
    int cArea = area > area2;
    int cPib = pib > pib2;
    int cTuristico = turistico > turistico2;
    int cDensidade = densidade > densidade2;
    int cPibPerCapita = pibPerCapita > pibPerCapita2;
    int cSuperPoder = superPoder > superPoder2;
    
    /*Resultado da Carta 1*/
    printf("\n- Resultados -\n");
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %i\n", turistico);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita);

    /*Resultado carta 2*/
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %i\n", turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita2);
    
    /* Resultado da comparação*/
    printf("*** Comparação das Cartas ***\n");
    printf("População: Carta %d venceu (%d)\n", cPopulacao ? 1 : 2, cPopulacao);
    printf("Área: Carta %d venceu (%d)\n", cArea ? 1 : 2, cArea);
    printf("PIB: Carta %d venceu (%d)\n", cPib ? 1 : 2, cPib);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", cTuristico ? 1 : 2, cTuristico);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", cDensidade ? 1 : 2, cDensidade);
    printf("PIB Per Capita: Carta %d venceu (%d)\n", cPibPerCapita ? 1 : 2, cPibPerCapita);
    printf("Super Poder: Carta %d venceu (%d)\n", cSuperPoder ? 1 : 2, cSuperPoder);
    
    return 0;
}
