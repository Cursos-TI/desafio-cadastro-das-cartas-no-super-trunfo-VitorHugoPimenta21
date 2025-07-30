#include <stdio.h>

int main() {
    // Carta 1
    char codigo_carta_um[4];
    char nome_carta_um[50];
    char estado_carta_um;
    unsigned long int populacao_carta_um;
    float area_carta_um;
    float pib_carta_um;
    int npt_carta_um;
    float densidade_carta_um;
    float pibcapita_carta_um;
    float superpoder_carta_um;

    // Carta 2
    char codigo_carta_dois[4];
    char nome_carta_dois[50];
    char estado_carta_dois;
    unsigned long int populacao_carta_dois;
    float area_carta_dois;
    float pib_carta_dois;
    int npt_carta_dois;
    float densidade_carta_dois;
    float pibcapita_carta_dois;
    float superpoder_carta_dois;

    // Coleta de dados
    printf("Super Trunfo de Cidades\nInsira os Dados das Duas Cidades\n");

    printf("---Primeira Carta---\n"); 
    printf("Código da Primeira Carta: ");
    scanf("%s", codigo_carta_um);
    printf("Nome da Primeira Carta: ");
    scanf(" %[^\n]", nome_carta_um);
    printf("Estado da Primeira Carta: ");
    scanf(" %c", &estado_carta_um);
    printf("População da Primeira Carta: ");
    scanf("%lu", &populacao_carta_um);
    printf("Área da Primeira Carta: ");
    scanf("%f", &area_carta_um);
    printf("PIB da Primeira Carta: ");
    scanf("%f", &pib_carta_um);
    printf("Nº de Pontos Turísticos da Primeira Carta: ");
    scanf("%d", &npt_carta_um);

    printf("---Segunda Carta---\n"); 
    printf("Código da Segunda Carta: ");
    scanf("%s", codigo_carta_dois);
    printf("Nome da Segunda Carta: ");
    scanf(" %[^\n]", nome_carta_dois);
    printf("Estado da Segunda Carta: ");
    scanf(" %c", &estado_carta_dois);
    printf("População da Segunda Carta: ");
    scanf("%lu", &populacao_carta_dois);
    printf("Área da Segunda Carta: ");
    scanf("%f", &area_carta_dois);
    printf("PIB da Segunda Carta: ");
    scanf("%f", &pib_carta_dois);
    printf("Nº de Pontos Turísticos da Segunda Carta: ");
    scanf("%d", &npt_carta_dois);

    // Cálculos
    pibcapita_carta_um = pib_carta_um * 1000000 / populacao_carta_um;
    densidade_carta_um = populacao_carta_um / area_carta_um;
    superpoder_carta_um = populacao_carta_um + area_carta_um + pib_carta_um + npt_carta_um + pibcapita_carta_um + (1.0 / densidade_carta_um);

    pibcapita_carta_dois = pib_carta_dois * 1000000 / populacao_carta_dois;
    densidade_carta_dois = populacao_carta_dois / area_carta_dois;
    superpoder_carta_dois = populacao_carta_dois + area_carta_dois + pib_carta_dois + npt_carta_dois + pibcapita_carta_dois + (1.0 / densidade_carta_dois);

    // Comparações (1 = Carta 1 vence, 0 = Carta 2 vence)
    int resultado_populacao = (populacao_carta_um > populacao_carta_dois);
    int resultado_area = (area_carta_um > area_carta_dois);
    int resultado_pib = (pib_carta_um > pib_carta_dois);
    int resultado_npt = (npt_carta_um > npt_carta_dois);
    int resultado_densidade = (densidade_carta_um < densidade_carta_dois);
    int resultado_pibcapita = (pibcapita_carta_um > pibcapita_carta_dois);
    int resultado_superpoder = (superpoder_carta_um > superpoder_carta_dois);

    // Exibir os dados e resultados
    printf("\n---Comparação---\n");
    printf("População: %d\n", resultado_populacao);
    printf("Área: %d\n", resultado_area);
    printf("PIB: %d\n", resultado_pib);
    printf("Pontos Turísticos: %d\n", resultado_npt);
    printf("Densidade Populacional (menor vence): %d\n", resultado_densidade);
    printf("PIB per Capita: %d\n", resultado_pibcapita);
    printf("Super Poder: %d\n", resultado_superpoder);

    // Exibir valores dos Super Poderes
    printf("\nSuper Poder da Carta 1: %.2f\n", superpoder_carta_um);
    printf("Super Poder da Carta 2: %.2f\n", superpoder_carta_dois);

    return 0;
}

