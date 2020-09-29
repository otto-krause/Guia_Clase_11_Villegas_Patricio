#include <stdlib.h>
#include <stdio.h>

void peri_area();

int main()
{
int a, b;
    printf("ingrese la altura y la base: ");
    scanf("%d \n%d", &a, &b);
    system ("cls");
    peri_area(a, b);
    return 0;
}

void peri_area(int a, int b)
{
int P=0, A=0;
    P= 2*a+2*b;
    A=a*b;
    printf("El perimetro es igual a %d y el area es igual a %d\n", P, A);
}
