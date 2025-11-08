#include <stdio.h>

int main()
{
    // un puntero es una variable que guarda una posicion en memoria, 

    int num = 9;
    int *puntero = &num; 
    // con el operador * antes del nombre definimos que sera un puntero
    // con el operador & le asignamos la direccion de memoria de la variable num a nuestro puntero
    int num2 = *puntero; // asignamos a num2 el valor que exista en la posicion de memoria que gurada puntero

    // Los operadores * y & para el manejo de punteros se pueden interpretar de la siguiente forma
    // * --> desreferencia: Accede al valor almacenado en la dirección a la que apunta el puntero.
    // & --> direccion de: Devuelve la dirección de memoria de una variable.

    // tambien podemos definir punteros a punteros
    int x = 10;
    int *ptr = &x; // puntero a x
    int **ptr_to_ptr = &ptr; // puntero al puntero de x
    // con esto: *ptr = 10 y **ptrToPtr = 10

    int y = 12;
    *ptr_to_ptr = &y; // ahora ptr apunta a y por lo que *ptr = 12;

    
    return 0;
}
