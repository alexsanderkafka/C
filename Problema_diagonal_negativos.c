#include <stdio.h>

int main()
{

    int n, i,cont, j;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    int matriz[n][n];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Elemento [%d, %d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nDIAGONAL PRINCIPAL:\n");
    for (i = 0; i < n; i++) {
        printf("%d  ", matriz[i][i]);
    }

    // QUANTIDADE DE NEGATIVOS NA MATRIZ

    cont = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matriz[i][j] < 0) {
                cont = cont + 1;
            }
        }
    }

    printf("\nQUANTIDADE DE NEGATIVOS = %d\n", cont);

    return 0;
    }
