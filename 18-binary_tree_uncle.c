#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *avail;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	avail = node->parent;

	if (avail->parent && avail->parent->right != avail)
	{
		return (avail->parent->right);
	}
	if (avail->parent && avail->parent->left != avail)
	{
		return (avail->parent->left);
	}
	return (NULL);
}
