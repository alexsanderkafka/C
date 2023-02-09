#include <stdio.h>

int main()
{

     int x, y;
     x = 5;
     y = 2 * x;

     printf("%d\n", x);
     printf("%d\n\n", y);

     double y2;
     y2 = x * 2;
     printf("%d\n", x);
     printf("%.1lf\n\n", y2);

     double b1, b2, b3, h, area;
     b1 = 6.0;
     b2 = 8.0;
     h = 5.0;
     area = (b1 + b2) / 2  *  h;
     printf("%.2lf\n\n", area);

     int a, b, resultado;
     a = 5;
     b = 2;
     resultado = a / b ;
     printf("%d\n\n", resultado);

     double b5;
     int z;
     b5 = 5.2;
     z = (int) b5;
     printf("%d\n\n", z);

     return 0 ;
}
