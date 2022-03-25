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
 * binary_tree_is_perfect - Function that measure balance factor
 * @tree: tree
 * Return: height
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree && !tree->left && !tree->right)
		return (1);

	if (!tree || !tree->left || !tree->right)
		return (0);

	if ((binary_tree_height(tree->left) == binary_tree_height(tree->right)) &&
	(binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right)))
		return (1);
	else
		return (0);
}
