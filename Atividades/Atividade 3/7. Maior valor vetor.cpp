// Klaus Novaes
#include <stdio.h>

void encontrarMaior(int vetor[], int tamanho) {
    int maior = vetor[0], posicao = 0;
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao = i;
        }
    }
    printf("Maior valor: %d na posicao %d\n", maior, posicao);
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
    encontrarMaior(vetor, tamanho);
    return 0;
}
