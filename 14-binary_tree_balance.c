#include "binary_trees.h"
/**
*binary_tree_balance - calculates the balance of a binary tree
*@tree: pointer to tree
*Return: balance in int
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance, right, left;

	balance = right = left = 0;
	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
	{
		left += binary_tree_balance(tree->left);
		left++;
	}
	if (tree->right != NULL)
	{
		right += binary_tree_balance(tree->right);
		right++;
	}
	balance += (left - right);

	return (balance);
}
