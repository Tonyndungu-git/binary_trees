#include "binary_trees.h"

/**
 * binary_tree_insert_left - creates a left side node.
 * @parent: parent of the tree.
 * @value: value of the left side node.
 * Return: a new left side node.
 */


binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	if (parent->left != NULL)
	{
		parent->left->parent = new_node;
		new_node->left = parent->left;

	}
	else
	{
		new_node->left = NULL;
	}


	new_node->parent = parent;
	new_node->n = value;
	new_node->right = NULL;

	parent->left = new_node;

	return (new_node);
}
