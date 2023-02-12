#include <stdio.h>

#include <stdlib.h>

int main(void)
{
    char *x = malloc(4);
    printf("x: ");
    scanf("%s",x);
    printf("%s\n",x);
}