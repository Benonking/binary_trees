#include "binary_trees.h"
/**
 * binary_tree_is_full- check if binary tree node is full
 * @tree: pointer to the root node
 * Return: 1 id true otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_side, right_side;

	if (!tree)
	{
		return (0);
	}
	if (!tree->right && !tree->left)
	{
		return (1);
	}
	left_side = binary_tree_is_full(tree->left);
	right_side = binary_tree_is_full(tree->right);

	if (left_side == 0 || right_side == 0)
	{
		return (0);
	}
	return (1);
}
