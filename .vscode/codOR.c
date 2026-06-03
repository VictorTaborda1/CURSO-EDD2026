#include<stdio.h>
#define NcomMax 30
int opcion;
int Ncon=0;
int arreglo[NcomMax];
void mostrar();
int main(){ 
    printf("hola mundo");
do{
    printf("SISTEMA DE ORGANIZACION DE CONTENEDORES\n");
    printf("MUELLE DE CARGA\n");
    printf("seleciona la accion a realizar\n");
    printf("1. Registrar peso de contenedores manualmente\n");
    printf("2. generar pesos aleatorios de contenedores\n");
    printf("3. Mostrar contenedores registrados\n");
    printf("4. Ordenar contenedores Metodo 1\n");
    printf("5. Ordenar contenedores Metodo 2\n");
    printf("6. Ordenar contenedores Metodo 3\n");
    printf("7. Buscar contenedor\n");
    printf("8. salir \n");
    scanf("%d",&opcion);
    switch (opcion){
        case 1:
        printf("ingresa el numero de contenedores(max 30)");
        scanf("%d",&Ncon);
        for (int i = 0; i < Ncon; i++) {
                printf("Ingrese el peso%d: ", i + 1);
                scanf("%d", &arreglo[i]);
                }
        break;
        case 2:
        printf("ingresa el numero de contenedores(max 30)");
        scanf("%d",&Ncon);
        // falta lo del aleatorio//
        
        break;
        case 3: mostrar();
         break;
        }
        printf("hola mundo");
}while (opcion!=8);
return 0;
}
void mostrar(){
    for(int i=0; i<Ncon; i++){
        printf("%d - ", arreglo[i]);
    }
    printf("\n ");
}
