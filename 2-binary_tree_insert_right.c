#include "binary_trees.h"
/**
 * binary_tree_insert_right- insert node as the
 * right-child node of another node
 * @parent: root of node
 * @value: value of new node
 * Return: pointer to the created node or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
	{
		return (NULL);
	}
	new_node = binary_tree_node(parent, value);
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
