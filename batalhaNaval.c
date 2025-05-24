#include <stdio.h>

int main() {
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int tabuleiro[10][10];

    // Inicializa com água (0)
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posiciona 3 navios
    int lin, col;
    for (int n = 0; n < 3; n++) {
        printf("Posicione o navio %d (linha 0-9, coluna 0-9): ", n + 1);
        scanf("%d %d", &lin, &col);

        if (lin >= 0 && lin < 10 && col >= 0 && col < 10 && tabuleiro[lin][col] == 0) {
            tabuleiro[lin][col] = 1; // 1 representa um navio
        } else {
            printf("Posição inválida ou já ocupada. Tente novamente.\n");
            n--; // Repete a tentativa
        }
    }

    // Exibe o tabuleiro
    printf("\n   ");
    for (int j = 0; j < 10; j++) {
        printf(" %d", j);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf(" %c ", linha[i]);
        for (int j = 0; j < 10; j++) {
            if (tabuleiro[i][j] == 1)
                printf(" N"); // N de Navio
            else
                printf(" ~"); // água
        }
        printf("\n");
    }

    return 0;
}
