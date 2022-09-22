#include "binary_trees.h"

/**
 * binary_trees_ancestor - This finds the lowest common ancestor of two nodes
 * @first: A pointer to the first node
 * @second: A pointer to the second node
 * Return: A pointer to the lowest common ancestor node
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *s;

	s = second;
	while (first != NULL)
	{
		while (second != NULL)
		{
			if (first == second)
				return ((binary_tree_t *)first);
			second = second->parent;
		}
		second = s;
		first = first->parent;
	}
	return (NULL);
}
