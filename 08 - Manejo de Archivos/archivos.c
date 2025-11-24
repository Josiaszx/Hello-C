
#include <stdio.h>

// Manejo básico de archivos en C
int main() {
   
    FILE *archivo; // puntero al archivo
    char nombreArchivo[] = "ejemplo.txt"; // dirección del archivo

    archivo = fopen(nombreArchivo, "r"); // abrir archivo en modo lectura
    
    // Verificar si el archivo se abrió correctamente
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo %s\n", nombreArchivo);
        return 1;
    }

    // recorrer el archivo carácter por carácter hasta el final
    int caracter;
    while ((caracter = fgetc(archivo)) != EOF) {
	printf("%c", caracter);
    }
    printf("\n\n");
    
    // recorrer el archivo mediante fgets()
    char buffer[60];
    rewind(archivo); // regresar el cursor al inicio del archivo
   
    // fgets lee una línea completa o hasta el tamaño del buffer
    while (fgets(buffer, sizeof(buffer), archivo) != NULL) {
        printf("%s", buffer);
    }


    fclose(archivo); // cerrar el archivo

    return 0;
}