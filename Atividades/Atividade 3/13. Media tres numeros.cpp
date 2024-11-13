// Klaus Novaes
#include <stdio.h>

float calcularMedia(int num1, int num2, int num3) {
    return (num1 + num2 + num3) / 3.0;
}

int main() {
    int n1, n2, n3;
    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    float media = calcularMedia(n1, n2, n3);
    printf("A media é: %.2f\n", media);
    return 0;
}
