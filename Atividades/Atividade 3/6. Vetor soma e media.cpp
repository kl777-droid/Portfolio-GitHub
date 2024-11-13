// Klaus Novaes
#include <stdio.h>

void calcularSomaEMedia(int vetor[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    float media = (float)soma / tamanho;
    printf("Soma: %d\n", soma);
    printf("Media: %.2f\n", media);
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
    calcularSomaEMedia(vetor, tamanho);
    return 0;
}
