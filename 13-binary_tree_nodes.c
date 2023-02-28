#include "binary_trees.h"
/**
 * binary_tree_nodes - nodes with atleast one child
 * @tree: pointer to the root node
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes, right_nodes, nodes;

	if (tree != NULL && (tree->right != NULL || tree->left != NULL))
	{
		right_nodes = binary_tree_nodes(tree->right);
		left_nodes = binary_tree_nodes(tree->left);
		nodes = (right_nodes + left_nodes);

		return (nodes + 1);
	}
	return (0);
}

