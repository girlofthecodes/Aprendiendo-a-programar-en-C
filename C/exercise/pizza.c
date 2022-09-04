#include <stdio.h>
main()
{
    int radio, comensales, porciones, area_porcion; 
    float area, area_comensal; 

    //Datos que pedira el usuario
    printf("Bienvenidos a la Pizzeria CODE... \nIngrese el radio de su pizza: "); 
    scanf("%d", &radio); 

    printf("Ingrese el número de comensales que compartiran la pizza, incluyendolo... "); 
    scanf("%d", &comensales); 

    printf("Ingrese las porciones en las que se cortara la pizza... ");
    scanf("%d", &porciones); 

    area = 3.1416 * radio * radio; 
    printf("El area de tu pizza es de... %f \n", area);
    
    //Condicion 
    if (comensales > porciones)
    {
        printf("La pizza no alcanzara para %d comensales, porque solo se tienen %d porciones", comensales, porciones); 
    }
    else
    {
        if (porciones%2 == 0 )
        {
            //Comensales
            area_comensal = area / comensales; 
            printf("A cada comensal le corresponde %f cm2 de pizza... \n", area_comensal); 
            
            //Porciones
            area_porcion = porciones / comensales; 
            printf("A cada comensal le corresponde %d de porcion x pizza...", area_porcion);
        }
        else
        {
            porciones = porciones - 1; 
            area_porcion = porciones / comensales; 
            printf("A un comensal le tocara mas de %d porción(es).", area_porcion);
        }
    }
}