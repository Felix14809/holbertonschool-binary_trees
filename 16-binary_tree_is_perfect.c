#include "binary_trees.h"
/**
*binary_tree_height - calculates the height of a binary tree
*@tree: pointer to tree
*Return: height in size_t
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0, temp = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		height = binary_tree_height(tree->left) + 1;
	if (tree->right != NULL)
		temp = binary_tree_height(tree->right) + 1;
	if (temp > height)
		height = temp;
	return (height);
}

/**
*binary_tree_is_perfect - checks if a binary tree is perfect
*@tree: pointer to tree
*Return: 1 if perfect 0 if not
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int balance_height, perfection = 1;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL)
	{
		perfection = binary_tree_is_perfect(tree->left);
	}
	if (perfection == 0)
		return (0);
	if (tree->right != NULL)
	{
		perfection = binary_tree_is_perfect(tree->right);
	}
	if (perfection == 0)
		return (0);

	balance_height = ((int)binary_tree_height(tree->left) -
		(int)binary_tree_height(tree->right));

	if (balance_height == 0)
		return (1);
	return (0);
}
