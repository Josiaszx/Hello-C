# Manejo de Archivos

En C podemos manejar archivos mediante funciones incluidas en la librería `stdio.h`.

## Abrir archivo

Para abrir un archivo, usamos la función `fopen()`, pasándole como parámetros la ruta del archivo que queremos abrir y el modo en que abriremos el archivo, con esto nos retorna un puntero de tipo `FILE` a dicho archivo.

```c
FILE *archivo = fopen("ejemplo.txt", "r");
```

el segundo parámetro indica con que modo se abrirá el archivo, algunos modos son:

| Modo | Descripcion |
| --- | --- |
| r | Solo lectura, si el archivo no existe retorna NULL |
| w | Solo escritura, si el archivo existe, borra su contenido, si no, crea uno vacio |
| a | Agregar contenido al final del archivo, si el archivo no existe crea uno |
| r+ | Lectura y escritura, comienza al principio |

## Cerrar archivo

Luego de terminar de trabajar con un archivo, es importante cerrarlo y guardarlo, esto se logra con la función `fclose()`.

```c
fclose(archivo); // le pasamos el puntero al archivo que queremos cerrar
```

## Leer caracteres

Con `fgetc()` leemos el caracter que se encuentre en la posición del cursor dentro del archivo. Cada vez que se ejecuta `fgetc()`, se lee el caracter y el cursor se mueve un caracter a la derecha (la posición por defecto del cursor depende del modo en el que se abra el archivo). La función retorna un entero int que equivale al código ASCII del caracter (se hace de esta forma para poder retornar -1 si hay algún error).

Si tenemos el siguiente archivo llamado ejemplo.txt:

```
Este es un archivo de ejemplo
```

Y ejecutamos lo siguiente:

```c
FILE *archivo = fopen("ejemplo.txt", "r");
int letra = fgetc(archivo) // letra = 69 (ASCII(69) = E)
```
Tambien podemos utilizar la función `fgets()` que nos lee una linea completa del texto y lo guarda en un buffer dado. Recibe tres parámetros, la dirección del buffer donde guardara la linea leída, la cantidad maxima de caracteres que podrá leer y el puntero al archivo del que se va a leer. Si todo sale bien, retorna la dirección del buffer dado y si no, retorna `NULL`.

**Ejemplo:**

```c
FILE *archivo = fopen("ejemplo.txt", "r");
char buffer[60]; // buffer donde se guardara la linea leida
if (fgets(buffer, 60, archivo) != NULL) {
	printf("%s", buffer);
}
// esto leera la primera linea del archivo, la guardara en buffer y luego la imprimira
```

💬 `fgets()` lee hasta encontrar un `\n`, un `EOF`, o se llegue a la cantidad maxima de caracteres definida en los parámetros.

## EOF (End Of File)

EOF es una constante definida en `stdio.h` que representa el final de un archivo, típicamente igual a -1. Es muy util para saber cuando parar al recorrer archivos caracter por caracter.

Ejemplo de uso:

```c
FILE *archivo = fopen("ejemplo.txt", "r");
int carcater;
while ((caracter = fgetc(archivo)) != EOF) { 
	printf("%c", caracter); // imprima er archivo caracter a caracter
}
// el bucle terminara cuando el cursor llegue al final del archivo
```

Con esto podemos imprimir un archivo completo caracter por caracter.

Como extra también podemos validar el while con la función `feof()`, que devuelve 1 cuando el caracter leído corresponde a `EOF`.