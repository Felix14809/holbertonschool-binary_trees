#include "binary_trees.h"
/**
*binary_tree_uncle - finds the uncle of the passed node
*@node: pointer to passed node in a binary tree
*Return: pointer to uncle node or NULL
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *temp;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	temp = node->parent->parent;
	if (temp->right != node->parent && temp->right != NULL)
		return (temp->right);
	if (temp->left != NULL)
		return (temp->left);
	return (NULL);
}
