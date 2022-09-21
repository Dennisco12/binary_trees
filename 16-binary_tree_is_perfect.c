#include "binary_trees.h"
/**
 * height_calc - This calulates the height of a binary tree
 * @tree: A pointer to the node of the root node of the tree
 * Return: The height of the tree
 */
int height_calc(const binary_tree_t *tree)
{
	int lheight = 0, rheight = 0;

	if (tree == NULL)
		return (0);
	lheight = height_calc(tree->left) + 1;
	rheight = height_calc(tree->right) + 1;

	if (lheight > rheight)
		return (lheight);
	else
		return (rheight);
}

/**
 * is_full - Checks if a binary tree is full
 * @tree: A pointer to the root node of the tree
 * Return: 1 if tree is full and 0 if otherwise
 */
int is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	if (tree->left && tree->right)
		return (is_full(tree->left) && is_full(tree->right));
	return (0);
}

/**
 * binary_tree_is_perfect - This checks if a binary tree is perfect
 * @tree: A pointer to the root node of the tree
 * Return: 1 if tree is perfect and 0 if otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (height_calc(tree->left) == height_calc(tree->right))
		return (1);

	if (is_full(tree) == 1)
		return (1);
	return (0);
}
