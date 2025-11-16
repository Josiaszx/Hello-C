# Manejo Dinámico de Memoria

Conceptos previos a conocer antes de entender como funciona el manejo dinámico de memoria:

[Stack y Heap](./Stack%20y%20Heap.md)

- Memoria estática: memoria que se asigna al momento de compilar el programa.
- Memora dinámica: memoria que se asigna en tiempo de ejecución (mientras el programa se esta ejecutando).

Para poder manejar correctamente la memoria dinámica utilizamos las funciones de `malloc()`, `calloc()` , `realloc()` y `free()`, todas incluidas en la librería `<stdlib.h>`.

⚠️ Para todas las funciones hay que incluir la biblioteca estándar: 

```c
#include <stdlib.h>
```

## malloc()

`malloc()` (memory allocation) es una función que reserva dinámicamente un bloque de memoria en el heap, retornando un puntero de tipo `void` a la dirección reservada. Recibe como parámetro la cantidad de bytes a reservar.

```c
int *ptr = malloc(64); // reserva un bloque de 64 bytes en el heap y retorna un puntero a dicho bloque
```

⚠️ Es importante liberar la memoria usada luego de terminar de usar el bloque con `free()`.

Normalmente usamos malloc cuando no sabemos que tamaño tendrá un array o cuando utilizamos estructuras de datos mas grandes y complejas.

Tambien es buena practica verificar que malloc no haya retornado un puntero nulo

```c
if (ptr == NULL) {
	printf("No se ha podido reservar memoria");
	return -1;
}
```

## calloc()

`calloc()` (contiguous allocation) al igual que `malloc()`, reserva memoria del heap y retorna un puntero a ella, la diferencia es que `calloc()` “limpia” todos los bits y los asigna a 0 y también requiera de dos parámetros, el numero de elementos, y el tamaño de cada uno.

```c
int elements_number = 10;
int *ptr = calloc(elements_number, sizeof(int)); 
```

con esto `calloc()` reserva un bloque de 40 bytes en el heap, los inicializa todos a 0 y retorna un puntero a la dirección de dicho bloque.

⚠️ Es importante liberar la memoria usada luego de terminar de usar el bloque con `free()`.

## realloc()

`realloc()` (reallocation) es una función que que nos permite reservar mas espacio para un bloque dado. Si puede simplemente expandir el bloque, lo hace, sino, copia los datos a una nueva ubicación en memoria y libera la anterior.

Recibe dos parámetro, un puntero al bloque que queremos modificar y el nuevo tamaño de dicho bloque.

```c
int *ptr = malloc(32); // reservamos un bloque de 32 bytes
ptr = realloc(ptr, 40) // modificamos el tamaño del bloque a 40 bytes
```

Tambien podemos reducir el tamaño de un bloque si le pasamos como parametro un tamaño menor al actual.

```c
int *ptr = malloc(80); // reservamos 80 bytes
ptr = realloc(ptr, 40) // reducimos el bloque 40 bytes
```

## free()

la función free() libera un bloque de memoria del heap. Recibe como parámetro un puntero a la dirección de memoria que queremos liberar.

```c
int *ptr = malloc(32); // reservamos un bloque de 32 bytes
free(ptr) // liberamos los 32 bytes reservados
```

⚠️ Es importante siempre liberar la memoria reservada con malloc, calloc o realloc cuando ya no la necesitemos para que el programa puede saber que ese bloque esta libre, porque si no lo hacemos, dicho bloque quedara inutilizable hasta la finalización del programa.

Tambien es buena practica igualar los punteros a NULL una vez sus direcciones hayan sido liberadas para evitar posibles errores

```c
int *ptr = malloc(32); // reservamos un bloque de 32 bytes
free(ptr); // liberamos los 32 bytes reservados
ptr = NULL; // evita errores 
```