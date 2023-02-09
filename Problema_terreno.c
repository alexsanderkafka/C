#include <stdio.h>

int main()
{

    double area, largura, comprimento, preco, valor;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);

    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);

    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &preco);

    area = largura * comprimento;
    valort = preco * area;

    printf("Area do terreno --> %.2lf\n", area);
    printf("Preco do terrbo --> R$ %.2lf\n", valort);

    return 0;
}
