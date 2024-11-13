// Klaus Novaes

#include <stdio.h>

float mediaTurma(int alunos) {
    int i;
    float nota, soma = 0;
    for (i = 0; i < alunos; i++) {
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &nota);
        soma += nota;
    }
    return soma / alunos;
}
float mediaEscola(int turmas) {
    int i, alunos;
    float mediaTurmaValor, somaMedias = 0;
    for (i = 0; i < turmas; i++) {
        printf("Digite o número de alunos da turma %d: ", i+1);
        scanf("%d", &alunos);
        mediaTurmaValor = mediaTurma(alunos);
        printf("Média da turma %d: %.2f\n", i+1, mediaTurmaValor);
        somaMedias += mediaTurmaValor;
    }
    return somaMedias / turmas;
}
int main() {
    int turmas;
    printf("Digite o número de turmas: ");
    scanf("%d", &turmas);
    float mediaGeral = mediaEscola(turmas);
    printf("Média geral da escola: %.2f\n", mediaGeral);
    
    return 0;
}