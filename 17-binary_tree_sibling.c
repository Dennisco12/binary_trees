#include "binary_trees.h"

/**
 * binary_tree_sibling - This finds the sibling of a node
 * @node: A pointer to the node to find the  sibling
 * Return: A pointer to the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *popsi;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	popsi = node->parent;
	if (popsi->left == NULL || popsi->right == NULL)
		return (NULL);

	if (popsi->left != NULL && popsi->left != node)
		return (popsi->left);
	else
		return (popsi->right);
}
