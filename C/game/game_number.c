#include <stdio.h>
main()
{
    int resultado; 
    int secreto; 

    //Presentación 
    printf("Voy a demostrar un truco de magia, adivinando cualquier numero que puedas pensar de seis cifras \n"); 
    printf("Asi, lo primero que voy a pedirte es que escojas un numero y lo memorices... \n"); 

    //Operaciones interactivas
    printf("Bien... ahora, dobla tu numero secreto y guarda el resultado en tu mente\n"); 
    printf("Lo siguiente que debes hacer sera multiplicar por cinco el resultado de la operación anterior\n"); 

    printf("¿Ya? Bien, podrias escribir el resultado de dicha multiplicacion? \n "); 
    scanf("%d", &resultado); 

    //Obtención del númeri secreto
    secreto = resultado/5; 

    //Final del truco
    printf("Hemos llegado al final. Ah se me olvidaba. El numero secreto que pensaste es el... %d \n", secreto); 
    printf("Gracias y recuerda que un buen mago nunca revela sus trucos"); 
}