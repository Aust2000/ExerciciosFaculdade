#include <stdio.h>
#include <stdlib.h>
 
typedef struct {
    int numLikes;
    int numRetweets;
    int numMencoes;
} Usuario;
 
Usuario* alocarUsuario() {
    Usuario* ponteiro = NULL;
    
    do {
        ponteiro = (Usuario*)malloc(sizeof(Usuario));
    } while (ponteiro == NULL);
    return ponteiro;
}
 
int main() {
    int tamMatriz;
    scanf("%d", &tamMatriz);
 
    int usuariosQuantidade;
    scanf("%d", &usuariosQuantidade);
 
    Usuario* matrizPonteirosUsuarios[tamMatriz][tamMatriz];
    int i, j;
    for (i = 0; i < tamMatriz; i++) {
        for (j = 0; j < tamMatriz; j++) {
            matrizPonteirosUsuarios[i][j] = NULL;
        }
    }
 
    int numLikesInput, numRetweetsInput, numMencoesInput;
    while (usuariosQuantidade--) {
        scanf("%d %d %d %d %d", &i, &j, &numLikesInput, &numRetweetsInput, &numMencoesInput);
 
        matrizPonteirosUsuarios[i][j] = alocarUsuario();
        matrizPonteirosUsuarios[i][j]->numLikes = numLikesInput;
        matrizPonteirosUsuarios[i][j]->numRetweets = numRetweetsInput;
        matrizPonteirosUsuarios[i][j]->numMencoes = numMencoesInput;
    }
 
    int totalLikes = 0, totalRetweets = 0, totalMencoes = 0;
    for (i = 0; i < tamMatriz; i++) {
        for (j = 0; j < tamMatriz; j++) {
            if (matrizPonteirosUsuarios[i][j] == NULL) {
                continue;
            }
 
            totalLikes += matrizPonteirosUsuarios[i][j]->numLikes;
            totalRetweets += matrizPonteirosUsuarios[i][j]->numRetweets;
            totalMencoes += matrizPonteirosUsuarios[i][j]->numMencoes;
        }
        if (totalLikes == 0 && totalRetweets == 0 && totalMencoes == 0) {
            continue;
        }
 
        printf("Usuario %d - num. likes: %d, num. retweets: %d e num. mencoes: %d\n", i, totalLikes, totalRetweets, totalMencoes);
        totalLikes = 0;
        totalRetweets = 0;
        totalMencoes = 0;
    }
    
    for (i = 0; i < tamMatriz; i++) {
        for (j = 0; j < tamMatriz; j++) {
            free(matrizPonteirosUsuarios[i][j]);
        }
    }
    return 0;
}