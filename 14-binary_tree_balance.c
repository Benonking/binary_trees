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
		right_nodes = binary_tree_height(tree->right);
		left_nodes = binary_tree_height(tree->left);
		balance_factor = abs(left_nodes - right_nodes);
		return (balance_factor);
	}
	return (0);
}
/**
 * binary_tree_height - calculate the height of a binary tree
 * @tree: pointer to the root node
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}
