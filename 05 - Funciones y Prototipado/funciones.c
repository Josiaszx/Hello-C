//FUNCIONES
//las funciones son bloques de codigo que realizan una tarea especifica

//PROTOTIPADO DE FUNCIONES
//consiste en declarar una funcion para que el compilador sepa de su existencia
int suma(int a, int b); //prototipo de la funcion suma
//se indica el tipo de dato que retorna, el nombre de la funcion y los parametros que recibe
//tambien se pueden prototipar funciones desde un archivo de cabecera e importarlo con #include

int main()
{
    int x = 5;
    int y = 10;
    int resultado = suma(x, y); // --> resultado = 15
    return 0;
}


//DEFINICION DE FUNCIONES
//se implementa la logica de la funcion
int suma(int a, int b) //definicion de la funcion suma
{
    return a + b;
}