#include <stdio.h>

int main()
{
    int n, i;
    double media, soma;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    double num[n];

    for (i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%lf",&num[i]);
    }

    printf("VALORES --> ");
    for (i = 0; i < n; i++) {
        soma = soma + num[i];
        printf("%.1lf   ", num[i]);
    }
    printf("\n");

    soma = 0;
    for (i = 0; i < n; i++) {
        soma = soma + num[i];
    }

    printf("SOMA = %.2lf\n", soma);
    media = soma / n;
    printf("MEDIA = %.2lf\n", media);

    return 0;

}
