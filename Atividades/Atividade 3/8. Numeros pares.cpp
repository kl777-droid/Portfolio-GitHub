// Klaus Novaes
#include <stdio.h>

void exibirPares(int numero) {
    for (int i = 2; i <= numero; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    exibirPares(num);
    return 0;
}
