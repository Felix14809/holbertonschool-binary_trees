#include "binary_trees.h"
/**
*binary_tree_leaves - calculates the number of leaves in a binary tree
*@tree: pointer to tree
*Return: number of leaves in size_t
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
	{
		leaves += binary_tree_leaves(tree->left);
	}
	if (tree->right != NULL)
	{
		leaves += binary_tree_leaves(tree->right);
	}
	if (tree->right == NULL && tree->left == NULL)
	leaves++;

	return (leaves);
}
