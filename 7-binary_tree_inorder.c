#include "binary_trees.h"
/**
*binary_tree_inorder - print a binary tree in preorder
*@tree: pointer to tree
*@func: funtion pointer to print nodes
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree->left != NULL)
		binary_tree_inorder(tree->left, (*func));
	func(tree->n);
	if (tree->right != NULL)
		binary_tree_inorder(tree->right, (*func));
}
