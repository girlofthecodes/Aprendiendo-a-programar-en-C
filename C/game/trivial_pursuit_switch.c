#include <stdio.h>
main()
{
    //Variables de control
    int opcion; 
    int marcador = 0; 

    //Presentación 
    printf("Bienvenido a nuestro juego de preguntas y respuestas\n");
    printf("Demuestra tu cultura general y alcanza un gran marcador de puntos.\n");

    //Primera pregunta
    printf("Atención, pregunta: ¿Cuál es el lema de la casa Stark de Invernalia?\n ");
    printf("1- Se acerca el invierno.\n");
    printf("2- Uno para todos y todos para uno.\n");
    printf("3- Los Stark siempre pagan sus deudas.\n");
    printf("Elige una opción introduciendo un numero (1, 2 o 3)\n");
    scanf("%d", &opcion); 

    switch (opcion)
    {
        case 1: 
            //Acierto. Sumar un punto al marcador. 
            printf("Enhorabuena. Respuesta correcta.\n");
            marcador++; 
            break; 
        case 2: 
            printf("Respuesta incorrecta. Siguelo intentando.\n");
            break; 
        case 3: 
            printf("Respuesta incorrecta. Siguelo intentando.\n");
            break; 
        default: 
            printf("No has seguido las reglas del juego. No ganas ningun punto.\n");
    }

    //Segunda pregunta. 
    printf("Atención, pregunta: ¿Qué nombre tenia el autor de la novela Don Quijote de la Mancha?\n ");
    printf("1- El hilarante hidalgo.\n");
    printf("2- El manco de Lepando.\n");
    printf("3- El potro de Vallecas.\n");
    printf("Elige una opción introduciendo un numero (1, 2 o 3)\n");
    scanf("%d", &opcion); 

    switch (opcion)
    {
        case 1: 
            printf("Respuesta incorrecta. Siguelo intentando.\n");
            break; 
        case 2: 
            //Acierto. Sumar un punto al marcador. 
            printf("Enhorabuena. Respuesta correcta.\n");
            marcador++; 
            break; 
        case 3: 
            printf("Respuesta incorrecta. Siguelo intentando.\n");
            break; 
        default: 
            printf("No has seguido las reglas del juego. No ganas ningun punto.\n");
    }

    //Tercer pregunta. 
    printf("Atención, pregunta: ¿Con cual de estos comandos podemos controlar el flujo de un programa en C?\n ");
    printf("1- if/else\n");
    printf("2- printf()\n");
    printf("3- scanf()\n");
    printf("Elige una opción introduciendo un numero (1, 2 o 3)\n");
    scanf("%d", &opcion); 

    switch (opcion)
    {
        case 1: 
            //Acierto. Sumar un punto al marcador. 
            printf("Enhorabuena. Respuesta correcta.\n");
            marcador++; 
            break; 
        case 2: 
            printf("Respuesta incorrecta. Siguelo intentando.\n");
            break; 
        case 3: 
            printf("Respuesta incorrecta. Siguelo intentando.\n");
            break; 
        default: 
            printf("No has seguido las reglas del juego. No ganas ningun punto.\n");
    }
    //Marcador final
    printf("Fin de la partida. Tu puntuación final ha sido de %d", marcador); 
}