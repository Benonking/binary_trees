#include "binary_trees.h"
/**
 * binary_tree_inorder- traverse binary tree using in-order traversal
 * @tree: root node
 * @func: pointer to a function to call each node
 * Return: Nothing
 * */
void binary_tree_inorder(const binarty *tree, (*func)(int))
{
	if(!(tree || func))
	{
		return;
	}
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
