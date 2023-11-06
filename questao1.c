#include <stdio.h>

int main() {
    int conjunto[10];

    // Solicite ao usuário que insira os 10 valores
    printf("Por favor, insira 10 valores:\n");
    for (int i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &conjunto[i]);
    }

    int tamanho = 10;

    while (tamanho > 1) {
        for (int i = 0; i < tamanho - 1; i++) {
            conjunto[i] = conjunto[i] + conjunto[i + 1];
        }
        tamanho--;

        // Mostrar o conjunto atual
        for (int i = 0; i < tamanho; i++) {
            printf("%d ", conjunto[i]);
        }
        printf("\n"); // Nova linha após cada etapa
    }

    return 0;
}