#include "binary_trees.h"
/**
 * binary_tree_is_full- checks if binary tree is full
 * @tree: pointer to the root node
 * Return: 1 if full or 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
			(tree->left == NULL && tree->right != NULL) ||
			binary_tree_is_full(tree->left) == 0 ||
			binary_tree_is_full(tree->right) == 0)

			return (0);
	}
	return (1);
}
