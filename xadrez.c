#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Variáveis para representar o número de casas que cada peça pode se mover.
    int rainha = 0;
    int torre;
    int bispo = 1;
    int cavalo;

    // Implementação de Movimentação do Bispo
    // Estrutura de repetição para simular a movimentação do Bispo em cinco casas diagonais.
    printf ("Movimentação do Bispo\n");
    while (bispo <= 5) {
        printf ("Cima Direita\n");
        bispo++;
    }

    // Implementação de Movimentação da Torre
    // Estrutura de repetição para simular a movimentação da Torre em cinco casas para a direita.
    printf ("Movimentação da Torre\n");
    for (torre = 0; torre < 5; torre++){
        printf ("Direita\n");
    }

    // Implementação de Movimentação da Rainha
    // Estrutura de repetição para simular a movimentação da rainha oito casas para a esquerda.
    printf("Movimentação da Rainha\n");
    do{
        printf ("Esquerda\n");
        rainha++;
    } while (rainha<8);
    // Nível Aventureiro - Movimentação do Cavalo
    // Loops aninhados para simular a movimentação do Cavalo em L.
    printf ("Movimentação do Cavalo\n");
    for (cavalo = 0; cavalo <= 1; cavalo++){
        printf ("Baixo\n");
        while (cavalo == 1){
            printf("Esquerda\n");
            cavalo++;
        }
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
