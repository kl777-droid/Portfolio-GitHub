// Klaus Novaes
#include <stdio.h>

void maiorNumero(int num1, int num2) {
    if (num1 > num2) {
        printf("O maior numero é: %d\n", num1);
    } else if (num2 > num1) {
        printf("O maior numero é: %d\n", num2);
    } else {
        printf("Os numeros sao iguais.\n");
    }
}

int main() {
    int n1, n2;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &n1, &n2);
    maiorNumero(n1, n2);
    return 0;
}
