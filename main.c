#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point for testing binary_tree_node
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    if (root == NULL)
    {
        fprintf(stderr, "Failed to create root node\n");
        return (1);
    }
    printf("Node created: %d\n", root->n);
    printf("Parent: %p\n", (void *)root->parent);
    printf("Left: %p\n", (void *)root->left);
    printf("Right: %p\n", (void *)root->right);

    free(root);
    return (0);
}

