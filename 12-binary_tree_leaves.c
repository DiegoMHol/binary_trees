#include "binary_trees.h"
/**
 * binary_tree_leaves - Function to calculate leaves
 * @tree: tree
 * Return: height
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t i = 0;


	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		i++;

	if (tree->left)
		i += binary_tree_leaves(tree->left);
	if (tree->right)
		i += binary_tree_leaves(tree->right);
	return (i);

}
