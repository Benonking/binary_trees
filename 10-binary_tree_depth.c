#include "binary_trees.h"
/**
 * binary_tree_depth - measure the depth of a binary tree
 * @tree: pointer to the root node
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || !tree->parent)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
