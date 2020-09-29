#include <stdlib.h>
#include <stdio.h>
void numero();
int main()
{
    numero();
    return 0;
}

void  numero()
{
int a=0, b=0;
    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);
    system ("cls");
    printf("%d \n%d\n", a, b);
}
