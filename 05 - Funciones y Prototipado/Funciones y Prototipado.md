# Funciones y Prototipado

Una **función** es un bloque de código independiente y auto-contenido diseñado para realizar una tarea específica. Su uso promueve la **modularidad**, la **reutilización de código** y simplifica el mantenimiento.

**Sintaxis:**

```c
// Tipo de Retorno | Nombre | Parámetros
int sumar_numeros(int a, int b) { 
    // Cuerpo
    int resultado = a + b;
    return resultado; // Devuelve un entero
}
```

## Prototipado de funciones

El **prototipo de función** (también llamado **declaración de función**) es una línea que le informa al compilador sobre la existencia y la estructura de una función **antes** de que esta sea utilizada o completamente definida.

Es necesario porque el compilador de C procesa el código secuencialmente (de arriba hacia abajo). Si una función (por ejemplo, `main`) llama a otra función `sumar_numeros` antes de que el compilador haya visto su definición completa, el compilador no sabrá cuánta memoria asignar para los argumentos que se le están pasando ni qué tipo de dato esperar como valor de retorno.

El prototipo resuelve esto, permitiendo usar una función antes de que su cuerpo haya sido escrito.

**Sintaxis:**

```c
// Forma completa (incluye nombres de parámetros):
int sumar_numeros(int a, int b);

// Forma mínima (solo incluye tipos):
int sumar_numeros(int, int);
```

💬Normalmente se suelen prototipar y declarar las funciones en archivos deferentes al principal