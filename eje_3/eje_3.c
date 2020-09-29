#include <stdlib.h>
#include <stdio.h>

void porcetanje();

int main()
{
int h, m;
    printf("Ingrese la cantidad de hombre: ");
    scanf("%d", &h);
    printf("Ingrese la cantidad de mujeres: ");
    scanf("%d", &m);
    porcetanje(h, m);
    return 0;
}

void porcetanje(int h, int m)
{
float porh=0;
        porh=h*100/(h+m);
        printf("El porcentaje de hombres es %.1f%c y el porcentaje de mujeres es %.1f%c\n", porh, 37 , 100-porh, 37 );
}
