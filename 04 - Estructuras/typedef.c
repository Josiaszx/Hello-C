//TYPEDEF
//sirve para renombrar tipos de datos
// Ej.:
typedef int entero; // renombramos el tipo int a entero
int main()
{
    // podemos declarar un numero con int o con entero
    int num1;
    entero num2;
    
    // tambien podemos renombrar structs con typedef
    typedef struct persona
    {
        char nombre[10];
        int edad;
    } persona;
    
    persona p1; // no necitamos volver a escribir struct
    return 0;
}
