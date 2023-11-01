#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *alloc_node = malloc(sizeof(binary_tree_t));

	if (alloc_node == NULL)
	{
		return (NULL);
	}
	alloc_node->n = value;
	alloc_node->parent = parent;
	alloc_node->left = NULL;
	alloc_node->right = NULL;

	return (alloc_node);
}
