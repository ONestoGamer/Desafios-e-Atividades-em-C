#include <stdio.h>

int main() {
    int numero, soma = 0, i;
    printf("Digite um número: ");
    scanf("%d", &numero);
    for (i = 1; i <= numero; i++) {
        if (i % 2 == 0) {
            soma += i;
        }
    }
    printf("A soma dos números pares é: %d\n", soma);
    return 0;
}