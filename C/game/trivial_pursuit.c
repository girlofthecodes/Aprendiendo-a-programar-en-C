#include <stdio.h>
int main()
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

    if (opcion!=1 && opcion!= 2 && opcion!= 3)
    {
        //Opcion ilegal 
        printf("No has seguido las reglas del juego. No ganas ningun punto.\n"); 
    }
    else
    {
        //Opción legal. Verifica si es la correcta. 
        if (opcion==1)
        {
            //Acierto. Sumar un punto al marcador. 
            printf("Enhorabuena. Respuesta correcta.\n"); 
            marcador++; 
        }
        else
        {
            printf("Respuesta incorrecta. Sigue intentandolo.\n"); 
        }
    }

    //Segunda pregunta. 
    printf("Atención, pregunta: ¿Qué nombre tenia el autor de la novela Don Quijote de la Mancha?\n ");
    printf("1- El hilarante hidalgo.\n");
    printf("2- El manco de Lepando.\n");
    printf("3- El potro de Vallecas.\n");
    printf("Elige una opción introduciendo un numero (1, 2 o 3)\n");
    scanf("%d", &opcion); 

    if (opcion!=1 && opcion!= 2 && opcion!= 3)
    {
        //Opcion ilegal 
        printf("No has seguido las reglas del juego. No ganas ningun punto.\n"); 
    }
    else
    {
        //Opción legal. Verifica si es la correcta. 
        if (opcion==2)
        {
            //Acierto. Sumar un punto al marcador. 
            printf("Enhorabuena. Respuesta correcta.\n"); 
            marcador++; 
        }
        else
        {
            printf("Respuesta incorrecta. Sigue intentandolo.\n"); 
        }
    }

    //Tercer pregunta. 
    printf("Atención, pregunta: ¿Con cual de estos comandos podemos controlar el flujo de un programa en C?\n ");
    printf("1- if/else\n");
    printf("2- printf()\n");
    printf("3- scanf()\n");
    printf("Elige una opción introduciendo un numero (1, 2 o 3)\n");
    scanf("%d", &opcion); 

    if (opcion!=1 && opcion!= 2 && opcion!= 3)
    {
        //Opcion ilegal 
        printf("No has seguido las reglas del juego. No ganas ningun punto.\n"); 
    }
    else
    {
        //Opción legal. Verifica si es la correcta. 
        if (opcion==1)
        {
            //Acierto. Sumar un punto al marcador. 
            printf("Enhorabuena. Respuesta correcta.\n"); 
            marcador++; 
        }
        else
        {
            printf("Respuesta incorrecta. Sigue intentandolo.\n"); 
        }
    }
    //Marcador final
    printf("Fin de la partida. Tu puntuación final ha sido de %d", marcador); 
}