#include "binary_trees.h"

/**
 * tree_height - This calculate the height of a binary tree
 * @tree: A pointer to the root node of the tree
 * Return: The height of the tree
 */
int tree_height(const binary_tree_t *tree)
{
	int lheight = 0;
	int rheight = 0;

	if (tree == NULL)
		return (0);

	lheight = tree_height(tree->left) + 1;
	rheight = tree_height(tree->right) + 1;

	if (lheight > rheight)
		return (lheight);
	else
		return (rheight);
}

/**
 * binary_tree_balance - This measures the balance factor
 * of a binary tree
 *
 * @tree: A pointer to the root node of the tree
 * Return: The balance factor of the tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int lheight = 0;
	int rheight = 0;

	if (tree == NULL)
		return (0);

	lheight = tree_height(tree->left);
	rheight = tree_height(tree->right);

	return (lheight - rheight);
}
