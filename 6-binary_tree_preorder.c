#include "binary_trees.h"
/**
*binary_tree_preorder - print a binary tree in preorder
*@tree: pointer to tree
*@func: funtion pointer to print nodes
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, (*func));
	binary_tree_preorder(tree->right, (*func));
}
