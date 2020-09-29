#include <stdlib.h>
#include <stdio.h>

void parte();

int main()
{
 parte();
 return 0;
}

void parte()
{
    int num;
    float p=0;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    p=num/8;
    printf("La 8va parte de %d es %.1f", num, p);
}
