// Klaus Novaes
#include <stdio.h>

void exibirInverso(int vetor[], int tamanho) {
    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int vetor[10];
    for (int i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    exibirInverso(vetor, 10);
    return 0;
}
