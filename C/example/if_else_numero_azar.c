#include <stdio.h>
main()
{
    int numero; 
    printf("Ingresa un numero al azar: "); 
    scanf("%d", &numero); 
    if (numero > 5)
    {
        printf("Tu numero es mayor que 5"); 
    }
    else{
        printf("Tu numero es igual o menos que 5");
    }
}