#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <math.h>

void play(int *ptr);

int main(int argc, char** argv) {
    for (int i = 32; i <= 126; i++)
    {
        // char car = i;
        printf("%c", i);
    }
    
    
}

void play(int *ptr) {
    *ptr = 21;
}
