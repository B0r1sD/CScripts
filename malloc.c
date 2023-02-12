#include <stdio.h>
#include <stdlib.h>

//binky time
int main(void)
{
    //initialise pointers (that don't point to anything yet)
    int *a;
    int *b;

    //allocate memmory space for the pointees = heap (use free to free up this space afterwards to prevent stack overflow)
    a = malloc(sizeof(int));

    *a = 42;
    b = a;
    *b = 13;

    printf("a = %i, b = %i\n", *a, *b);
    printf("a = %p, b = %p\n", a, b);

    free(a);
}