// Dado um número inteiro de três algarismos, construir outro número inteiro de quatro algarismos de
// acordo com a seguinte regra: os três primeiros algarismos, contados da esquerda para a direita são iguais ao
// número dado. O quarto algarismo é um digito de controle calculado da seguinte forma: primeiro algarismo
// + segundo algarismo×3 + terceiro algarismo×5. O dígito de controle é igual ao resto da divisão dessa soma
// por 7.

#include <stdio.h>
 
int main() {
    int num;
    scanf("%d", &num);
 
    int x = num / 100;
    num -= x * 100;
 
    int y = num / 10;
    num -= y * 10;
 
    int z = num;
 
    int controle = (x + (y * 3) + (z * 5)) % 7;
 
    num = (x * 1000) + (y * 100) + (z * 10) + controle;
 
    printf("O NOVO NUMERO E = %d", num);
    
    return 0;
}