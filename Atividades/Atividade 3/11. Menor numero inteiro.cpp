// Klaus Novaes
#include <stdio.h>

int menorNumero(int num1, int num2, int num3) {
    int menor = num1;
    if (num2 < menor) {
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }
    return menor;
}

int main() {
    int n1, n2, n3;
    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    int menor = menorNumero(n1, n2, n3);
    printf("O menor numero é: %d\n", menor);
    return 0;
}
