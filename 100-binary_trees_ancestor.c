#include "binary_trees.h"

/**
 * binary_trees_ancestor - find the ancestor
 * @first: node
 * @second:node
 * Return: pointer
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tr
				     ee_t *second)
{
	binary_tree_t *node;

	if (first == NULL || second == NULL)
		return (NULL);
	node = (binary_tree_t *)second;
	while (first != NULL)
	{
		while (second)
		{
			if (first == second)
				return ((binary_tree_t *)first);
			second = second->parent;
		}
		second = node;
		first = first->parent;
	}
	return (NULL);
}
