#include "binary_trees.h"
/**
 * binary_tree_is_root- check if node is root
 * @node: pointer to node
 * Return: 1 if yes or 0 is no if node doent exist return 0
 */
int binary_tree_is_root(binary_tree_t *node)
{
    if (!node)
    {
        return (0);
    }
    if (node->parent == NULL)
    {
        return (1);
    }
    return (0);
}
