#include "binary_trees.h"

/**
 * binary_tree_leaves - This counts the leaves in a binary tree
 *
 * @tree: A pointer to the root of the tree to be counted
 * Return: The number of leaves in the tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (binary_tree_leaves(tree->left) +
				binary_tree_leaves(tree->right) + 1);

	return (binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right));
}
