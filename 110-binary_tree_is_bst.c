#include "binary_trees.h"

/**
 * check_root_left - This checks if all nodes in the left are
 * smaller than the root
 *
 * @root: The value on the root node
 * @node: A pointer to the node to check
 * Return: 1 if node is a right child and 0 if otherwise
 */
int check_root_left(const binary_tree_t *tree, int root)
{
	int ret_left, ret_right;

	if (tree == NULL)
		return (1);
	if (tree->n > root)
		return (0);

	ret_left = check_root_left(tree->left, root);
	ret_right = check_root_left(tree->left, root);

	if (ret_right == 0 || ret_left == 0)
		return (0);

	return (1);
}

/**
 * check_root_right - This checks if all nodes in the right are
 * bigger than the root node
 *
 * @node - The werey we're checking
 * @root: The value on the root node we're comparing
 * Return: 1 if all nodes to the right place are correctly placed
 * and 0 if otherwise
 */
int check_root_right(const binary_tree_t *node, int root)
{
	int ret_left, ret_right;

	if (node == NULL)
		return (1);
	if (node->n < root)
		return (0);

	ret_left = check_root_right(node->left, root);
	ret_right = check_root_right(node->right, root);

	if (ret_right == 1 && ret_left == 1)
		return (1);
	return (0);
}

/**
 * binary_tree_is_bst - This checks if a binary tree is a
 * valid binary search tree
 *
 * @tree: A pointer to the tree to check
 * Return: 1 if tree is valid and 0 if otherwise
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	int ret_left, ret_right, flag;


	if (tree == NULL)
		return (0);

	if (tree->right != NULL)
	{
		flag = check_root_right(tree->right, tree->n);
		if (flag == 0)
			return (0);
		ret_right = binary_tree_is_bst(tree->right);
	}
	if (tree->left != NULL)
	{
		flag = check_root_left(tree->left, tree->n);
		if (flag == 0)
			return (0);
		ret_left = binary_tree_is_bst(tree->left);
	}

	if (ret_right == 0 || ret_left == 0)
		return (0);
	return (1);
}
