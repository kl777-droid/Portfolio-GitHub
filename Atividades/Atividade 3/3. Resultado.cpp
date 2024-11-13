// Klaus Novaes
#include <stdio.h>

// Fun��o para calcular a soma dos elementos de um vetor
int calcularResultado(int v[], int n);

int main() {
    // Declara��o de vari�veis:
    int vetor[5], i, resultado;

    // Inicializa o vetor com os valores 0, 2, 4, 6, 8
    for (i = 0; i < 5; i++) {
        vetor[i] = i * 2;  // Cada elemento � o �ndice multiplicado por 2
    }

    // Chama a fun��o para calcular a soma e armazena o resultado
    resultado = calcularResultado(vetor, 5);

    // Imprime o resultado na tela
    printf("O resultado �: %d\n", resultado);

    return 0;
}

int calcularResultado(int v[], int n) {

    // Declara��o de vari�veis:
    int i, soma = 0;

    // Percorre o vetor, somando cada elemento � vari�vel 'soma'
    for (i = 0; i < n; i++) {
        soma += v[i];
    }

    // Retorna a soma calculada
    return soma;
}
