#include "binary_trees.h"

/**
 * binary_tree_nodes - This counts the number of nodes with
 * at least one child
 *
 * @tree: A pointer to the tree to assess
 * Return: The number of children with at least one child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return (binary_tree_nodes(tree->left) +
				binary_tree_nodes(tree->right) + 1);

	return (binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right));
}
