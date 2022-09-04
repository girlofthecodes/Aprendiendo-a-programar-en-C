#include <stdio.h>
main()
{
    int opcion; 
    printf("Un troll te impide el paso. Selecciona tu movimiento: \n");
    printf("1 - Empujarlo hacia el abismo \n"); 
    printf("2 - Cantar una tonadilla infantil \n");
    printf("Opcion: ");
    scanf("%d", &opcion); 
    if (opcion != 1 && opcion != 2)
    {
        printf("Movimiento ilegal. El troll te devora"); 
    }
    else
    {
        if (opcion == 1)
        {
            printf("Tropiezas, cayendo al abismo. Game Over!"); 
        }
        else
        {
            printf("El troll se ablanda y entabla amistad contigo");
        }
    }
}