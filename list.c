#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Dynamically allocate 
    int *list = malloc(3 * sizeof(int));
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    //time passes

    //resize old array to be of size 4
    int *tmp = realloc(list, 4*sizeof(int));
    if (tmp == NULL)
    {
        free(list);
        return 1;
    }

    //deleted loop that adds numbers from list to tmp

    //add 4th number to array
    tmp[3] = 4;

    //if not free'd, leaks are detected via Valgrind
    // free(list);

    list = tmp;


    for (int i = 0; i < 4; i++)
    {
        printf("%i\n",list[i]);
    }
    free(list);
    return 0;
}

//typedef, struct

typdef struct node
{
    int number;
    struct node *next;
}
node;