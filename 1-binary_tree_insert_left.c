#include "binary_trees.h"
/**
 * binary_tree_insert_left - creates a node in a binary tree
 * @parent: the parent node
 * @value: value to add to new node
 * Return: Pointer to new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (!node || !parent)
		return (NULL);
	node->n = value;
	node->left = node->right = NULL;
	if (parent->left != NULL)
	{
		parent->left->parent = node;
		node->left = parent->left;
	}
	parent->left = node;
	node->parent = parent;
	return (node);
}
