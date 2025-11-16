#include <stdio.h>
#include <stdlib.h>

int main() {
    // malloc - reserva memoria en el heap sin inicializar
    int *arr1 = malloc(3 * sizeof(int)); // reserva un bloque de 12 bytes y retorna un puntero a dicho bloque
    if (arr1 == NULL) return 1;
    
    arr1[0] = 10;
    arr1[1] = 20;
    arr1[2] = 30;
    
    // calloc - reserva memoria en el heap y los inicializa todos a cero
    int *arr2 = calloc(3, sizeof(int)); // reserva un bloque de 12 bytes y retorna un puntero a dicho bloque
    if (arr2 == NULL) return 1;
    
    // arr2[0], arr2[1], arr2[2] ya son 0
    
    // realloc - modifica el tamaño de un bloque de memoria previamente asignado
    arr1 = realloc(arr1, 5 * sizeof(int));
    if (arr1 == NULL) return 1;
    
    // nuevo espacio asignado
    arr1[3] = 40; 
    arr1[4] = 50;
    
    // Liberar memoria
    free(arr1); // libera el bloque de memoria apuntado por arr1
    free(arr2); // libera el bloque de memoria apuntado por arr2
    
    // Evitar punteros colgantes (por buenas prácticas)
    arr1 = NULL; 
    arr2 = NULL;
    
    return 0;
}