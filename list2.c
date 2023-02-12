#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
    //struct node *left
    //struct node *right
}
node;
//creates an alias 'node' of 'struct node'

int main(void)
{
    node *list = NULL;

    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        free(list);
        return 1;
    }
    n->number = 2;
    n->next = NULL;
    list->next = n;

    //Add a number to list
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        free(list->next);
        free(list);
        return 1;
    }
    n->number = 3;
    n->next = NULL;
    list->next->next = n;

    // print number
    for (node *tmp = list; tmp != NULL; tmp = tmp->next)
    {
        printf("%i\n",tmp->number);
    }

    // free list
    while (list != NULL)
    {
        //point at same thing that list is pointing to (aka node 1 at first)
        node *tmp = list->next;
        
        free(list);
        list = tmp;
    }
    return 0;
}