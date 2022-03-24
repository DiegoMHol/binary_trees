#include "binary_trees.h"
/**
 * binary_tree_nodes - Function to calculate nodes with 1 child at least
 * @tree: tree
 * Return: height
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t i = 0;


	if (!tree)
		return (0);

	if (tree->left || tree->right)
		i++;

	if (tree->left)
		i += binary_tree_nodes(tree->left);
	if (tree->right)
		i += binary_tree_nodes(tree->right);
	return (i);

}
