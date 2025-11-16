// El preprocesador en C es una herramienta que se ejecuta antes de la compilación del código fuente.
// Utiliza directivas especiales que comienzan con el símbolo '#' para llevar a cabo estas tareas.
// Prepara el código fuente para que pueda ser compilado correctamente por el compilador.

#include <stdio.h> // internamente, el preprocesador reemplaza esta línea con el contenido del archivo stdio.h

// definir constantes
#define PI 3.14159 // define una constante llamada PI con el valor 3.14159
#define MAX 100 // define una constante llamada MAX con el valor 100

// macros ... funciones en línea
#define CUADRADO(x) (x * x) // define una macro que calcula el cuadrado de un número


int main() {
    // usar las constantes definidas
    printf("El valor de PI es: %f\n", PI);
    printf("El valor maximo es: %d\n", MAX);

    // usar la macro definida
    int num = 5;
    printf("El cuadrado de %d es: %d\n", num, CUADRADO(num));

    // error ... genera un error en tiempo de compilacion
   // #error "error generardo por la directiva #error" --> descomentar esta línea para generar un error

    // condicionales ... compilar código según ciertas condiciones
#if MAX > 100
    printf("el valor maximo es mayor a 100\n"); // este bloque se compila solo si MAX es mayor a 100
#else
    printf("el valor maximo es menor o igual a 100\n"); // este bloque se compila si MAX es menor o igual a 100
#endif // fin de la directiva condicional


    return 0;
}