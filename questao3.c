#include <stdio.h>

int main() {
    int matrizA[4][4];
    int matrizB[4][4];
    int matrizResultado[4][4];
    char operacao[5];  // Para armazenar "soma", "sub" ou "mult"

    // Ler os valores da primeira matriz (A)
    printf("Informe os valores da primeira matriz (A):\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }

    // Ler os valores da segunda matriz (B)
    printf("Informe os valores da segunda matriz (B):\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matrizB[i][j]);
        }
    }

    // Ler a operação a ser realizada
    printf("Informe a operacao (soma, sub, mult): ");
    scanf("%4s", operacao);

    // Realizar a operação e preencher a matriz resultado
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (operacao[0] == 's') {  // Soma
                matrizResultado[i][j] = matrizA[i][j] + matrizB[i][j];
            } else if (operacao[0] == 's' && operacao[1] == 'u') {  // Subtração
                matrizResultado[i][j] = matrizA[i][j] - matrizB[i][j];
            } else if (operacao[0] == 'm') {  // Multiplicação
                matrizResultado[i][j] = matrizA[i][j] * matrizB[i][j];
            }
        }
    }

    // Imprimir a matriz resultado formatada
    printf("Matriz Resultado:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%4d ", matrizResultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
