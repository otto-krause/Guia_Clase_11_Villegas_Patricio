#include <stdlib.h>
#include <stdio.h>

void restotal();

int main()
{
    restotal();
    return 0;
}

void restotal()
{
    int r1, r2, r3, r4, r5, rt;
    printf("Ingrese el valor de las cinco resistencias: \n");
    scanf("%d %d %d %d %d", &r1, &r2, &r3, &r4, &r5 );
    rt=r1+r2+r3+r4+r5;
    printf("El valor de total de la resistencia es: %d\n", rt);
}
