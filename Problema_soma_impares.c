#include <stdio.h>

int main()
{

    int x, y, soma, i, troca;

    printf("Digite dois numeros: \n");
    scanf("%d", &x);
    scanf("%d", &y);

    if (x > y) {
        troca = x;
        x = y;
        y = troca;
    }

    soma = 0;

    if (x != y) {
        for (i = x + 1; i < y; i++) {
            if (i % 2 != 0) {
                soma = soma + i;
            }
        }
    }
    else {
        printf("IMPOSSIVEL REALIZAR A SOMA, NUMEROS IGUAIS\n");
    }

    if (soma >= 0) {
        printf("SOMA DOS IMPARES --> %d\n", soma);
    }

    return 0;
}
