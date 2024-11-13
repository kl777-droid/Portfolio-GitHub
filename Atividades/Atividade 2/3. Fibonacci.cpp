// Klaus Novaes

#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Digite o valor de n para encontrar o n-ésimo termo de Fibonacci: ");
    scanf("%d", &n);
    
    printf("O %d-ésimo termo da série de Fibonacci é: %d\n", n, fibonacci(n));
    
    return 0;
}