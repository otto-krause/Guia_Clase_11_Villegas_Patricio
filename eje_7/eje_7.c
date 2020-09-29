#include <stdlib.h>
#include <stdio.h>

void mayor();

int main()
{
    mayor();
    return 0;
}

void mayor()
{
    int num, num1;
    printf("Ingrese dos numeros:\n");
    scanf("%d\n %d", &num, &num1);
    system ("cls");
    if (num == num1)
        {
        printf("Los numeros son iguales");
        }
    else
        {
        if (num>num1)
            {
            printf("%d es mayor que %d", num, num1);
            }
        else
            {
            printf("%d es mayor que %d", num1, num);
            }
        }
}
