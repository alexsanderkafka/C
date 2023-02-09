#include <stdio.h>

int main()
{

    int soma, cont, idade;
    double media;

    soma = 0;
    cont = 0;

    printf("Digite as idades: \n");
    scanf("%d", &idade);

    while (idade > 0) {
        soma = soma + idade;
        cont = cont + 1;
        scanf("%d", &idade);
    }


    if (cont == 0) {
        printf("IMPOSSIVEL CALCULAR\n");
    }
    else {
        media = (double) soma / cont;
        printf("MEDIA --> %.2lf\n", media);
    }
    return 0;

}
