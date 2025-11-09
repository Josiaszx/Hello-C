# Punteros

En C, un puntero es una variable que guarda una dirección de la memoria.

Para entender esto, antes es necesario entender dos operadores, `*` y `&`:

- Operador `java*` : Obtiene el valor guardado en la dirección a la que apunta el puntero y también se utiliza para definir el puntero.

- Operador `&` : Obtiene la dirección de la memoria de la variable a la que se la aplique.

Para definir un puntero siempre utilizaremos como tipo de dato el mismo tipo de dato que la variable a cuya dirección de memoria apuntaremos.

**Ejemplo:**

Si tenemos una variable `x` y definimos un puntero que apunte la dirección de memoria donde se guarda la variable `x`, tendríamos:

```c
int x = 10;
int *ptr = &x; // ptr apunta a la direccion de x
```

- Con `*ptr` definimos un puntero llamado `ptr`
- Con `&x` obtenemos la dirección en memoria de la variable `x` y se la asignamos a `ptr`.
- `ptr` lo definimos como `int` ya que apuntara a la dirección de una variable de ese tipo.

El operador `*` aparte de definir un puntero, también nos permite obtener el valor guardado dentro de una dirección en memoria:

```c
int y = *ptr; // y tomara el valor guardado en la direccion que guarda ptr
```

- Con `*ptr` obtenemos el valor que hay en la ubicación que guarda `ptr` y se la asignamos a `y`.

Con esto, siguiendo con el ejemplo anterior, ahora `y` vale 10 ya que `ptr` guarda la dirección del valor de `x` y `x` es igual a 10.

## Punteros a punteros

Tambien es posible crear puntero a punteros, esto simplemente añadiendo otro `*` al nombre del puntero. 

**Ejemplo:**

```c
int x = 10;
int *ptr = &x;
int **ptr_to_ptr = &ptr; // puntero a la direccion de otro puntero
```

Con esto definimos un puntero que apunta a otro puntero que apunta o un entero.

Luego, si queremos modificar la dirección a la que apunta `ptr` podemos hacerlo de la siguiente forma:

```c
int x2 = 30;
*ptr_to_ptr = &x2; // ahora *ptr = 30
```

Con esto modificamos la dirección a la que apunta `ptr`

Y de esta forma, si seguimos agregando mas `*` podemos definir punteros a punteros n veces.