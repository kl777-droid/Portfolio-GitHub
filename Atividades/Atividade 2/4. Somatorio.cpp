// Klaus Novaes

#include <stdio.h>

float somatorio(int n) {
    float soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += 1.0 / i;  // Exemplo de somatório 1/i
    }
    return soma;
}

int main() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("O resultado do somatório é: %.2f\n", somatorio(n));
    return 0;
}