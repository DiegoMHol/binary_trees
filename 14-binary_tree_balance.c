#include "binary_trees.h"
#include "9-binary_tree_height.c"
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

	right = binary_tree_height(tree->right);
	left = binary_tree_height(tree->left);
	return (left - right);
}
