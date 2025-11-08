
#include <stdio.h>


int main()
{
    // 1 - NUMEROS ENTEROS
    //el tamaño real de los numeros dependen de la arquitectura del sistema y del compilador
    //short: 2 bytes [-32.768 hasta 32.767]
    short num1;
    
    //int: 4 bytes [-2.147.483.648 hasta 2.147.483.647]
    int num2;

    //long: 4 bytes [-2.147.483.648 hasta 2.147.483.647]
    long num3;

    //long long: 8 bytes [−9.223.372.036.854.775.807 hasta 9.223.372.036.854.775.806]
    long long num4;

    // 1.2 - NUMEROS ENTEROS SIN SIGNO
    // si no utilizaremos numeros negativos podemos usar el tipo de numoero como unsigned
    unsigned short num5; // --> 0 hasta 65.535
    unsigned int num6; // --> 0 hasta 4.294.967.295
    unsigned long num7; // --> 0 hasta 4.294.967.295 
    unsigned long long num8; // --> 0 hasta 2^64 - 1
    


    // 2 - NUMEROS DECIMALES 
    // float: 4 bytes con ~ 7 digitos decimales de precision
    float num9 = 12.43f; // usamos el sufijo f luego del numero para definirlo como float
    
    //double: 8 bytes ~ 15 digitos decimales de prescision
    double num10 = 13.987;


    // 3 - CARACTER
    //char: representacion de un caracter ASCII
    char letra = 'a';
 

 
    return 0;
}
