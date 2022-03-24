#include "binary_trees.h"
/**
 * binary_tree_height - Function to calculate height
 * @tree: tree
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int h1;
	int h2;

	if (!tree)
		return (0);

	h1 = binary_tree_height(tree->left);
	h2 = binary_tree_height(tree->right);
	if (h1 > h2)
		return (h1 + 1);
	else
		return (h2 + 1);
}

/**
 * binary_tree_balance - Function that measure balance factor
 * @tree: tree
 * Return: height
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right, left;

	if (!tree)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return (left - right);
}
