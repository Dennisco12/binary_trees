#include "binary_trees.h"

/**
 * binary_tree_height - This measure the height of a binary tree
 * @tree: A pointer to the node of the tree to measure
 * Return: The height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;
	const binary_tree_t *current;

	current = tree;

	if (tree == NULL)
		return (0);

	if (current->left != NULL)
		left_height = binary_tree_height(current->left) + 1;
	if (current->right != NULL)
		right_height = binary_tree_height(current->right) + 1;

	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}
