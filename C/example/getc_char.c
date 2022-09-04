#include <stdio.h>
main()
{
    char c; 
    char nombre[20]; 
    puts("Introduzca su nombre real: "); 
    gets(nombre); 
    printf("Introduzca su nombre en clave mediante un unico carácter: "); 
    c = getc(stdin); 
    puts("Su nombre real es..."); 
    puts(nombre);
    puts("su nombre en clave es..."); 
    putc(c, stdout); 

}