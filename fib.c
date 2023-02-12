#include <stdio.h>
int main(void)
{
    int x, y, z;
    while (1) {
        x = 0;
        y = 1;
    do {
        z = x + y;
        x = y;
        y = z;
        printf("%i\n",x);
        } while (x < 255);
    }
}