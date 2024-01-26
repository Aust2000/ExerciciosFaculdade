#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int codigo;
    double valorPorCredito;
    char *nome;
} Curso;

typedef struct {
    char *nome;
    int codigoCurso;
    int numCreditos;
} Estudante;

char* alocarString(int tamanho) {
    char *ponteiro = NULL;
    do {
        ponteiro = (char*) malloc((tamanho * sizeof(char)) + 1);
    } while (ponteiro == NULL);
    return ponteiro;
}

char* alocarStringTemporaria(char *stringTemporaria) {
    int tamanho = strlen(stringTemporaria);
    char *ponteiro;
    ponteiro = alocarString(tamanho);
    strcpy(ponteiro, stringTemporaria);
    return ponteiro;
}

int pegarIndexCurso(int codigoCurso, Curso *dadosCursos, int quantidadeCursos) {
    int i;
    for (i = 0; i < quantidadeCursos; i++) {
        if (dadosCursos[i].codigo == codigoCurso) {
            return i;
        }
    }

    return -1;
}

void printarBoleto(Estudante estudante, Curso *dadosCursos, int quantidadeCursos) {
    int indexCurso = pegarIndexCurso(estudante.codigoCurso, dadosCursos, quantidadeCursos);
    double valorMensalidade = estudante.numCreditos * dadosCursos[indexCurso].valorPorCredito;
    printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2lf Mensalidade: %.2lf\n", estudante.nome, dadosCursos[indexCurso].nome, estudante.numCreditos, dadosCursos[indexCurso].valorPorCredito, valorMensalidade);
}

int main() {
    int quantidadeCursos;
    scanf("%d", &quantidadeCursos);

    Curso dadosCursos[quantidadeCursos];
    int i;
    char stringTemporaria[1000];

    for (i = 0; i < quantidadeCursos; i++) {
        scanf("%d %lf%*c", &dadosCursos[i].codigo, &dadosCursos[i].valorPorCredito);
        scanf(" %[^\n]%*c", stringTemporaria);
        dadosCursos[i].nome = alocarStringTemporaria(stringTemporaria);
    }

    int quantidadeEstudantes;
    scanf("%d", &quantidadeEstudantes);

    Estudante dadosEstudantes[quantidadeEstudantes];
    for (i = 0; i < quantidadeEstudantes; i++) {
        scanf(" %[^\n]%*c", stringTemporaria);
        dadosEstudantes[i].nome =  alocarStringTemporaria(stringTemporaria);
        scanf("%d %d", &dadosEstudantes[i].codigoCurso, &dadosEstudantes[i].numCreditos);
        
        printarBoleto(dadosEstudantes[i], dadosCursos, quantidadeCursos);
        
        free(dadosEstudantes[i].nome);
    }

    for (i = 0; i < quantidadeCursos; i++) {
        free(dadosCursos[i].nome);
    }
    
    return 0;
}