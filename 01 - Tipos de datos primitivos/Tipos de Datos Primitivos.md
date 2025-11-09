# Tipos de Datos Primitivos

## Enteros (con signo)

Existen tres tipos de enteros, los cuales son: `short`, `int` y `long` .

| Tipo | Tamaño | Rango |
| --- | --- | --- |
| short | 2 bytes | -32.768 hasta 32.767 |
| int | 4 bytes | -2.147.483.648 hasta 2.147.483.647 |
| long | 4 bytes | -2.147.483.648 hasta 2.147.483.647 |

⚠️ El tamaño real de cada tipo depende en verdad de la arquitectura del sistema y del compilador.

Tambien es posible tener un numero de hasta 8 bytes definiendo un tipo de dato como `long long`.

Ej.:

```c
long long num ; // numero con un espcaio asignado de 8 bytes (64 bits) 
```

## Enteros (sin signo)

Los enteros sin signo nos permite guardar los números con un bit mas de espacio (porque no necesita usar uno para el signo). Para definir un numero sin signo, agregamos `unsigned` antes del tipo. Ej.:

```c
unsigned short; // 2 bytes
unsigned int; // 4 bytes
unsigned long; // 4 bytes
unsigned long long; // 8 bytes
```

| Tipo | Tamaño | Rango |
| --- | --- | --- |
| short | 2 bytes | 0 hasta 65.535 |
| int | 4 bytes | 0 hasta 4.294.967.295 |
| long | 4 bytes | 0 hasta 4.294.967.295 |
| long long | 8 bytes | 0 hasta 2^64 - 1 |

## Decimales

Los tipos decimales pueden ser 2: `float` y `double`.

| Tipo | Tamaño | Precision |
| --- | --- | --- |
| float | 4 bytes | ~ 7 digitos decimales |
| double | 8 bytes | ~ 15 digitos decimales |

⚠️ Al definir un float, agregamos el sufijo `f` luego del numero

```c
float num = 2.12f;
```

## Caracteres

Para definir un dato de tipo caracter, lo hacemos con `char`, y la letra la ponemos entre comillas simples.

```c
char letra = 'a'; // 1 byte
```

Siempre usando el modelo ASCII.

Tambien podemos asignarle un valor numérico, en ese caso a la variable se le asignara el caracter cuyo código en la tabla ASCII coincida con el numero dado.

```c
char letra = 77; // letra = 'M'
```