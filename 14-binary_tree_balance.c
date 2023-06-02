#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - checks the balance of a tree.
 * @tree: the binary tree.
 * Return: int
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	return ((int)(left_height - right_height));
}

/**
 * binary_tree_height - checks the height of a tree.
 * @tree: the binary tree.
 * Return: size-t
 */

int binary_tree_height(const binary_tree_t *tree)
{
	int h_left, h_right;

	if (tree == NULL)
		return (0);
	h_left = binary_tree_height_1(tree->left);
	h_right = binary_tree_height_1(tree->right);
	if (h_left >= h_right)
		return (h_left + 1);

	return (h_right + 1);
}
