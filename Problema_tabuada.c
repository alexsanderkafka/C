#include <stdio.h>

int main()
{

    int mult, cont, n;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &n);

    cont = 1;

    while (cont <=10) {
        mult = cont * n;
        printf("%d  X  %d  =  %d\n", n, cont, mult);
        cont = cont + 1;
    }

    return 0;


}
