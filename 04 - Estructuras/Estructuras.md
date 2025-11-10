# Estructuras

## Struct

Permite almacenar multiples valores (llamados campos) relacionados en un mismo lugar

**sintaxis:**

```c
struct persona
{
    char nombre[10];
    char apellido[10];
    int edad;
};

```

en este caso creamos una estructura persona cuyos campos serán nombre, apellido y edad.

Para crear un nuevo dato de tipo persona:

```c
struct persona p1; // declaracion de variable de tipo persona
struct persona p2 = {"Juan", "Lopez", 18} //declaracion + inicializacion de campos
```

### Acceso a campos

Para acceder a los campos:

```c
p1.nombre // acceso al campo de nombre
p1.apellido // acceso al campo de apellido
p1.edad // acceso al campo de edad
```

Para acceder a campos de un struct desde un puntero podemos usar dos opciones. Por desreferenciacion y por el operador `-->` 

```c
struct persona *p2ptr = &p2;
// 1. desrferenciacion
printf("edad de p2 (mediante puntero): %d\n", (*p2ptr).edad); // 18
// 2. operador -->
printf("edad de p2 (mediante puntero): %d\n", p2ptr->edad); // 18
```

## Typedef

Permite renombrar tipos de datos

```c
typedef int entero; // definimos a entero como palabra reservada para int
int num; // declaracion normal
entero num1; // declaracion definida (es lo mismo que int num1)
```

Tambien podemos renombrar structs:

```c
    typedef struct persona
    {
        char nombre[10];
        int edad;
    } persona; // agregamos el nombre de la estructura al final
    
    persona p1; // no necitamos volver a escribir struct
```

## Enum

Permite crear un conjunto de identificadores

```c
enum dias {LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO}
```

Con esto definimos una lista donde cada día sera igual a su índice en la lista.

```c
enum dias dia = LUNES; // enrealidad dia = 0;
```

💬 Cada día representa como una clave cuyo valor es su índice en la lista.