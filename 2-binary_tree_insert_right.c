#include "binary_trees.h"

/**
 * binary_tree_insert_right - creates a right side node.
 * @parent: parent of the tree.
 * @value: value of the right side node.
 * Return: a new right side node.
 */


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
	{
		return (NULL);
	}
	if (new_node == NULL)
	{
		return (NULL);
	}

	if (parent->right != NULL)
	{
		parent->right->parent = new_node;
		new_node->right = parent->right;

	}
	else
	{
		new_node->right = NULL;
	}


	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;

	parent->right = new_node;

	return (new_node);
}
