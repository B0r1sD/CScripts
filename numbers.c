#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numbers[] = {0,2,4,5,6,7,8};

    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == -1)
        {
            printf("There it is!\n");
            return 0;
        }
    }
    printf("There is none\n");
    return 1;
}