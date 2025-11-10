# Strings y sus Métodos

En C, un string es simplemente un **array unidimensional de caracteres** (`char []`) que termina con un carácter especial llamado **carácter nulo** (`\0`).
Una cadena debe ser declarada con un tamaño suficiente para contener todos los caracteres más el caracter nulo.

```c
// Array de 6 caracteres: 'H', 'o', 'l', 'a', '\0'
char saludo[5] = {'H', 'o', 'l', 'a', '\0'}; 

// Forma abreviada y preferida: el compilador añade el '\0' automáticamente
char nombre[] = "Dennis"; 
// El tamaño real de 'nombre' es 7 (6 letras + '\0')
```

Debido a que una cadena es un array, su nombre es un puntero al primer caracter.

```c
char str1[20] = "Hola Mundo"; 
str1[0] = 'C'; // --> str1 = "Cola Mundo"
```

## Métodos de strings

Todos los métodos para manejo de strings están incluidos en la librería <string.h>

```c
// agregar libreria
#include <string.h>
```

### Longitud de string

Con `strlen()` retornamos la longitud del string sin contar el caracter nulo.

```c
char palabra[] = "Programar";
int longitud = strlen(palabra);  // --> longitud = 9
```

### Copiar un string en otro

Con `strcpy(destino, origen)` copiamos el string `origen` en `destino`.

```c
char origen[] = "Hola";
char destino[10];
strcpy(destino, origen);  // --> destino = "Hola"
```

⚠️ Es importante asegurarse de que `destino` tenga espacio suficiente para poder guardar el string a copiar, de lo contrario podríamos tener un desbordamiento de buffer.

Tambien podemos copiar los primero n caracteres de un string a otro con `strncpy(destino, origen, n)`, donde copiamos los primeros n caracteres de `origen` en `destino`.

```c
char origen[] = "Programar";
char destino[5];
strncpy(destino, origen, 4);
destino[4] = '\0';  // importante agregar '\0' manualmente
```

⚠️ Si no copiamos todos los elementos debemos agregar el caracter nulo manualmente.

⚠️ Es importante asegurarse de que `destino` tenga espacio suficiente para poder guardar el string a copiar, de lo contrario podríamos tener un desbordamiento de buffer.

### Concatenar strings

Con strcat(destino, origen) concatenamos el aray origen en destino.

```c
char saludo[20] = "Hola, ";
char nombre[] = "Mundo";
strcat(saludo, nombre);  // --> "Hola, Mundo"
```

⚠️ Es importante asegurarse de que `destino` tenga espacio suficiente para poder guardar el string a concatenar, de lo contrario podríamos tener un desbordamiento de buffer.

Tambien podemos concatenar los primero n elementos con `strncat(destino, origen, n)`

```c
char a[20] = "Buen ";
char b[] = "día";
strncat(a, b, 2);  // a = "Buen dí"

```

### Comparar dos strings

Con `strcmp(str1, str2)` comparamos los strings `str1` y `str2`, del que podrá retornar uno de los siguientes:

- 0 si son iguales
- Valor negativo si `str1 < str2`
- Valor positivo si `str1 > str2`

```c
char a[5] = "hola";
char b[5] = "hola";
strcmp(str1, str2) // --> 0
```
mas info: https://www.w3schools.com/c/c_ref_string.php