// Klaus Novaes
#include <stdio.h>

typedef struct {
    double peso;
    int idade;
    double altura;
} pessoa;

// Função que imprime os dados de uma pessoa
void imprimePessoa(pessoa p) {
    printf("Peso: %1f. Idade: %d. Altura: %1f.\n\n", p.peso, p.idade, p.altura);
}

int main() {
    pessoa pessoas[5], p1;

    // Definindo os valores da primeira pessoa no vetor
    pessoas[0].peso = 80.6;
    pessoas[0].idade = 40;
    pessoas[0].altura = 1.70;

    // Copiando a primeira pessoa do vetor para a variável p1
    p1 = pessoas[0];

    // Se a idade da pessoa p1 for maior que 20, incrementa a idade em 1
    if (p1.idade > 20)
        p1.idade++;

    // Definindo o segundo elemento do vetor como sendo p1
    pessoas[1] = pessoas[0];

    // Imprimindo os dados das pessoas
    imprimePessoa(p1);
    imprimePessoa(pessoas[0]);
    imprimePessoa(pessoas[1]);
    imprimePessoa(pessoas[2]);
    imprimePessoa(pessoas[3]);
    imprimePessoa(pessoas[4]);

    return 0;
}
