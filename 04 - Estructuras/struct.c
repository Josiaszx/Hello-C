#include <stdio.h>
#include <string.h>

//STRUCT
//perimite almecenar multiples valores relacionados en un solo lugar
struct persona
{
    char nombre[10];
    char apellido[10];
    int edad;
};


//tambien podemos defininir el nombre de la estructura con typedef
typedef struct persona persona; 
// con esto podemos definir una nueva persona como persona prs1; en vez de struct persona prs1;


int main()
{
    struct persona p1; // definimos una variable de tipo struct persona

    // para modificar los campos de p1
    strcpy(p1.nombre, "Juan"); // asignamos el nombre de p1 como Juan
    strcpy(p1.apellido, "Perez"); // asignamos el apellido de p1 como Perez
    p1.edad = 19; // asignamos la edad de p1 como 19


    // mostrar datos
    printf("nombre de p1: %s", p1.nombre);
    printf("apellido de p1: %s\n", p1.apellido);
    printf("edad de p1: %d\n", p1.edad);


    //cargar datos desde scanf()
    struct persona p2;
    scanf("%s", p2.nombre); 
    scanf("%s", p2.apellido); 
    scanf("%d", &p2.edad);


    //Acceso por punteros a structs (utiles cuando pasamos structs como parametros de funciones).
    struct persona *p2ptr = &p2;
    // 1. desrferenciacion
    printf("edad de p2 (mediante puntero): %d\n", (*p2ptr).edad); // p2.edad
    // 2. operador -->
    printf("edad de p2 (mediante puntero): %d\n", p2ptr->edad); // p2.edad


    return 0;
}
