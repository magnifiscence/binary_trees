#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: return a pointer to the created node, or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *alloc_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	alloc_node = binary_tree_node(parent, value);

	if (alloc_node == NULL)
	{
		return (NULL);
	}

	if (parent->right == NULL)
	{
		parent->right = alloc_node;
	}
	else
	{
		alloc_node->right = parent->right;
		parent->right = alloc_node;
		alloc_node->right->parent = alloc_node;
	}
	return (alloc_node);
}
