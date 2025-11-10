//Creacion de funciones propias para manejo de cadenas a modo de practica
//todas las funciones son implmentaciones propias basdas en las funciones de string.h

// longitud (sin contar con el caracter nulo) --> strlen()
int mi_strlen(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}


// copiar un string en otro --> strcpy()
void mi_strcpy(char destino[], char origen[]) {

    int i = 0;
    while (origen[i] != '\0') {
        destino[i] = origen[i];
        i++;
    }
    destino[i] = '\0';
}


// copiar n caracteres de un string a otro --> strncpy()
void mi_strncpy(char destino[], char origen[], int n) {
    int i = 0;
    while ((origen[i] != '\0') && (i < n)) {
        destino[i] = origen[i];
        i++;
    }
    destino[i] = '\0';
}


// Concatenar strings --> strcat()
void mi_strcat(char destino[], char origen[]) {
    int destino_index = mi_strlen(destino);
    int i = 0;
    while (origen[i] != '\0') {
        destino[destino_index] = origen[i];
        destino_index++;
        i++;
    }
    destino[destino_index] = '\0';
}


// Concatenar los primeros n elementos de un string a otro --> strncat()
void mi_strncat(char destino[], char origen[], int n) {
    int destino_index = mi_strlen(destino);
    int i = 0;
    while (origen[i] != '\0' && i < n) {
        destino[destino_index] = origen[i];
        destino_index++;
        i++;
    }
    destino[destino_index] = '\0';
}


// Comparar dos strings --> strcmp()
int mi_strcmp(char str1[], char str2[]) {
    if (mi_strlen(str1) < mi_strlen(str2)) {
        return -1;
    }
    if (mi_strlen(str2) < mi_strlen(str1)) {
        return 1;
    }
    int i = 0;
    while (str1[i] != '\0') {
        if (str1[i] != str2[i]) {
            return -1;
        }
        i++;
    }
    return 0;
}