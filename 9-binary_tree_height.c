#include "binary_trees.h"
/**
*binary_tree_height - calculates the height of a binary tree
*@tree: pointer to tree
*Return: height in size_t
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		binary_tree_postorder(tree->left, (*func));
	
	if (tree->right != NULL)
		binary_tree_postorder(tree->right, (*func));	
}