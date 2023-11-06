#include <stdio.h>
#include <string.h>

struct Jogador {
    char nome[31];
    char posicao;
    int forca;
};

int main() {
    // Definir estruturas para armazenar os jogadores de cada time
    struct Jogador time1[11];
    struct Jogador time2[11];

    // Ler os dados dos jogadores do primeiro time
    printf("Informe o nome do primeiro time: ");
    char nomeTime1[31];
    scanf("%30s", nomeTime1);

    for (int i = 0; i < 11; i++) {
        printf("Informe o nome, posição e força do jogador %d do time 1 (Ex: Nome;P;Forca): ", i + 1);
        scanf("%30s;%c;%d", time1[i].nome, &time1[i].posicao, &time1[i].forca);
    }

    // Ler os dados dos jogadores do segundo time
    printf("\nInforme o nome do segundo time: ");
    char nomeTime2[31];
    scanf("%30s", nomeTime2);

    for (int i = 0; i < 11; i++) {
        printf("Informe o nome, posição e força do jogador %d do time 2 (Ex: Nome;P;Forca): ", i + 1);
        scanf("%30s;%c;%d", time2[i].nome, &time2[i].posicao, &time2[i].forca);
    }

    // Calcular a força ponderada de cada time
    int forcaTime1 = 0;
    int forcaTime2 = 0;

    for (int i = 0; i < 11; i++) {
        if (time1[i].posicao == 'G') {
            forcaTime1 += 8 * time1[i].forca;
        } else {
            forcaTime2 += 8 * time2[i].forca;
        }

        if (time1[i].posicao == 'L' || time1[i].posicao == 'Z') {
            forcaTime1 += 10 * time1[i].forca;
        } else {
            forcaTime2 += 10 * time2[i].forca;
        }

        if (time1[i].posicao == 'V' || time1[i].posicao == 'M') {
            forcaTime1 += 5 * time1[i].forca;
        } else {
            forcaTime2 += 5 * time2[i].forca;
        }

        if (time1[i].posicao == 'A') {
            forcaTime1 += 12 * time1[i].forca;
        } else {
            forcaTime2 += 12 * time2[i].forca;
        }
    }

    // Comparar as forças dos times e determinar o mais forte
    if (forcaTime1 > forcaTime2) {
        printf("\nO time %s é o mais forte.\n", nomeTime1);
    } else if (forcaTime2 > forcaTime1) {
        printf("\nO time %s é o mais forte.\n", nomeTime2);
    } else {
        printf("\nOs times têm a mesma força.\n");
    }

    return 0;
}
