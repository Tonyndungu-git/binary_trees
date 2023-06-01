#include "binary_trees.h"

/**
 * binary_tree_is_full - checks whether a node is full
 * @tree: binary tree
 * Return: int
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL && tree->right != NULL)
		return (1);
	else
		return (0);
}
