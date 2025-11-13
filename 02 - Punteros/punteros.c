#include <stdio.h>

void saludo();
int sumar(int a, int b);

int main()
{
    //PUNTEROS
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

    
    //PUNTEROS A FUNCIONES
    //un puntero a funcion es una variable que guarda la direccion de memoria de una funcion
    void (*ptr_funcion)() = &saludo;
    // void --> tipo de dato que retorna la funcion
    // (*ptr_funcion) --> define que es un puntero a funcion (es importante los parentesis)
    //() --> indica los parametros que recibe la funcion (en este caso ninguno)
    // &saludo --> asigna la direccion de memoria de la funcion saludo al puntero
    ptr_funcion(); // llama a la funcion saludo a traves del puntero

    int (*ptr_suma)(int, int) = &sumar;
    // int --> tipo de dato que retorna la funcion
    // (*ptr_suma) --> define que es un puntero a funcion
    //(int, int) --> indica los parametros que recibe la funcion (en este caso dos enteros)
    // &sumar --> asigna la direccion de memoria de la funcion sumar al puntero

    int resultado = ptr_suma(5, 7); // llama a la funcion sumar a traves del puntero
    printf("Resultado de la suma: %d\n", resultado); // --> Resultado de la suma: 12



    return 0;
}


void saludo()
{
    printf("Hola, soy una funcion!\n");
}

int sumar(int a, int b)
{
    return a + b;
}
