#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;
    int **c = &p;
    printf("%p\n",p);
    printf("%p\n",c);

    
}