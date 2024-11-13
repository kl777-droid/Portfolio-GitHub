// Klaus Novaes
#include <stdio.h>

// Função para calcular a soma dos elementos de um vetor
int calcularResultado(int v[], int n);

int main() {
    // Declaração de variáveis:
    int vetor[5], i, resultado;

    // Inicializa o vetor com os valores 0, 2, 4, 6, 8
    for (i = 0; i < 5; i++) {
        vetor[i] = i * 2;  // Cada elemento é o índice multiplicado por 2
    }

    // Chama a função para calcular a soma e armazena o resultado
    resultado = calcularResultado(vetor, 5);

    // Imprime o resultado na tela
    printf("O resultado é: %d\n", resultado);

    return 0;
}

int calcularResultado(int v[], int n) {

    // Declaração de variáveis:
    int i, soma = 0;

    // Percorre o vetor, somando cada elemento à variável 'soma'
    for (i = 0; i < n; i++) {
        soma += v[i];
    }

    // Retorna a soma calculada
    return soma;
}
