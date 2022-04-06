# include <stdio.h>

int main() {
    printf("Calculo da multiplicação de x por y.\n\n");
    printf("Digite um numero x:\n");
    int x;
    scanf("%d", &x);
    printf("Digite um numero y:\n");
    int y;
    scanf("%d", &y);
    printf("O resultado da multiplicacao de %d e %d eh igual a %d", x, y, x*y);

}