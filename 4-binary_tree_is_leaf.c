#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checking if its a tree or leaf.
 * @node: node of the tree.
 * Return: int.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);


	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
