# Stack y Heap

El Heap (montículo) y el Stack (pila) son dos regiones diferentes en memoria que se el sistema operativo asigna a nuestro programa.

## Stack

El stack es una region en memoria designada para el manejo y proceso de variables temporales y locales gestionada por el compilador. Esta region se comporta como una estructura pila donde los últimos valores agregados son los primeros en eliminarse. Esto permite optimizar el uso de la memoria ya que al seguir el principio de LIFO (first in, first out) la memoria no se fragmenta, es decir no quedan huecos entre las direcciones de memoria que se van siendo liberadas a medida que el programa se ejecuta.

**Características:**

- Memoria estática en tamaño, se determina en tiempo de compilación y no puede variar.
- Muy rápida de acceso
- Tamaño limitado, típicamente de entre 1-8 MB dependiendo del sistema
- Alberga variables locales, parámetros y direcciones de retorno de funciones, entre otros.

Como el Stack tiene una cantidad limitada de memoria disponible, el hecho de querer trabajar con estructuras de datos mas complejas y grandes se dificulta. Es por ello que se creo el Heap.

## Heap

El Heap es otra region en memoria designada principalmente para el almacenamiento de information. A diferencia del Stack, Heap es gestionada manualmente. La diferencia con el Stack es que en el Heap podemos ubicar datos en donde sea, esto nos permite manejar estructuras dinamicas y de mayor tamaño. Pero esto a su vez nos causa un problema, que es el hecho de que a medida de que vamos utilizando y liberando espacio, estos se irán fragmentando, haciendo mas difícil la optimización del uso de la memoria.

**Características:**

- Mayor tamaño, puede albergar hasta varios GB, limitado únicamente por la RAM total del sistema
- Mas lenta, requiere buscar espacios disponibles y manejar la fragmentación
- Desorganizada
- Alberga estructuras dinámicas, datos de tamaño desconocido en tiempo de compilación, etc.

Cuando el Heap se queda sin espacio disponible, hace una llamada al sistema operativo solicitando mas espacio, este responde con un nuevo bloque de memoria disponible para su uso. Este proceso es bastante costoso computacionalmente por lo que agrega mas tiempo al la hora de trabajar en el Heap.

## Implementación

Para poder trabajar estructuras de datos complejas o datos de tamaño dinámico, se guarda la estructura o el dato en el Heap y en el Stack se guarda una referencia o puntero a dicha estructura. Para lograr esto en C utilizamos las funciones `malloc()` y `calloc()`, estas funciones reservan espacio en el Heap y retornan un puntero a dichas posiciones. En java esto se hace automáticamente al instanciar objetos, donde el objeto en si se guarda en el Heap y la referencia a dicho objeto se guarda en el Stack.

```c
//si tenemos una estructura de dato de tipo arbol
struct arbol *arbol_en_heap = malloc(sizeof(struct arbol));
// se crea una estructura de tipo arbol en el heap
// el puntero arbol_en_heap se guarda en el Stack
// de esta forma accedemos a un elemento del heap desed el stack por medio del puntero
// arbol_en_heap
```

Luego, para liberar el espacio utilizado por dicha estructura, en C usamos la función `free()`, pasándole como argumento el puntero a la estructura (y también seteando el puntero a `NULL` por buena practica). Es importante liberar la memoria ya que si no lo hacemos, la memoria ocupada quedara inutilizable (memory leak). En Java de esto se encarga automáticamente el garbage collector.

En general, usamos la memoria en Heap cuando:

- No conocemos el tamaño de los datos en tiempo de compilación.
- Necesitamos estructuras de datos de tamaño dinámico.
- Trabajamos con datos grandes.
- etc.

Si no necesitamos ninguna de las anteriores características, por norma general es mejor simplemente  trabajar con el Stack.