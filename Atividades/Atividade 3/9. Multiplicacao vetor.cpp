// Klaus Novaes
#include <stdio.h>

void multiplicarValores(int vetor[], int tamanho) {
    int resultado = 1;
    for (int i = 0; i < tamanho; i++) {
        resultado *= vetor[i];
    }
    printf("Resultado da multiplicacao: %d\n", resultado);
}

int main() {
    int tamanho, i;
    printf("Quantos valores vai ter o vetor? ");
    scanf("%d", &tamanho);
    int vetor[tamanho];
    for (i = 0; i < tamanho; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    multiplicarValores(vetor, tamanho);
    return 0;
}
