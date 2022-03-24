#include "binary_trees.h"
/**
 * binary_tree_height - Function to calculate height
 * @tree: tree
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h1;
	size_t h2;

	if (!tree)
		return (0);

	h1 = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	h2 = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (h1 > h2 ? h1 : h2);
}
