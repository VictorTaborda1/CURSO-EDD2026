#include"stdio.h"
#include "areas.h"
#include "volumenes.h"

int main(){
    double x, y;
     // printf("hola hay algo funcionando");
    printf("hola bienvenido a la calculadora \n");
    printf("selecciona que operacion deseas realizar");
    int opcion;
    do{
        printf("\n1.Calcular el area de un circulo\n");
        printf("2.Calcular el area de un cuadrado\n");
        printf("3.calcular el volumen de una esfera\n");
        printf("4.calcular el volumen de un cubo\n");
        printf("5.salir\n");
        scanf("%d", &opcion);
        switch (opcion){
            case 1:
                printf(" escribe el radio del circulo  ");
                scanf("\n %lf",&x);     
                printf(" el area del circulo es \n %lf",AreaC(x));break;
            case 2: 
                printf(" escribe un lado del cuadrado  ");
                scanf("\n %lf",&x);
                printf("\n escribe otro lado del cuadrado ");
                scanf("\n%lf",&y);
                printf("el area del cuadrado es \n %lf",  AreaCu( x, y)) ;break;
            case 3: 
                printf(" escribe el radio de la esfera  ");
                scanf("\n %lf",&x);
                printf("el volumen de la esfera es \n %lf",VolumenE(x)); break;
            case 4:
                printf(" escribe un lado del cubo ");
                scanf("\n %lf",&x);
                printf("el volumen del cubo es \n %lf",VolumenC(x)); break;


        };
    } while (opcion !=5);

    return 0;
}