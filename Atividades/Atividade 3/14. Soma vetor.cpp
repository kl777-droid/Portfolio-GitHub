// Klaus Novaes
#include <stdio.h>

int calcularResultado(int soma, int primeiroValor, int ultimoValor) {
    return soma + (primeiroValor * 5) + (ultimoValor * 2);
}

int main() {
    int vetor[10], soma = 0;
    for (int i = 0; i < 10; i++) {
        vetor[i] = i + 1;
        soma += vetor[i];
    }
    int resultado = calcularResultado(soma, vetor[0], vetor[9]);
    printf("O resultado final é: %d\n", resultado);
    return 0;
}
