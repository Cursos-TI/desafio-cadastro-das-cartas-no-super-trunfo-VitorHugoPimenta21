#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


#include <stdio.h>

int main() {
    // Carta 1
    char codigo_carta_um[4];
    char nome_carta_um[50];
    char estado_carta_um;
    int populacao_carta_um;
    float area_carta_um;
    float pib_carta_um;
    int npt_carta_um;

    // Carta 2
    char codigo_carta_dois[4];
    char nome_carta_dois[50];
    char estado_carta_dois;
    int populacao_carta_dois;
    float area_carta_dois;
    float pib_carta_dois;
    int npt_carta_dois;

    // Coleta de dados
    printf("Super Trunfo de Cidades\n");
    printf("Insira os Dados das Duas Cidades\n");

    printf("---Primeira Carta---\n"); 
    printf("Código da Primeira Carta: ");
    scanf("%s", codigo_carta_um);

    printf("Nome da Primeira Carta: ");
    scanf(" %[^\n]", nome_carta_um);  // permite nomes com espaços

    printf("Estado da Primeira Carta: ");
    scanf(" %c", &estado_carta_um);

    printf("População da Primeira Carta: ");
    scanf("%d", &populacao_carta_um);

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
    scanf(" %[^\n]", nome_carta_dois);  // permite nomes com espaços

    printf("Estado da Segunda Carta: ");
    scanf(" %c", &estado_carta_dois);

    printf("População da Segunda Carta: ");
    scanf("%d", &populacao_carta_dois);

    printf("Área da Segunda Carta: ");
    scanf("%f", &area_carta_dois);
    
    printf("PIB da Segunda Carta: ");
    scanf("%f", &pib_carta_dois);

    printf("Nº de Pontos Turísticos da Segunda Carta: ");
    scanf("%d", &npt_carta_dois);

    
    // Exibir os dados da Primeira Carta
    printf("\n---Dados da Primeira Carta---\n");
    printf("Código: %s\n", codigo_carta_um);
    printf("Nome: %s\n", nome_carta_um);
    printf("Estado: %c\n", estado_carta_um);
    printf("População: %d\n", populacao_carta_um);
    printf("Área: %.2f km²\n", area_carta_um);
    printf("PIB: %.2f milhões\n", pib_carta_um);
    printf("Pontos Turísticos: %d\n", npt_carta_um);

    // Exibir os dados da Segunda Carta
    printf("\n---Dados da Segunda Carta---\n");
    printf("Código: %s\n", codigo_carta_dois);
    printf("Nome: %s\n", nome_carta_dois);
    printf("Estado: %c\n", estado_carta_dois);
    printf("População: %d\n", populacao_carta_dois);
    printf("Área: %.2f km²\n", area_carta_dois);
    printf("PIB: %.2f milhões\n", pib_carta_dois);
    printf("Pontos Turísticos: %d\n", npt_carta_dois);

    return 0;
}
