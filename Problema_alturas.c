#include <stdio.h>
#include <string.h>


int main()
{
    int n, i, cont;
    double alturaMedia, alturaTotal, percentualMenores;

    printf("Quantas pessoa serao digitadas? ");
    scanf("%d", &n);

    char nomes[n][9];
    int idades[n];
    double alturas[n];


    for (i = 0; i < n; i++) {
        printf("Dados da %dª pessoa: \n", i + 1);
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        gets(nomes[i]);

        printf("Idade: ");
        scanf("%d", &idades[i]);

        printf("Altura: ");
        scanf("%lf", &alturas[i]);
    }

    // ALTURA TOTAL
    alturaTotal = 0;

    for (i = 0; i < n; i++) {
        alturaTotal = alturaTotal + alturas[i];
    }

    // ALTURA MEDIA

    alturaMedia = alturaTotal / n;

    printf("\nAltura media --> %.2lf\n", alturaMedia);

    // MENORES DE 16

    cont = 0;
    for (i = 0; i < n; i++) {
        if (idades[i] < 16) {
            cont = cont + 1;
        }
    }

    percentualMenores = (double) cont / n * 100;
    printf("Pessoas com menos de 16 anos: %.1lf %%\n", percentualMenores);

    for (i = 0; i < n; i++) {
        if (idades[i] < 16) {
            printf("%s\n", nomes[i]);
        }
    }

    return 0;

}
