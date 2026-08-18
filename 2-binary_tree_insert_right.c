#include "binary_trees.h"
/**
 * binary_tree_insert_right - creates a node in a binary tree
 * @parent: the parent node
 * @value: value to add to new node
 * Return: Pointer to new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->n = value;
	node->right = node->left = NULL;
	if (parent->right != NULL)
	{
		parent->right->parent = node;
		node->right = parent->right;
	}
	parent->right = node;
	node->parent = parent;
	return (node);
}