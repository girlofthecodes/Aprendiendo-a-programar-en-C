//Librerias 
#include <stdio.h>
//Indica donde empieza el programa 
main()
{
    //Define las variables
    int numero1, numero2, resultado; 
    
    //Pide datos por consola y los almacena en las variables que se le indican
    printf("Numero 1: "); 
    scanf("%d", &numero1); 
    printf("Numero 2: ");
    scanf("%d", &numero2);  

    //Realiza las operaciones adecuadas
    resultado = numero1 + numero2; 
    printf("La suma de %d y %d es: %d\n", numero1, numero2, resultado); 
    resultado = numero1 - numero2; 
    printf("La resta de %d y %d es: %d\n", numero1, numero2, resultado); 
    resultado = numero1 * numero2; 
    printf("La multiplicación de %d y %d es: %d\n", numero1, numero2, resultado); 
    resultado = numero1 / numero2; 
    printf("La división de %d y %d es: %d\n", numero1, numero2, resultado); 
    resultado = numero1 % numero2; 
    printf("El resto de dividir %d y %d es: %d\n", numero1, numero2, resultado); 

}
