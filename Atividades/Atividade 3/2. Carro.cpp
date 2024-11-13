// Klaus Novaes
#include <stdio.h>
#include <string.h>
#include <locale.h>

// Definição da estrutura Carro
typedef struct {
    char modelo[50];
    int ano;
    double preco;
} Carro;

// Função que modifica o preço de um carro
void modificarPreco(Carro *c, double novoPreco) {
    c->preco = novoPreco;
}

// Função que imprime os dados de um carro
void imprimirCarro(Carro *c) {
    printf("Modelo: %s\n", c->modelo);
    printf("Ano: %d\n", c->ano);
    printf("Preço: R$ %.2lf\n", c->preco);
}

int main() {
    // Configura o local para exibir o preço no formato adequado
    setlocale(LC_ALL, "portuguese");

    Carro carro1;

    // Definindo os dados do carro
    strcpy(carro1.modelo, "XYZ");
    carro1.ano = 2020;
    carro1.preco = 90000.00;

    // Exibe os dados antes da modificação
    printf("Dados antes da modificação:\n");
    imprimirCarro(&carro1);

    // Modifica o preço do carro
    modificarPreco(&carro1, 115000.00);

    // Exibe os dados após a modificação
    printf("\nDados após a modificação do preço:\n");
    imprimirCarro(&carro1);

    return 0;
}
