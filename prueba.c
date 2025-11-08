#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <math.h>

void play(int *ptr);

int main(int argc, char** argv) {
    int x = 10;
    int *ptr = &x; // puntero a x
    int **ptr_to_ptr = &ptr; // puntero al puntero de x
    
    printf("direccion guardada en ptr: %d\n", *ptr_to_ptr);
    printf("dato en la direccion que guarda ptr: %d\n", **ptr_to_ptr);

    int y = 20;
    int *y_ptr = &y;
    printf("direccion de y guardada en y_ptr: %d\n", y_ptr);

    *ptr_to_ptr = &y;
    printf("nueva direccion de guardada en ptr: %d\n", *ptr_to_ptr);
    printf("nuevo valor de direccion de ptr: %d\n", **ptr_to_ptr);

    
}

void play(int *ptr) {
    *ptr = 21;
}
