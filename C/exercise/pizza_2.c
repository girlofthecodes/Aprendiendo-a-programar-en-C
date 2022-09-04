#include <stdio.h>
main()
{   
    int radio, comensales, porciones, area_porcion, calorias, quema_calorias; 
    float area, area_comensal; 

    //Datos que pedira el usuario
    printf("Bienvenidos a la Pizzeria CODE... \nIngrese el radio de su pizza: "); 
    scanf("%d", &radio); 

    printf("Ingrese el número de comensales que compartiran la pizza, incluyendolo... "); 
    scanf("%d", &comensales); 

    printf("Ingrese las porciones en las que se cortara la pizza... ");
    scanf("%d", &porciones); 

    //El programa comienza a calcular cuantas porciones de pizza le toca a cada comensal 
    area = 3.1416 * radio * radio; 
    printf("El area de tu pizza es de... %f \n", area);
    
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
            printf("A cada comensal le corresponde %d de porcion x pizza...\n", area_porcion);

            //El programa calcula las calorias por el total de porciones que comio 
            calorias = 250 * area_porcion; 
            printf("Por el total de %d porcion(es) ingiere un total de %d calorias.\n", area_porcion, calorias); 

            //El programa calcula los minutos que debe correr para quemar las calorias de la pizza
            quema_calorias = calorias / 11; 
            printf("Para quemar %d calorias tiene que correr %d minuto(s).\n", calorias, quema_calorias); 
        }
        else
        {
            area_porcion = porciones / comensales; 
            area_porcion = area_porcion + 1; 
            printf("A un comensal le tocara(n) %d porcion(es).\n", area_porcion);

            //Calcula las calorias que ingiere el comensal que comera más
            calorias = 250 * area_porcion; 
            printf("Por el total de %d porcion(es) ingiere un total de %d calorias.\n", area_porcion, calorias); 

            //El programa calcula los minutos que debe correr para quemar las calorias de la pizza
            quema_calorias = calorias / 11; 
            printf("Para quemar %d calorias tiene que correr %d minuto(s).\n", calorias, quema_calorias); 
        }
    }

}