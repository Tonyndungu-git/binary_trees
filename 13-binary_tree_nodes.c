#include "binary_trees.h"

/**
 * binary_tree_nodes - counts no of nodes with one branch
 * @tree: binary tree
 * Return: size_t
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
	{
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}
	return (0);
}
