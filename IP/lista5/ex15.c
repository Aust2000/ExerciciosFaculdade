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

        printf("Usuario %d - num. likes: %d, num. retweets: %d e num. mencoes: %d\n", i, matrizPonteirosUsuarios[i][j]->numLikes, matrizPonteirosUsuarios[i][j]->numRetweets, matrizPonteirosUsuarios[i][j]->numMencoes);

        free(matrizPonteirosUsuarios[i][j]);
    }
    
    // estava fazendo para imprimir cara célula da matriz
    // preciso unir as informações de cada linha da matriz em um novo Usuário para printar as somas (ou melhor, só somo tudo e )

    return 0;
}