#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a tree is perfect.
 * @tree: Pointer to the head of the tree.
 * Return: 1 if the tree is perfect. Otherwise 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t modul, m;

	if (tree == NULL)
	{
		return (0);
	}
	for (m = 0, modul = 1; m <= binary_tree_height(tree); m++)
	{
		modul = modul * 2;
	}
	return (binary_tree_size(tree) + 1 == modul);
}

/**
 * binary_tree_height - function to calculate height of tree
 * @tree: tree root
 * Return: height of tree else 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lty, rty;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	lty = binary_tree_height(tree->left);
	rty = binary_tree_height(tree->right);
	if (lty > rty)
		return (lty + 1);
	return (rty + 1);
}

/**
 * binary_tree_size - function to calculate the size
 * @tree: tree root
 * Return: size of tree else 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		return (1 + binary_tree_size(tree->right) + binary_tree_size(tree->left));
	}
}
