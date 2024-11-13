// Klaus Novaes
#include <stdio.h>

typedef struct {
    double peso;
    int idade;
    double altura;
} pessoa;

// Função que imprime os dados de uma pessoa
void imprimePessoa(pessoa p) {
    printf("Peso: %.1lf. Idade: %d. Altura: %.2lf.\n\n", p.peso, p.idade, p.altura);
}

// Função para ler os dados de uma pessoa
pessoa lerPessoa() {
    pessoa p;
    printf("Digite o peso: ");
    scanf("%lf", &p.peso);
    printf("Digite a idade: ");
    scanf("%d", &p.idade);
    printf("Digite a altura: ");
    scanf("%lf", &p.altura);
    return p;
}

int main() {
    pessoa pessoas[5];

    // Ler os dados de 5 pessoas
    for (int i = 0; i < 5; i++) {
        printf("\nPessoa %d:\n", i + 1);
        pessoas[i] = lerPessoa();
    }

    // Imprimir os dados das 5 pessoas
    for (int i = 0; i < 5; i++) {
        printf("\nDados da Pessoa %d:\n", i + 1);
        imprimePessoa(pessoas[i]);
    }

    return 0;
}
