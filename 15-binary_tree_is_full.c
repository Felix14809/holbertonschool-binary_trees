#include "binary_trees.h"
/**
*binary_tree_is_full - checks if a binary tree is full
*@tree: pointer to passed node in a binary tree
*Return: 1 if it is full, otherwise 0
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full1 = 1, full2 = 1;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		full1 = binary_tree_is_full(tree->left);

	if (tree->right != NULL)
		full2 = binary_tree_is_full(tree->right);

	if ((tree->right == NULL && tree->left != NULL) ||
	 (tree->right != NULL && tree->left == NULL))
		full1 = full2 = 0;

	if (full1 == 0 || full2 == 0)
		return (0);

	return (1);
}
