#include "binary_trees.h"

/**
 * binary_tree_postorder - This goes through a binary tree using
 * post-order traversal
 *
 * @tree: A pointer to the root of the tree to traverse
 * @func: A pointer to a function to call for each node
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *current;

	current = tree;
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(current->left, func);
	binary_tree_postorder(current->right, func);
	func(current->n);
}
