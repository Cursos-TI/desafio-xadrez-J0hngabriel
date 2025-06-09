#include <stdio.h>

// Movimento recursivo da Torre (Direita)
void torre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    torre(passos - 1);
}

// Movimento recursivo da Rainha (Esquerda)
void rainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    rainha(passos - 1);
}

// Movimento recursivo do Bispo (Cima Direita), com loops aninhados dentro
void bispo(int passos) {
    if (passos == 0) return;
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }
    bispo(passos - 1);
}

// Movimento do Cavalo (Cima, Cima, Direita), usando loops aninhados e controle de fluxo
void cavalo() {
    printf("\nMovimento do Cavalo:\n");
    int cima = 0;
    for (int i = 0; i < 3; i++) {
        if (cima == 2) {
            break;
        }
        printf("Cima\n");
        cima++;
        for (int j = 0; j < 1; j++) {
            if (cima == 2) {
                printf("Direita\n");
                break;
            } else {
                continue;
            }
        }
    }
}

int main() {
    printf("Movimento da Torre:\n");
    torre(5);

    printf("\nMovimento do Bispo:\n");
    bispo(5);

    printf("\nMovimento da Rainha:\n");
    rainha(8);

    cavalo();

    return 0;
}