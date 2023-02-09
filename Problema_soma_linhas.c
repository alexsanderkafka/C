#include<stdio.h>

int main()
{

    int i, j, linha, coluna;

    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &linha);

    printf("Qual a quantidade de coluna da matriz? ");
    scanf("%d", &coluna);

    double num[linha][coluna];
    double vet[linha];

    for (i = 0; i < linha; i++) {
        printf("Digite os elementos da %da. Linha: \n", i + 1);
        for (j = 0; j < coluna; j++) {
            scanf("%lf", &num[i][j]);
        }
    }

    // SOMANDO LINHAS

    for (i = 0; i < linha; i++){
        vet[i] = 0;
        for (j = 0; j < coluna; j++) {
            vet[i] = vet[i] + num[i][j];
        }
    }

    printf("VETOR GERADO:\n");
    for (i = 0; i < linha; i++){
        printf("%.1lf\n", vet[i]);
    }

    return 0;
}
