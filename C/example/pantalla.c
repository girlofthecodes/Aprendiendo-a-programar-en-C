#include <stdio.h> //Libreria
main() //Inicio del programa 
{
    //printf 
    printf("Bienvenido al sistema \n"); 

    //especificador de formato --> %d --> formato de netero decimal 
    printf("El numero %d \n", 18); 

    //putc --> vuelve por pantalla un unico caracter
    //puts --> vuelve por pantalla una cadena de caracteres 

    char c = 'X'; 
    puts("Bienvenido al sistema: "); 
    putc(c,stdout); 

    printf("\n");
    //especificador de formato --> /s --> formato de cadena de caracteres 
    printf("%s %s", "Hola", "Mundo"); 
}