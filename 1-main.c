#include "binary_trees.h"
#include <stdio.h>

int main(void)
{
    binary_tree_t *root = NULL;
    binary_tree_t *node = NULL;

    // Create a root node
    root = binary_tree_node(NULL, 10);

    // Create a new node to insert on the left
    node = binary_tree_node(NULL, 12);
    binary_tree_insert_left(root, node);  // Insert left node

    // Create another new node to insert on the left
    node = binary_tree_node(NULL, 6);
    binary_tree_insert_left(root, node);  // Insert another left node

    // Add more tests or print tree structure here if needed

    return (0);
}

