// Klaus Novaes

#include <stdio.h>

int somaVetor(int vetor[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
}

int main() {
    int vetor[3];
    
    for (int i = 0; i < 3; i++) {
        printf("Digite o número %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    
    int resultado = somaVetor(vetor, 3);
    printf("A soma dos três números é: %d\n", resultado);
    
    return 0;
}