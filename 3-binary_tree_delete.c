#include "binary_trees.h"
/**
 * binary_tree_delete - delete entire binary tree
 * @tree: root node of tree
 * Return: Nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
	{
		return;
	}
	free(tree->right);
	free(tree->left);
	free(tree);
}
