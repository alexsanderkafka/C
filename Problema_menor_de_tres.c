#include <stdio.h>

int main()
{

    int num, num2, num3, menor;

    printf("Primeiro valor: ");
    scanf("%d", &num);
    printf("Segundo valor: ");
    scanf("%d", &num2);
    printf("Terceiro valor: ");
    scanf("%d", &num3);

    menor = 0;

    if (num < num2 && num < num3) {
        menor = num;
    }
    else if (num2 < num3) {
        menor = num2;
    }
    else {
        menor = num3;
    }

    printf("Menor --> %d", menor);

    return 0;


}
