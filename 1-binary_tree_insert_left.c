#include "binary_trees.h"
/**
 * binary_tree_insert_left: inserts a node as the left-child of another node
 * @parent: root of the tree
 * @value: new node
 * Return: pointer to new node or NULL on failure or if parent is NULL*
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;
    if (!parent)
    {
        return (NULL);
    }
    /*create new node*/
    new_node = binary_tree_node(parent, value);
    /*insert to left*/
    if (parent->left != NULL)
    {
        new_node->left = parent->left;
        parent->left->parent = new_node;
    }
    parent->left = new_node;
    return(new_node);
}