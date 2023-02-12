#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

//initialise swap function
void swap(int *a, int *b);

int main(void)
{
    //this creates swap memory
    int x = 1;
    int y = 2;
    printf("x is %i and y is %i\n", x, y);
    swap(&x, &y);
    printf("x is %i and y is %i\n", x, y);
}

void swap(int *a, int *b)
{
    int tmp = *a;
    //go to the adress behind pointer a
    *a = *b;
    *b = tmp;
    //these variables turn into garbage values after its use case has finished
}