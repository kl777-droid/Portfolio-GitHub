// Klaus Novaes
#include <stdio.h>
#include <string.h>
#include <locale.h>

// Defini��o da estrutura Carro
typedef struct {
    char modelo[50];
    int ano;
    double preco;
} Carro;

// Fun��o que modifica o pre�o de um carro
void modificarPreco(Carro *c, double novoPreco) {
    c->preco = novoPreco;
}

// Fun��o que imprime os dados de um carro
void imprimirCarro(Carro *c) {
    printf("Modelo: %s\n", c->modelo);
    printf("Ano: %d\n", c->ano);
    printf("Pre�o: R$ %.2lf\n", c->preco);
}

int main() {
    // Configura o local para exibir o pre�o no formato adequado
    setlocale(LC_ALL, "portuguese");

    Carro carro1;

    // Definindo os dados do carro
    strcpy(carro1.modelo, "XYZ");
    carro1.ano = 2020;
    carro1.preco = 90000.00;

    // Exibe os dados antes da modifica��o
    printf("Dados antes da modifica��o:\n");
    imprimirCarro(&carro1);

    // Modifica o pre�o do carro
    modificarPreco(&carro1, 115000.00);

    // Exibe os dados ap�s a modifica��o
    printf("\nDados ap�s a modifica��o do pre�o:\n");
    imprimirCarro(&carro1);

    return 0;
}
