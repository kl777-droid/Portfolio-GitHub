// Klaus Novaes
#include <stdio.h>

void calculaMedia(float nota1, float nota2, float nota3, float nota4) {
    float media = (nota1 + nota2 + nota3 + nota4) / 4;
    printf("Media: %.2f\n", media);
    if (media >= 7)
        printf("Aprovado\n");
    else
        printf("Reprovado\n");
}

int main() {
    float n1, n2, n3, n4;
    printf("Digite as 4 notas do aluno: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    calculaMedia(n1, n2, n3, n4);
    return 0;
}
