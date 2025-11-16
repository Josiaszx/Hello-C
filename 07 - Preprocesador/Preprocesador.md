# Preprocesador

El preprocesador de C es un programa que se opera sobre el código fuente antes de la compilación de dicho código. Se encarga de ejecutar las directivas dadas con #.

## Include

Copia el contenido del archivo dado dentro del código.

```c
#include <stdio.h> // directiva para incluir la libreria stdio.h
// copia todo el codigo de stdio.h aqui ...
// ...
// ...
// ...

int main() 
{
	return 0;
}
```

## Define

Define macros, una vez el procesador encuentre el nombre de un macro en el código, lo reemplaza por su valor para que el compilador pueda entenderlo.

```c
#define PI 3.14
int main()
{
	printf("el valor de pi es: %f", PI); // --> el valor de pi es: 3.14
	// el preproceador reemplaza PI por su valor definido
	return 0;
}
```

Tambien podemos simular funciones

```c
	#define CUADRADO(x) (x * x)
	int main()
	{
		printf("el cuadrado de 2 es : %d", CUADRADO(2)); // --> el cuadrado de 2 es 4
		return 0;
	}
```

El preprocesador toma el argumento dado en el primer paréntesis y ejecuta la operación del segundo paréntesis, luego ubica el valor retornado en lugar donde se llamo al macro.

## Error

Permite lanzar errores

```c
int main() 
{
	#error "Error lanzado mediante directiva"
}
```

El programa no se compilara y mostrara el mensaje dado en el error.

## If, else

Permite compilar ciertos bloques de código dada una condición.

```c
#define MAX 100
int main() 
{
	#if MAX == 100 
	printf("El maximo es 100") // este bloque se compilara solo si MAX es igual a 100
	#else 
	printf("El maximo no es 100") // esto bloque se compilara solo si MAX no es igual a 100
	#endif // finaliza la directiva condicional
	return 0;
}
```

En este caso solo compilar el bloque del primer printf.