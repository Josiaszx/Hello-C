# Manejo del cursor dentro de archivos

Para poder manejar manualmente el cursor dentro de archivos, usamos las funciones `ftell()` y `fseek()`.

## ftell()

Recibe como parámetro un puntero de tipo FILE y retorna la ubicación del cursor dentro del archivo dado. Si hay un error retorna -1.

```c
FILE *archivo = fopen("archivo.txt", "r");
long pos = ftell(archivo); // pos = 0
```

## fseek()

Permite mover el cursor. Recibe tres parámetros, un puntero a un archivo, la cantidad de bytes a mover y por ultimo la posición relativa desde donde se moverán los bytes dados en el parámetro anterior.

```c
FILE *archivo = fopen("archivo.txt", "r");
long pos = fseek(archivo, 5, FSEEK_SET);
// en archivo el cursor se movera 5 bytes desde el principio del archivo
```

Los posibles parámetros para el tercer parámetro son:

- FSEEK_SET: se moverá con respecto al principio del archivo
- FSEEK_END: se moverá con respecto al final del archivo
- FSEEK_CUR: se moverá con respecto a la posición actual

La función retorna 0 si todo salió bien y cualquier otro numero en caso de error.