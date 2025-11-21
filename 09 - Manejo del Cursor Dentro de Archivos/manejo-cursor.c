#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *archivo = fopen("ejemplo.txt", "r"); // Abrir archivo en modo lectura y escritura
    
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo\n");
        return 1;
    }

    // ftell() para obtener la posición actual del cursor
    long posicion = ftell(archivo);
    printf("Posicion inicial del cursor: %ld\n", posicion);

    // Leer algunos caracteres
    for (int i = 0; i < 5; i++)
    {
        fgetc(archivo);
    }
    
    posicion = ftell(archivo);
    printf("Posicion del cursor despues de leer 5 caracteres: %ld\n", posicion);

    // fseek() para mover el cursor a una posición específica
    // recibe como parámetros el archivo, el desplazamiento y el origen
    fseek(archivo, 10, SEEK_SET); // Mover el cursor a la posición 10 (contando desde el inicio del archivo)
    posicion = ftell(archivo);
    printf("Posicion del cursor despues de fseek a 10: %ld\n", posicion);

    // Mover el cursor 5 posiciones adelante desde la posición actual
    fseek(archivo, 5, SEEK_CUR);
    posicion = ftell(archivo);
    printf("Posicion del cursor despues de mover 5 posiciones adelante: %ld\n", posicion);

    // Mover el cursor al final del archivo
    fseek(archivo, 0, SEEK_END);    
    posicion = ftell(archivo);
    printf("Posicion del cursor al final del archivo: %ld\n", posicion);

    fclose(archivo); // Cerrar el archivo
    return 0;
}
