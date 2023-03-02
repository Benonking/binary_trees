#include "binary_trees.h"
/**
 * binary_tree_balance- measure the balance factor of a binary tree
 * @tree: pointer to the root node
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_nodes = 0, right_nodes = 0, balance_factor;

	if (tree)
	{
		if (tree->right)
		{
			right_nodes = binary_tree_height(tree->right) + 1;
		}
		if (tree->left)
		{
			left_nodes = binary_tree_height(tree->left) + 1;
		}
		balance_factor = (left_nodes - right_nodes);
		return (balance_factor);
	}
	return (0);
}
#include "binary_trees.h"
/**
 * binary_tree_height- determine the height of a binary tree
 * @tree: pointer to the root node
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_height, left_height;

	if (!tree)
	{
		return (0);
	}
	if (!tree->right && !tree->left)
	{
		return (0);
	}
	right_height = binary_tree_height(tree->right);
	left_height = binary_tree_height(tree->left);

	if (right_height > left_height)
	{
		return (right_height + 1);
	}
	else
	{
		return (left_height + 1);
	}
}

