#include "binary_trees.h"

/**
 * binary_tree_preorder - This traverse the tree using the prorder
 * traversal
 *
 * @tree: A pointer to the root node of the tree to traverse
 * @func: A pointer to a function to call for each node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *current;

	current = tree;
	if (tree == NULL || func == NULL)
		return;

	func(current->n);
	binary_tree_preorder(current->left, func);
	binary_tree_preorder(current->right, func);
}
