#include "binary_trees.h"

/**
 * binary_tree_depth - depth of tree
 * @tree: binary tree
 * Return: size_t
 **/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t depth = 0;
	const binary_tree_t *current = tree;

	while (current->parent != NULL)
	{
		depth++;
		current = current->parent;
	}
	return (depth);
}
