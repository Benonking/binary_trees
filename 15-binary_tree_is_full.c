#include "binary_trees.h"
/**
 * binary_tree_is_full- check if binary tree node is full
 * @tree: pointer to the root node
 * Return: 1 id true otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (1);
	}
	if (!tree->right && !tree->left)
	{
		return (1);
	}
	if (tree->left && tree->right)
	{
		return (binary_tree_is_full(tree->right) && binary_tree_is_full(tree->left));
	}
	return (0);
}
