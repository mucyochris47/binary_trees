#include "binary_trees.h"
#include <stdio.h>

int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    printf("Node created: %d\n", root->n);
    printf("Parent: %p\n", (void *)root->parent);
    printf("Left: %p\n", (void *)root->left);
    printf("Right: %p\n", (void *)root->right);

    return (0);
}

