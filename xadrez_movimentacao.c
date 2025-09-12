#include <stdio.h>
#include <stdlib.h>

int main() {
    // Definição do número de casas que cada peça irá se mover.
    // Estes valores são definidos diretamente no código, como solicitado.
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    // --- Simulação do Movimento da Torre ---
    // A Torre move-se em linha reta. Vamos simular 5 casas para a direita.
    // Utilizaremos a estrutura de repetição 'for', ideal para quando sabemos
    // o número exato de iterações.
    printf("--- Movimento da Torre (usando for) ---\n");
    for (int i = 1; i <= casasTorre; i++) {
        // Imprime a direção do movimento a cada casa percorrida.
        printf("Casa %d: Direita\n", i);
    }
    printf("\n");

    // --- Simulação do Movimento do Bispo ---
    // O Bispo move-se na diagonal. Vamos simular 5 casas para cima e à direita.
    // Utilizaremos a estrutura 'while'. Uma variável de controle (contador)
    // será inicializada antes do loop e incrementada a cada iteração.
    printf("--- Movimento do Bispo (usando while) ---\n");
    int contadorBispo = 1; // Variável de controle para o loop
    while (contadorBispo <= casasBispo) {
        // Para representar a diagonal, imprimimos a combinação das duas direções.
        printf("Casa %d: Cima, Direita\n", contadorBispo);
        contadorBispo++;
    }
    printf("\n");

    // --- Simulação do Movimento da Rainha ---
    // A Rainha pode se mover em todas as direções. Vamos simular 8 casas para a esquerda.
    // Utilizaremos a estrutura 'do-while'. Esta estrutura garante que o bloco de código
    // seja executado pelo menos uma vez antes de a condição ser verificada.
    printf("--- Movimento da Rainha (usando do-while) ---\n");
    int contadorRainha = 1; // Variável de controle para o loop
    do {
        // Imprime a direção do movimento a cada casa percorrida.
        printf("Casa %d: Esquerda\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= casasRainha);
    printf("\n");

    return 0;

}