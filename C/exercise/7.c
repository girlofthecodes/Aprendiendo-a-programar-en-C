#include <stdint.h>
//Le indica que inicia el programam 
main()
{
    //Se definen las variables 
    int num1, num2, r; 

    //Se piden los datos necesarios por consola
    printf("Numero 1: "); 
    scanf("%d", &num1); 
    printf("Numero 2: ");
    scanf("%d", &num2);

    //Se realizan las operaciones pertinentes
    r = num1 + num2; 
    printf("La suma de %d y %d es: %d\n", num1, num2, r); 
    r = num1 - num2; 
    printf("La resta de %d y %d es: %d\n", num1, num2, r); 
    r = num1 * num2; 
    printf("La multiplicación de %d y %d es: %d\n", num1, num2, r); 

    //Se realiza la condición 
    if (num2 != 0)
    {
        r = num1 / num2; 
        printf("La división de %d y %d es: %d\n", num1, num2, r); 
        r = num1 % num2; 
        printf("El resto de dividir %d y %d es: %d\n", num1, num2, r); 
    }
    else
    {
        printf("La división y el resto de la división no se puede efectuar si el elemento dos es 0.\n");
    }
}