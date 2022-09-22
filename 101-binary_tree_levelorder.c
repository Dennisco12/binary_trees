#include "binary_trees.h"

/**
 * height - Calculates the height of a tree
 * @tree: A pointer to the node of the tree
 * Return: The height of the tree
 */
int height(const binary_tree_t *tree)
{
	int lheight, rheight;
	if (tree == NULL)
		return (0);
	lheight = height(tree->left) + 1;
	rheight = height(tree->right) + 1;

	if (lheight > rheight)
		return (lheight);
	else
		return (rheight);
}

/**
 * current_level - This locates all the node of a level
 * and calls func on the nodes
 *
 * @tree: A pointer to the root node of the tree
 * @func: A pointer to the called function
 * @level: The level of which to locates its nodes
 */
void current_level(const binary_tree_t *tree, void (*func)(int), int level)
{
	if (level == 1)	/*level 1 is the root node*/
		func(tree->n);
	else if (level > 1)
	{
		current_level(tree->left, func, level - 1);
		current_level(tree->right, func, level - 1);
	}
}

/**
 * binary_tree_levelorder - This goes through a binary tree using
 * level-order traversal
 *
 * @tree: A pointer to the tree to traverse
 * @func: A pointer to the function called for each node
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int h, n = 1;

	if (tree == NULL || func == NULL)
		return;

	h = height(tree);
	while (n <= h)
	{
		current_level(tree, func, n);
		n++;
	}
}
