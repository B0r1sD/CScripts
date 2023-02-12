#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node
{
    int number;
    struct node *left;
    struct node *right;
}
node;

// Here, *tree is a pointer to the root of our tree.
bool search(node *tree, int number)
{
    // We need a base case, if the current tree (or part of the tree) is NULL,
    // to return false:
    if (tree == NULL)
    {
        return false;
    }
    // Now, depending on if the number in the current node is bigger or smaller,
    // we can just look at the left or right side of the tree:
    else if (number < tree->number)
    {
        return search(tree->left, number);
    } 
    else if (number > tree->number)
    {
        return search(tree->right, number);
    }
    // Otherwise, the number must be equal to what we're looking for:
    else {
        return true;
    }
}