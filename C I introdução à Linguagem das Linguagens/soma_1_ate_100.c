# include <stdio.h>

int main() {
    printf("Soma dos numeros de 1 a 100. \n");
    int soma = 0;
    for(int i = 1; i <= 100; i++){
        printf("Imprimindo o numero: %d\n", i);
        soma += i;
    }
    printf("A soma de 1 ate 100 e igual a:\n%d", soma);

}