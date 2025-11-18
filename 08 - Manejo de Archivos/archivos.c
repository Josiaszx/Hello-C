
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
    

    return 0;
}