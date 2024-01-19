#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int quantidadePessoas;
    int gastoAgua;
    int gastoPorPessoa;
} DadosImovel;

DadosImovel* alocarArrayImoveis (int tamanho) {
    DadosImovel *ponteiro = NULL;
    do {
        ponteiro = (DadosImovel*)malloc(sizeof(DadosImovel) * tamanho);
    } while (ponteiro == NULL);
    return ponteiro;
}

int calcularGastoPorPessoa (DadosImovel imovel) {
    return imovel.gastoAgua / imovel.quantidadePessoas;
}

void ordenarImoviesPorConsumoPorPessoa (DadosImovel *arrayImoveis, int quantidadeImovies) {
    int chaveGastoPorPessoa, j;
    DadosImovel chaveDadosImovel;

    int i = 1;
    for (; i < quantidadeImovies; i++) {
        chaveGastoPorPessoa = arrayImoveis[i].gastoPorPessoa;
        chaveDadosImovel = arrayImoveis[i];
        j = i - 1;

        while (j >= 0 && arrayImoveis[j].gastoPorPessoa > chaveGastoPorPessoa) {
            arrayImoveis[j + 1] = arrayImoveis[j];
            j--;
        }

        arrayImoveis[j + 1] = chaveDadosImovel;
    }
}

double calcularGastoMedio(DadosImovel *arrayImoveis, int quantidadeImoveis) {
    double gastoTotal = 0.0, totalPessoas = 0.0;
    int i;
    for (i = 0; i < quantidadeImoveis; i++) {
        gastoTotal += arrayImoveis[i].gastoAgua;
        totalPessoas += arrayImoveis[i].quantidadePessoas;
    }
    return (gastoTotal / totalPessoas);
}

int main() {
    int quantidadeImoveis;
    DadosImovel *arrayImoveis;
    int quantidadePessoas, gastoDoImovel;
    int digitoCidade = 1;
    while (1) {
        scanf("%d", &quantidadeImoveis);
        if (quantidadeImoveis == 0) {
            break;
        }

        if (digitoCidade != 1) {
            printf("\n\n");
        }

        arrayImoveis = alocarArrayImoveis(quantidadeImoveis);

        int i;
        for (i = 0; i < quantidadeImoveis; i++) {
            scanf("%d %d", &arrayImoveis[i].quantidadePessoas, &arrayImoveis[i].gastoAgua);
            arrayImoveis[i].gastoPorPessoa = calcularGastoPorPessoa(arrayImoveis[i]);
        }

        printf("Cidade# %d:\n", digitoCidade++);

        ordenarImoviesPorConsumoPorPessoa(arrayImoveis, quantidadeImoveis);

        int quantidadePessoasSomado = 0;
        for (i = 0; i < quantidadeImoveis; i++) {
            quantidadePessoasSomado += arrayImoveis[i].quantidadePessoas;
            if (arrayImoveis[i].gastoPorPessoa == arrayImoveis[i + 1].gastoPorPessoa) {
                continue;
            }

            printf("%d-%d", quantidadePessoasSomado, arrayImoveis[i].gastoPorPessoa);
            if (i != quantidadeImoveis - 1) {
                printf(" ");
            }
            quantidadePessoasSomado = 0;
        }
        printf("\n");

        printf("Consumo medio: %.2lf m3.", calcularGastoMedio(arrayImoveis, quantidadeImoveis));

        free(arrayImoveis);
    }
    
    return 0;
}