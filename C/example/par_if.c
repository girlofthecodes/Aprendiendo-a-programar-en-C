#include <stdio.h>
int main()
{
    int num; 
    printf("Introduzca un numero: \n");
    scanf("%d", &num); 
    if (num%2==0)
    {
        printf("\nEl numero es par\n");
    } 
    else
    {
        printf("\nEl numero es impar\n");
    }
}