#include "binary_trees.h"
/**
 * binary_tree_size - measure the size of a binary tree
 * @tree: pointer to the root node
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t nodes_right, nodes_left, size;

	if (!tree)
		return (0);
	nodes_left = binary_tree_size(tree->left);
	nodes_right = binary_tree_size(tree->right);
	size = (nodes_right + nodes_left) + 1;
	return (size);
}
