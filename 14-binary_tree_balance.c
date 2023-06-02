#include "binary_trees.h"

int binary_tree_height1(const binary_tree_t *tree);

/**
 * binary_tree_balance - checks the balance of a tree.
 * @tree: the binary tree.
 * Return: int
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_height = binary_tree_height1(tree->left);
	size_t right_height = binary_tree_height1(tree->right);

	return (left_height - right_height);
}

/**
 * binary_tree_height - checks the height of a tree.
 * @tree: the binary tree.
 * Return: size-t
 */

int binary_tree_height1(const binary_tree_t *tree)
{
	int h_left, h_right;

	if (tree == NULL)
		return (0);
	h_left = binary_tree_height1(tree->left);
	h_right = binary_tree_height1(tree->right);
	if (h_left >= h_right)
		return (h_left + 1);

	return (h_right + 1);
}

int main(void)
{
    binary_tree_t *root;
    int balance;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);
    binary_tree_insert_left(root, 45);
    binary_tree_insert_right(root->left, 50);
    binary_tree_insert_left(root->left->left, 10);
    binary_tree_insert_left(root->left->left->left, 8);
    binary_tree_print(root);

    balance = binary_tree_balance(root);
    printf("Balance of %d: %+d\n", root->n, balance);
    balance = binary_tree_balance(root->right);
    printf("Balance of %d: %+d\n", root->right->n, balance);
    balance = binary_tree_balance(root->left->left->right);
    printf("Balance of %d: %+d\n", root->left->left->right->n, balance);
    return (0);
}
