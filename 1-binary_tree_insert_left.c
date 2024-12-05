#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of a parent.
 * @parent: A pointer to the parent node.
 * @node: The node to insert as the left child.
 *
 * Return: A pointer to the inserted node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, binary_tree_t *node)
{
    if (!parent || !node)
        return (NULL);

    if (!parent->left)
    {
        parent->left = node;
        node->parent = parent;
        return (node);
    }

    node->left = parent->left;
    parent->left->parent = node;
    parent->left = node;
    node->parent = parent;

    return (node);
}

