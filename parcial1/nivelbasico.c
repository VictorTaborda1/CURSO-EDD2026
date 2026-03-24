#include<stdio.h>
#define N  7
void bubbleSort(int arr[], int n);
void mostrar();
int arreglo[N];
int main(){
    int opcion;
    printf("vamos a comenzar");
    bubbleSort(arreglo, 7);
    do{
        printf("bienvenido al sistema de ordenamiento de numeros ENTEROS");
        printf("seleciona la accion a realizar\n");
        printf("1. agregar numeros ENTEROS a la lista a ordenar maximo 7 numeros\n");
        printf("2. Ordenar segun el metodo BubbleSort\n");
        printf("3. Ordenar segun el metodo SelectionSort\n");
        printf("4. Ordenar segun el metodo insertSort\n");
        printf("5. salir \n");
        scanf("%d",&opcion);
        switch (opcion){
        case 1:
            break;
        if( arreglo != NULL):
        };
    } while (opcion!=5) ;
    

return 0;
}
void bubbleSort(int arr[], int n) { 
    for (int i = 0; i < n - 1; i++) { 
        for (int j = 0; j < n - i - 1; j++) { 
            mostrar();
        // Si el elemento actual es mayor que el siguiente, intercambiarlos 
            if (arr[j] > arr[j + 1]) { 
                int temp = arr[j]; 
                arr[j] = arr[j + 1]; 
                arr[j + 1] = temp; 
            } 
        } 
    } 
}

void mostrar(){
    for(int i=0; i<N; i++){
        printf("%d - ", arreglo[i]);
    }
    printf("\n ");
}