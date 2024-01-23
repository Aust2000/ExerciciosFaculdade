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

void alocarString(char *ponteiro, int tamanho) {
    ponteiro = NULL;
    do {
        ponteiro = (char*) malloc(tamanho * sizeof(char) + 1);
    } while (ponteiro == NULL);
}

void receberStringTemporaria(char *ponteiro, char *stringTemporaria) {
    int tamanho = strlen(stringTemporaria);
    alocarString(ponteiro, tamanho);
    strcpy(ponteiro, stringTemporaria);
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
        receberStringTemporaria(dadosCursos[i].nome, stringTemporaria);
    }
    
    return 0;
}