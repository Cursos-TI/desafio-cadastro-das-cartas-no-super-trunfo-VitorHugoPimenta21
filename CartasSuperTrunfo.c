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
    printf("Código: ");
    scanf("%s", codigo_carta_um);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_carta_um);
    printf("Estado (sigla): ");
    scanf(" %c", &estado_carta_um);
    printf("População: ");
    scanf("%lu", &populacao_carta_um);
    printf("Área (km²): ");
    scanf("%f", &area_carta_um);
    printf("PIB (em milhões): ");
    scanf("%f", &pib_carta_um);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &npt_carta_um);

    // Coleta de dados da Segunda Carta
    printf("\n--- Segunda Carta ---\n"); 
    printf("Código: ");
    scanf("%s", codigo_carta_dois);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_carta_dois);
    printf("Estado (sigla): ");
    scanf(" %c", &estado_carta_dois);
    printf("População: ");
    scanf("%lu", &populacao_carta_dois);
    printf("Área (km²): ");
    scanf("%f", &area_carta_dois);
    printf("PIB (em milhões): ");
    scanf("%f", &pib_carta_dois);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &npt_carta_dois);

    // Cálculo de Densidade Populacional e PIB per capita
    densidade_carta_um = populacao_carta_um / area_carta_um;
    pibcapita_carta_um = pib_carta_um * 1000000 / populacao_carta_um;

    densidade_carta_dois = populacao_carta_dois / area_carta_dois;
    pibcapita_carta_dois = pib_carta_dois * 1000000 / populacao_carta_dois;

    // Exibição dos dados das cartas
    printf("\n========== DADOS DAS CARTAS ==========\n");

    printf("\n[CARTA 1 - %s (%c)]\n", nome_carta_um, estado_carta_um);
    printf("Código: %s\n", codigo_carta_um);
    printf("População: %lu\n", populacao_carta_um);
    printf("Área: %.2f km²\n", area_carta_um);
    printf("PIB: R$ %.2f milhões\n", pib_carta_um);
    printf("Pontos Turísticos: %d\n", npt_carta_um);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_carta_um);
    printf("PIB per Capita: R$ %.2f\n", pibcapita_carta_um);

    printf("\n[CARTA 2 - %s (%c)]\n", nome_carta_dois, estado_carta_dois);
    printf("Código: %s\n", codigo_carta_dois);
    printf("População: %lu\n", populacao_carta_dois);
    printf("Área: %.2f km²\n", area_carta_dois);
    printf("PIB: R$ %.2f milhões\n", pib_carta_dois);
    printf("Pontos Turísticos: %d\n", npt_carta_dois);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_carta_dois);
    printf("PIB per Capita: R$ %.2f\n", pibcapita_carta_dois);

    // Comparação com base em um único atributo (POPULAÇÃO)
    printf("\n========== COMPARAÇÃO FINAL ==========\n");
    printf("Atributo Comparado: População\n");

    printf("Carta 1 - %s (%c): %lu habitantes\n", nome_carta_um, estado_carta_um, populacao_carta_um);
    printf("Carta 2 - %s (%c): %lu habitantes\n", nome_carta_dois, estado_carta_dois, populacao_carta_dois);

    if (populacao_carta_um > populacao_carta_dois) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nome_carta_um);
    } else if (populacao_carta_um < populacao_carta_dois) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nome_carta_dois);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
