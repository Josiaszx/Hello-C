


int main()
{
    // ARRAYS
    int arr1[5]; 
    int arr2[] = {1, 2, 3};
    
    // Arrays multidimencionales
    int arr3[3][6];
    int arr4[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    // Aritmetica de punteros
    int array[] = { 2, 4, 6};
    int x = *array; // *array == array[0] == 2
    int y = *(array+1); // *(array+1) == array[1] == 4
    int z = *(array+2); // (*array+2) == array[2] == 6
    
    
    //STRINGS
    //los strings en C se definen como array de caracteres
    char string[] ={'H', 'o', 'l', 'a'};
    // al definir el tamaño de un string siempre debemos definirlo con uno mas que el tamaño de la cadena que queremos
    // Ej.:
    //  -   si quisieramos tener un string con el texto "Hola mundo", deberiamos definirlo con un tamaño de 11 caracteres, ya que siempre C guardara el ultmo lugar para un caracter llamado caracter nulo "\0"
    char saludo[11];

    // tambien se puede inicializar directamente con el texto desedao
    char string2[] = "string 2";

    //como un string es un array, podemos modificar cada caracter por su indice
    string2[0] = 'h'; // --> string2 = "htring 2"

    // para imprimir un array:
    printf("%s", string2); // --> string 2
    // aunque tambien podemos recorrerlo con un bucle

    return 0;
}
