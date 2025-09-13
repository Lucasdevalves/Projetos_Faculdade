#include <stdio.h>
#include <stdlib.h>

// --- Constantes para facilitar a manutenção do código ---

const int AGUA = 0;
const int NAVIO = 3;
const int TAMANHO_TABULEIRO = 10;
const int TAMANHO_NAVIO = 3;


int main() {
    // Declara a matriz 10x10 para representar o tabuleiro
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    // --- 1. Inicialização do Tabuleiro ---
    // Todas as posições começam com 'AGUA' (valor 0).
    // Usamos loops aninhados para percorrer cada célula da matriz.
    printf("\n\nInicializando o tabuleiro 10x10 com agua (0)...\n\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {       
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {   
            tabuleiro[i][j] = AGUA;
        }
    }

    // --- 2. Posicionamento dos Navios ---
    // As coordenadas são definidas diretamente no código, como solicitado.

    // Navio 1: Horizontal
    int linha_h = 2;
    int coluna_h = 4;

    // Navio 2: Vertical
    int linha_v = 5;
    int coluna_v = 1;

    // --- Validação e Posicionamento do Navio Horizontal ---
    // Verifica se o navio cabe nos limites do tabuleiro
    if (coluna_h + TAMANHO_NAVIO <= TAMANHO_TABULEIRO) {
        // Se couber, posiciona o navio na matriz
        printf("Posicionando navio horizontal na linha %d, coluna %d.\n", linha_h, coluna_h);
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
        
            tabuleiro[linha_h][coluna_h + i] = NAVIO;
        }
    } else {
        printf("ERRO: O navio horizontal esta fora dos limites do tabuleiro!\n");
    }

    // --- Validação e Posicionamento do Navio Vertical ---
    // Primeiro, verifica se o navio cabe nos limites do tabuleiro
    if (linha_v + TAMANHO_NAVIO <= TAMANHO_TABULEIRO) {
        int sobreposicao = 0;

        // Antes de posicionar, verifica se as posições já estão ocupadas
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            if (tabuleiro[linha_v + i][coluna_v] == NAVIO) {
                sobreposicao = 1;
                break;
            }
        }

        // Se não houver sobreposição, posiciona o navio
        if (sobreposicao == 0) {
            printf("Posicionando navio vertical na linha %d, coluna %d.\n\n", linha_v, coluna_v);
            for (int i = 0; i < TAMANHO_NAVIO; i++) {

                tabuleiro[linha_v + i][coluna_v] = NAVIO;
            }
        } else {
            
            printf("ERRO: O navio vertical sobrepoe um navio ja posicionado!\n\n");
        }
    } else {
        
        printf("ERRO: O navio vertical esta fora dos limites do tabuleiro!\n\n");
    }


    // --- 3. Exibição do Tabuleiro ---
 
    printf("--- Tabuleiro Batalha Naval ---\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) { 
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) { 
            // Imprime o valor da célula (0 para água, 3 para navio)
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}