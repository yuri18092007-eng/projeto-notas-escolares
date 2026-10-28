
#include <stdio.h>

int main() {
    // Array com as notas de 10 alunos
    float notas[10] = {7.5, 9.0, 6.5, 8.0, 5.5,
                       10.0, 7.0, 8.5, 6.0, 9.5};

    float temp;
    int i, j;

    // Exibe as notas antes da ordenacao
    printf("====================================\n");
    printf("     SISTEMA DE NOTAS ESCOLARES\n");
    printf("====================================\n");

    printf("\nNotas antes da ordenacao:\n");

    for (i = 0; i < 10; i++) {
        printf("%.1f ", notas[i]);
    }

    // Bubble Sort em ordem decrescente
    // Compara elementos vizinhos e troca
    // quando o elemento da esquerda e menor
    for (i = 0; i < 10 - 1; i++) {
        for (j = 0; j < 10 - 1 - i; j++) {

            if (notas[j] < notas[j + 1]) {
                // Realiza a troca entre os elementos
                temp = notas[j];
                notas[j] = notas[j + 1];
                notas[j + 1] = temp;
            }
        }
    }

    // Exibe as notas depois da ordenacao
    printf("\n\nNotas em ordem decrescente:\n");

    for (i = 0; i < 10; i++) {
        printf("%.1f ", notas[i]);
    }

    printf("\n\nCriterio utilizado: maior para menor.\n");
    printf("Ordenacao concluida com sucesso!\n");

    return 0;
}
