#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);

    if (root)
        printf("Node created successfully with value: %d\n", root->n);
    else
        printf("Failed to create node\n");

    return (0);
}

