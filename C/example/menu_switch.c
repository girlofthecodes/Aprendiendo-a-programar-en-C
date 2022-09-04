#include <stdio.h>
int main()
{
    int i; 
    printf("Buenas noches! Soy el camarero del restaurante. Aqui tiene la carta de menú para esta noche: \n");
    printf("1- Pato a la naranja\n");
    printf("2- Bistec de buey a las finas hierbas\n");
    printf("3- Tortilla española\n");
    printf("4- Cabañña con piriñaca\n");
    printf("Por favor, escoja el número del plato que desea para su cena: ");
    scanf("%d", &i); 

    switch (i)
    {
        case 1: 
            printf("Marchando un pato a la naranja\n");
            break;
        case 2: 
            printf("Marchando un buen bistec\n"); 
            break;  
        case 3: 
            printf("Marchando esa tortilla\n");
            break; 
        case 4: 
            printf("Marchando una caballa piriñaca\n");
            break; 
        default: 
            printf("Lo siento! Ese plato no lo tenemos. Me temo que pasara un poco de hambre.\n");   
    }      
}