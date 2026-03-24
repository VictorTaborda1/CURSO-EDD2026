#include<stdio.h>
#define N  7
void bubbleSort(int arr[], int n);
void selectionSort(int arr[], int n);
void insertionSort(int arr[], int n) ;
void mostrar();
int arreglo[N];
int main(){
    int opcion;
    printf("vamos a comenzar");
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
            case 1: for (int i = 0; i < N; i++) {
                    printf("Ingrese el numero %d: ", i + 1);
                    scanf("%d", &arreglo[i]);
                    }
                    // Mostrar los datos
                    printf("\nLos numeros ingresados son:\n");
                    mostrar();break;
            case 2:
                    bubbleSort(arreglo, N);break;
            case 3:
                    selectionSort(arreglo,7);break;
            case 4:
                    insertionSort(arreglo,7);break;

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
void selectionSort(int arr[], int n) { 
    for (int i = 0; i < n - 1; i++) { 
        mostrar();
        int minIndex = i; 
        // Encontrar el mínimo en arr[i..n-1] 
        for (int j = i + 1; j < n; j++) { 
            if (arr[j] < arr[minIndex]) { 
                minIndex = j; 
            } 
        } 
        // Intercambiar (swap) el mínimo encontrado con el elemento en i 
        int temp = arr[i]; 
        arr[i] = arr[minIndex]; 
        arr[minIndex] = temp; 
    } 
    mostrar();
}
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int clave = arr[i]; // Elemento a insertar
        int j = i - 1;
        // Desplazar hacia la derecha los elementos mayores que 'clave'
        while (j >= 0 && arr[j] > clave) {
            arr[j + 1] = arr[j];
            j--;
        }
        // Insertar 'clave' en la posición que dejó libre
        arr[j + 1] = clave;
        mostrar();
    }
}
void mostrar(){
    for(int i=0; i<N; i++){
        printf("%d - ", arreglo[i]);
    }
    printf("\n ");
}