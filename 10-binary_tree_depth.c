#include "binary_trees.h"

/**
 * binary_tree_depth - this measures the depth of a node
 * @tree: A pointer to the node to be measured
 * Return: the depth or 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	const binary_tree_t *current;

	current = tree;
	if (tree == NULL || tree->parent == NULL)
		return (0);

	depth = (binary_tree_depth(current->parent) + 1);
	return (depth);
}
