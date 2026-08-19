#include "binary_trees.h"
/**
*binary_tree_sibling - finds the sibling of the passed node
*@node: pointer to passed node in a binary tree
*Return: pointer to sibling node or NULL
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->right != node && node->parent->right != NULL)
		return (node->parent->right);
	if (node->parent->left != node && node->parent->left != NULL)
		return (node->parent->left);
	return (NULL);
}
