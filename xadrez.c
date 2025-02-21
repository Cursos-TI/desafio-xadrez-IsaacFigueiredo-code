#include <stdio.h>

// Desafio de Xadrez - MateCheck

//Função da movimentação do bispo, utilizando recursividade e loops aninhados
void bispo_mov (int casas){
    while (casas > 0){
        printf ("Cima ");
        while (casas > 0){
            printf ("Direita\n");
            bispo_mov (casas - 1);
            break;
        }
        break;
    }
}

//Função da movimentação da torre, utilizando recursividade
void torre_mov (int casas){
    if (casas > 0){
        printf ("Direita\n");
        torre_mov (casas-1);
    }
}

//Função da movimentação da rainha, utilizando recursividade
void rainha_mov (int casas){
    if (casas > 0){
        printf ("Esquerda\n");
        rainha_mov (casas-1);
    }
}

int main() {
    // Variáveis para representar o número de casas que cada peça pode se mover.
    int rainha = 8;
    int torre = 5;
    int bispo = 5;
    int cavaloi;
    int cavalo_;

    // Implementação de Movimentação do Bispo
    // Chamada da função do bispo
    printf ("Movimentação do Bispo\n");
    bispo_mov (bispo);

    // Implementação de Movimentação da Torre
    // Chamada da função da torre
    printf ("Movimentação da Torre\n");
    torre_mov (torre);

    // Implementação de Movimentação da Rainha
    // Chamada da função da rainha
    printf("Movimentação da Rainha\n");
    rainha_mov (rainha);

    // Loops aninhados para simular a movimentação do Cavalo em L com condições e variáveis múltiplas.
    printf ("Movimentação do Cavalo\n");
    for (cavaloi = 0, cavalo_= 0; cavaloi <= 1 && cavalo_ <= 1; cavaloi++, cavalo_++){
        printf ("Cima\n");
        while (cavalo_ == 1){
            printf("Direita\n");
            cavalo_++;
        }
    }
    return 0;
}
