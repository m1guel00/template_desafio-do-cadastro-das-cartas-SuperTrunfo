#include <stdio.h> 
// Biblioteca padrão de entrada e saída em C
// Necessária para usar funções como printf() e sprintf()

// --- Desafio Super Trunfo - Países ---
// Tema 1: Cadastro das Cartas
// Objetivo: Criar cartas representando as cidades, utilizando struct
// para armazenar os dados, printf() para exibir e (em versões futuras) scanf()
// para permitir que o usuário insira as informações.

// --- Definição da estrutura "Carta" ---
// A estrutura "Carta" serve como um "molde" para armazenar 
// as informações de uma cidade dentro do jogo Super Trunfo.
struct Carta {
    int pontosturisticos;    // Quantidade de pontos turísticos da cidade
    int populacao;           // Número total de habitantes
    float pib;               // PIB da cidade (em bilhões de reais)
    float area;              // Área total da cidade em km²
    char Estado;             // Letra que identifica o estado (A, B, C, ... H)
    char codigo[4];          // Código da carta (exemplo: "A01", "B02")
    char nomeCidade[50];     // Nome completo da cidade
};

// --- Função principal ---
// A função main() é o ponto de entrada do programa. 
// É nela que o fluxo de execução começa.
int main() {

    // Declara uma variável do tipo "Carta", chamada "carta1"
    // Essa variável armazenará todas as informações da primeira cidade.
    struct Carta carta1;

    // --- Preenchendo automaticamente a Carta 1 ---
    // Aqui estão sendo atribuídos valores fixos (sem pedir ao usuário).
    // Em versões futuras, essa parte pode ser substituída por scanf().
    carta1.Estado = 'A';                          // Estado identificado pela letra A
    sprintf(carta1.codigo, "A01");                // Define o código da carta (A01)
    sprintf(carta1.nomeCidade, "Fortaleza");      // Copia o nome da cidade para a variável
    carta1.populacao = 12325000;                  // População total de Fortaleza
    carta1.area = 1521.11;                        // Área em km²
    carta1.pib = 699.28;                          // PIB em bilhões de reais
    carta1.pontosturisticos = 50;                 // Número de pontos turísticos

    // --- Exibindo os dados da Carta 1 na tela ---
    // Os dados da estrutura são mostrados de forma organizada no terminal.
    printf("Carta 1:\n");
    printf("Estado: %c\n", carta1.Estado);                       // Exibe o estado
    printf("Código: %s\n", carta1.codigo);                       // Exibe o código
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);           // Exibe o nome da cidade
    printf("População: %d\n", carta1.populacao);                 // Exibe a população
    printf("Área: %.2f km²\n", carta1.area);                     // Exibe a área (2 casas decimais)
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);          // Exibe o PIB
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosturisticos); // Exibe os pontos turísticos

    // Declara outra variável do tipo "Carta", chamada "carta2"
    // Essa variável armazenará os dados da segunda cidade.
    struct Carta carta2;

    // --- Preenchendo automaticamente a Carta 2 ---
    carta2.Estado = 'B';                         // Estado identificado pela letra B
    sprintf(carta2.codigo, "B01");               // Código da carta (B01)
    sprintf(carta2.nomeCidade, "Salvador");      // Nome da cidade
    carta2.populacao = 2872347;                  // População total de Salvador
    carta2.area = 693.78;                        // Área em km²
    carta2.pib = 130.45;                         // PIB em bilhões de reais
    carta2.pontosturisticos = 40;                // Quantidade de pontos turísticos

    // --- Exibindo os dados da Carta 2 na tela ---
    // Assim como na carta 1, todos os dados da segunda cidade são mostrados.
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.Estado);                      // Exibe o estado
    printf("Código: %s\n", carta2.codigo);                      // Exibe o código
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);          // Exibe o nome da cidade
    printf("População: %d\n", carta2.populacao);                // Exibe a população
    printf("Área: %.2f km²\n", carta2.area);                    // Exibe a área
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);         // Exibe o PIB
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosturisticos); // Exibe os pontos turísticos

    // --- Finalização ---
    // O programa retorna 0, indicando que terminou com sucesso.
    return 0;
}
