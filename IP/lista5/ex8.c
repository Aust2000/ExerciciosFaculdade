#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    int matricula;
    Data dataDeNascimento;
    char nome[200];
} Estudante;

int eMaisNovo(Estudante estudante1, Estudante estudante2) {
    if (estudante1.dataDeNascimento.ano > estudante2.dataDeNascimento.ano) {
        return 1;
    } else if (estudante1.dataDeNascimento.ano == estudante2.dataDeNascimento.ano) {
        if (estudante1.dataDeNascimento.mes > estudante2.dataDeNascimento.mes) {
            return 1;
        }
        else if (estudante1.dataDeNascimento.mes == estudante2.dataDeNascimento.mes && estudante1.dataDeNascimento.dia > estudante2.dataDeNascimento.dia) {
            return 1;
        }
    }
    return 0;
}

void ordenarEstudantes(Estudante *arrayEstudantes, int tamInput) {
    Estudante chave;
    int i, j;
    for (i = 1; i < tamInput; i++) {
        chave = arrayEstudantes[i];
        j = i - 1;
        while (j >= 0 && !(eMaisNovo(arrayEstudantes[j], chave))) {
            arrayEstudantes[j + 1] = arrayEstudantes[j];
            j--;
        }

        arrayEstudantes[j + 1] = chave;
    }
}

void printarEstudante(Estudante estudante) {
    printf("Matric.: %d Nome: %s Data Nasc: %d/%d/%d\n", estudante.matricula, estudante.nome, estudante.dataDeNascimento.dia, estudante.dataDeNascimento.mes, estudante.dataDeNascimento.ano);
}

int main() {
    int quantidadeEstudantes;
    scanf("%d", &quantidadeEstudantes);

    Estudante arrayEstudantes[quantidadeEstudantes];

    int i;
    for (i = 0; i < quantidadeEstudantes; i++) {
        scanf("%d %d %d %d%*c", &arrayEstudantes[i].matricula, &arrayEstudantes[i].dataDeNascimento.dia, &arrayEstudantes[i].dataDeNascimento.mes, &arrayEstudantes[i].dataDeNascimento.ano);
        scanf("%[^\n]%*c", arrayEstudantes[i].nome);
    }

    ordenarEstudantes(arrayEstudantes, quantidadeEstudantes);

    for (i = 0; i < quantidadeEstudantes; i++) {
        printarEstudante(arrayEstudantes[i]);
    }

    return 0;
}