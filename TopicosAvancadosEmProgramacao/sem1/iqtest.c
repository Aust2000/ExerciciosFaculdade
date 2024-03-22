#include <stdio.h>
#include <stdlib.h>

int main() {
    int qtNum;
    scanf("%d", &qtNum);
    
    int qtPar = 0;
    int listaNum[100];

    for (int i = 0; i < qtNum; i++) {
        scanf("%d", &listaNum[i]);
        if (listaNum[i] % 2 == 0) {
            qtPar++;
        }
    }

    int numProcuradoEPar;
    if (qtPar >= 2) {
        numProcuradoEPar = 0;
    } else {
        numProcuradoEPar = 1;
    }

    for (int i = 0; i < qtNum; i++) {
        if (numProcuradoEPar == 1 && listaNum[i] % 2 == 0) {
            printf("%d", i + 1);
            break;
        } else if (numProcuradoEPar == 0 && listaNum[i] % 2 != 0) {
            printf("%d", i + 1);
            break;
        }
    }
    
    return 0;
}