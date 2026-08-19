#include "binary_trees.h"
/**
*binary_tree_balance - calculates the balance of a binary tree
*@tree: pointer to tree
*Return: balance in int
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int right, left;

	right = left = 0;
	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
	{
		left++;
		left += binary_tree_balance(tree->left);
	}
	if (tree->right != NULL)
	{
		right++;
		right += binary_tree_balance(tree->right);
	}
	if (tree->parent == NULL)
		return (left - right);
	if (right > left)
		left = right;
	return (left);
}
