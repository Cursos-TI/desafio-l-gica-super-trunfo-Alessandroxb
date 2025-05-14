#include <stdio.h>

int main() {
    // Declaração de variáveis para a Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração de variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    float densidade1, densidade2;
    float percapta1, percapta2;
    float inversodensi1, inversodensi2;
    float superPoder1, superPoder2;
    int atributo;

    printf("Boas-vindas ao Super Trunfo de Cidades!\n");
    printf("Cadastre agora os dados da CARTA 1:\n");

    printf("Informe a letra do Estado (A até H, exceto F): ");
    scanf(" %c", &estado1);

    printf("Informe o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", cidade1); // Lê string com espaço

    printf("Informe o número de habitantes: ");
    scanf("%lu", &populacao1);

    printf("Informe a área da cidade em km²: ");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\nAgora cadastre os dados da CARTA 2:\n");

    printf("Informe a letra do Estado (A até H, exceto F): ");
    scanf(" %c", &estado2);

    printf("Informe o código da carta (ex: B03): ");
    scanf("%s", codigo2);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Informe o número de habitantes: ");
    scanf("%lu", &populacao2);

    printf("Informe a área da cidade em km²: ");
    scanf("%f", &area2);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    percapta1 = pib1 / populacao1;
    percapta2 = pib2 / populacao2;
    inversodensi1 = area1 / populacao1;
    inversodensi2 = area2 / populacao2;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + percapta1 + inversodensi1;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + percapta2 + inversodensi2;


      // Exibição dos dados da carta 1
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
    printf("PIB per Capita: %.2f reais \n", percapta1);
    printf("Super Poder: %.2f \n", superPoder1);

    // Exibição dos dados da carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per Capita: %.2f reais \n", percapta2);
    printf("Super Poder: %.2f \n", superPoder2);

    // Menu de atributos
    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional (menor vence)\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Digite o número do atributo: ");
    scanf("%d", &atributo);

    printf("\n===== COMPARAÇÃO =====\n");

    // Comparação de atributos

        /*------------caso1----------------*/  
    if (atributo == 1) {           
        printf("População:\n");
        printf("Carta 1 - %s: %lu\n", cidade1, populacao1);
        printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
        if (populacao1 > populacao2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else if (populacao2 > populacao1)
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        else
            printf("Resultado: Empate!\n");

        /*------------caso2----------------*/

    } else if (atributo == 2) {             
        printf("Área:\n");
        printf("Carta 1 - %s: %.2f km²\n", cidade1, area1);
        printf("Carta 2 - %s: %.2f km²\n", cidade2, area2);
        if (area1 > area2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else if (area2 > area1)
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        else
            printf("Resultado: Empate!\n");

        /*------------caso3----------------*/

    } else if (atributo == 3) {             
        printf("PIB:\n");
        printf("Carta 1 - %s: %.2f\n", cidade1, pib1);
        printf("Carta 2 - %s: %.2f\n", cidade2, pib2);
        if (pib1 > pib2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else if (pib2 > pib1)
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        else
            printf("Resultado: Empate!\n");

        /*------------caso4----------------*/  

    } else if (atributo == 4) {             
        printf("Pontos Turísticos:\n");
        printf("Carta 1 - %s: %d\n", cidade1, pontosTuristicos1);
        printf("Carta 2 - %s: %d\n", cidade2, pontosTuristicos2);
        if (pontosTuristicos1 > pontosTuristicos2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else if (pontosTuristicos2 > pontosTuristicos1)
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        else
            printf("Resultado: Empate!\n");

        /*------------caso5----------------*/

    } else if (atributo == 5) {          
        printf("Densidade Populacional (menor vence):\n");
        printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidade1);
        printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidade2);
        if (densidade1 < densidade2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else if (densidade2 < densidade1)
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        else
            printf("Resultado: Empate!\n");

        /*------------caso6----------------*/

    } else if (atributo == 6) {             
        printf("PIB per Capita:\n");
        printf("Carta 1 - %s: %.2f\n", cidade1, percapta1);
        printf("Carta 2 - %s: %.2f\n", cidade2, percapta2);
        if (percapta1 > percapta2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else if (percapta2 > percapta1)
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        else
            printf("Resultado: Empate!\n");

        /*------------caso7----------------*/
            
    } else if (atributo == 7) {                
        printf("Super Poder:\n");
        printf("Carta 1 - %s: %.2f\n", cidade1, superPoder1);
        printf("Carta 2 - %s: %.2f\n", cidade2, superPoder2);
        if (superPoder1 > superPoder2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else if (superPoder2 > superPoder1)
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        else
            printf("Resultado: Empate!\n");
    } else {
        printf("Atributo inválido.\n");
    }

    return 0;
}
