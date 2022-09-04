#include <stdio.h>
int main()
{
    int numero, divisor=2; 
    printf("Introduzca numero mayor o igual a 2:\n"); 
    scanf("%d", &numero); 

    while(numero % divisor != 0)
        divisor = divisor + 1; 
    
        if (divisor == numero)
        {
            printf("%d es primo\n", numero);
        }
        else
        {
            printf("%d no es primo\n", numero); 
        }
}