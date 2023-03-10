#include "binary_trees.h"
/**
 * binary_tree_node - create binary tree node
 * @parent: root node
 * @value: value of new_node
 * @parent: root of tree
 * Return: new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->right = NULL;
	new_node->left = NULL;
	new_node->parent = parent;
	new_node->n = value;
	return (new_node);
}
