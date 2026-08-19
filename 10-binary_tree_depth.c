#include "binary_trees.h"
/**
*binary_tree_depth - calculates the depth of a binary tree
*@tree: pointer to tree
*Return: depth in size_t
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent != NULL)
	{
		depth = binary_tree_depth(tree->parent);
		depth++;
	}
	return (depth);
}
