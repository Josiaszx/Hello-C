# Arrays y aritmética de punteros

Los arrays en C se inicializan agregando corchetes (en los cuales indicamos la cantidad de elementos) luego del nombre del array

```c
int array[5]; // array de 5 enteros
int array2[5] = {0, 1, 2, 3, 4} // array definido e inicializado
```

- Acceso por indices
- Los elementos se guardan contiguamente en memoria
- El nombre de un array por si solo representa un puntero al primer elemento

## Arrays multidimensionales

Se declaran e inicializan de la siguiente forma:

```c
int array[3][3]; // array 3x3
int array2[2][2] = { // array 2x2
	{1, 2},
	{3, 4}
}
```

## Arrays, punteros y aritmética de punteros

El acceso a los array se realiza a traves de punteros ya que el nombre del array en si mismo (sin corchetes) es un puntero al primer elemento de dicho array, esto es:

```c
int arr[5] = {1, 5, 10, 15, 20}
// *arr = arr[0] = 1
// &arr = &arr[0]
```

ahora, también podemos operar de la siguiente forma:

```c
int a = *arr; // a = arr[0] = 1
int b = *(arr+1); // b = arr[1] = 5
int c = *(arr+2); // c = arr[2] = 10
int d = *(arr+3); // d = arr[3] = 15
int b = *(arr+4); // e = arr[4] = 20
```

A esto se le llama **Aritmética de Punteros**, donde al tener la dirección de memoria del primer elemento del array, es decir `arr[0]`, guardado en `arr`, podemos sumarle valores a `arr` para ir accediendo a los demas elementos.

Para lograr esto, internamente el compilador primero define el tamaño de cada elemento del array, en este caso seria de 4 bytes ya que es lo que se reserva en memoria para cada `int` de la lista. Luego al ejecutar `arr+1`, lo que hace es sumarle, en este caso (4*1) al valor de `arr` para obtener el inicio del siguiente elemento `int` del array, es decir `arr+4*1`. Entonces, como caso general, para acceder a un elemento $n$ dentro de un array:

```c
arr[n] == *(arr+n)
```

El compilador devolverá el elemento:

$$
*(arr+(sizesof(tipo) \times n))
$$

donde, en nuestro caso:

```c
n*sizeof(int) == n*4
```

💬 el operador `sizeof()` retorna el tamaño en bytes del parámetro dado.