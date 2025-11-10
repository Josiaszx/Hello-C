#include <stdio.h>
//ENUM
//perimite crear un conjunto de identificadores
enum dias {LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO};
// cada elemento en realidad vale el valor de su indice

int main(int argc, char const *argv[])
{
    enum dias dia1 = LUNES;
    // en realidad se guarada como numero, en este caso dia1 = 0;

    printf("numero de dia: %d\n", dia1); // --> numero de dia: 0
    printf("%d", dia1 == 0); // --> 1
    return 0;
}
