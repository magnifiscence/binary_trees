#include "binary_trees.h"

/**
 * binary_tree_depth -  measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: if tree is NULL, return 0
 *
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int number;

	if (tree == NULL)
	{
		return (0);
	}
	for (number = 0; tree && tree->parent; number++)
	{
		tree = tree->parent;
	}
	return (number);
}
