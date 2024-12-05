#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h" /* Ensure this is the correct header file */

/**
 * main - Entry point for testing binary_tree_node function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *node;

    node = binary_tree_node(NULL, 98);
    if (node == NULL)
    {
        fprintf(stderr, "Node creation failed\n");
        return (1);
    }
    printf("Node created: %d\n", node->n);
    printf("Parent: %p\n", (void *)node->parent);
    printf("Left: %p\n", (void *)node->left);
    printf("Right: %p\n", (void *)node->right);

    /* Free the allocated memory */
    free(node);

    return (0);
}

