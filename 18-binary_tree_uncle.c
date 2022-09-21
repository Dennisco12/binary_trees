#include "binary_trees.h"

/**
 * binary_tree_uncle - This finds the uncle of a node
 * @node: A pointer to the node to find it's uncle
 * Return: A pointer to the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *popsi, *grandpa;

	if (node == NULL)
		return (NULL);

	if (node->parent == NULL || (node->parent)->parent == NULL)
		return (NULL);

	popsi = node->parent;
	grandpa = popsi->parent;

	if (grandpa->left == NULL || grandpa->right == NULL)
		return (NULL);
	if (grandpa->right != popsi)
		return (grandpa->right);
	else
		return (grandpa->left);
}
