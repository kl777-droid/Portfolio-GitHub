// Klaus Novaes
#include <stdio.h>

void exibirImpares(int numero) {
    for (int i = 1; i <= numero; i++) {
        if (i % 2 != 0 && i % 7 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    exibirImpares(num);
    return 0;
}
