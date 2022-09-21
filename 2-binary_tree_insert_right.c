#include "binary_trees.h"

/**
 * binary_tree_insert_right - This inserts a node as the right child of
 * another node
 *
 * @parent: The pointer tothe node to insert the right-child in
 * @value: The value to store in the new node
 * Return: A pointer to the created node or NULL if it fails
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	if (parent == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		(parent->right)->parent = new_node;
	}

	parent->right = new_node;

	return (new_node);
}
