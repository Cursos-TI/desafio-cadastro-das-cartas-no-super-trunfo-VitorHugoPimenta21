#include <stdio.h>

int main() {
    // Declaração dos atributos da Primeira Carta
    char codigo_carta_um[4];
    char nome_carta_um[50];
    char estado_carta_um;
    unsigned long int populacao_carta_um;
    float area_carta_um;
    float pib_carta_um;
    int npt_carta_um;
    float densidade_carta_um;
    float pibcapita_carta_um;

    // Declaração dos atributos da Segunda Carta
    char codigo_carta_dois[4];
    char nome_carta_dois[50];
    char estado_carta_dois;
    unsigned long int populacao_carta_dois;
    float area_carta_dois;
    float pib_carta_dois;
    int npt_carta_dois;
    float densidade_carta_dois;
    float pibcapita_carta_dois;

    // Introdução
    printf("Super Trunfo de Cidades\nInsira os Dados das Duas Cidades\n");

    // Coleta de dados da Primeira Carta
    printf("\n--- Primeira Carta ---\n"); 
    printf("Código da Primeira Carta: ");
    scanf("%s", codigo_carta_um);
    printf("Nome da Primeira Carta: ");
    scanf(" %[^\n]", nome_carta_um);
    printf("Estado da Primeira Carta (sigla): ");
    scanf(" %c", &estado_carta_um);
    printf("População da Primeira Carta: ");
    scanf("%lu", &populacao_carta_um);
    printf("Área da Primeira Carta (km²): ");
    scanf("%f", &area_carta_um);
    printf("PIB da Primeira Carta (em milhões): ");
    scanf("%f", &pib_carta_um);
    printf("Nº de Pontos Turísticos da Primeira Carta: ");
    scanf("%d", &npt_carta_um);

    // Coleta de dados da Segunda Carta
    printf("\n--- Segunda Carta ---\n"); 
    printf("Código da Segunda Carta: ");
    scanf("%s", codigo_carta_dois);
    printf("Nome da Segunda Carta: ");
    scanf(" %[^\n]", nome_carta_dois);
    printf("Estado da Segunda Carta (sigla): ");
    scanf(" %c", &estado_carta_dois);
    printf("População da Segunda Carta: ");
    scanf("%lu", &populacao_carta_dois);
    printf("Área da Segunda Carta (km²): ");
    scanf("%f", &area_carta_dois);
    printf("PIB da Segunda Carta (em milhões): ");
    scanf("%f", &pib_carta_dois);
    printf("Nº de Pontos Turísticos da Segunda Carta: ");
    scanf("%d", &npt_carta_dois);

    // Cálculo de Densidade Populacional e PIB per capita
    densidade_carta_um = populacao_carta_um / area_carta_um;
    pibcapita_carta_um = pib_carta_um * 1000000 / populacao_carta_um;

    densidade_carta_dois = populacao_carta_dois / area_carta_dois;
    pibcapita_carta_dois = pib_carta_dois * 1000000 / populacao_carta_dois;

    // Comparação pelo atributo escolhido: População
    printf("\n--- Comparação de Cartas (Atributo: População) ---\n");
    printf("Carta 1 - %s (%c): %lu habitantes\n", nome_carta_um, estado_carta_um, populacao_carta_um);
    printf("Carta 2 - %s (%c): %lu habitantes\n", nome_carta_dois, estado_carta_dois, populacao_carta_dois);

    if (populacao_carta_um > populacao_carta_dois) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_carta_um);
    } else if (populacao_carta_um < populacao_carta_dois) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_carta_dois);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}

