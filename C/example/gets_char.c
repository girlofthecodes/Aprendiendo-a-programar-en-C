#include <stdio.h>
main()
{
    char nombre[50]; 
    char apellido[15]; 

    printf("Me podrias decir tu nombre: \n"); 
    gets(nombre); 
    printf("Me podrias decir tu primer apellido: \n"); 
    gets(apellido); 
    printf("Encantado de conocerte, %s %s", nombre, apellido); 
}