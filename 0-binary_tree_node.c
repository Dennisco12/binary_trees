#include "binary_trees.h"

/**
 * binary_tree_node - This function creates a binary tree
 * if it doesn't already exist and set its data
 *
 * @parent: A pointer to the parent node
 * @value: The value to put in the new node
 * Return: A pointer to the new node or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	if (parent == NULL)
		new_node->parent = NULL;
	else
		new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;

	return (new_node);
}
