#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check node leaf or not
 * @node: node to check
 * Return: int
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

/**
 * binary_tree_is_full -  checks if a binary tree is full
 * @tree: node to a tree
 * Return: int
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree) != 0)
		return (1);
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	if (left == 0 || right == 0)
		return (0);
	return (1);
}
