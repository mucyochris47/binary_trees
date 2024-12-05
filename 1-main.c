#include "binary_trees.h"

int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    printf("Node created: %d\n", root->n);
    return (0);
}

