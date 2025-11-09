#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <math.h>

void play(int *ptr);

int main(int argc, char** argv) {
   
    char arr[] = "Hola mundo";

    for (int i = 0; i < 11; i++)
    {
        printf("%c", arr[i]);
    }
    
    
    
    
}

void play(int *ptr) {
    *ptr = 21;
}
