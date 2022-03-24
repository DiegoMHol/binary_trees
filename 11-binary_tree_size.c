#include "binary_trees.h"
/**
 * binary_tree_size - Function to calculate size
 * @tree: tree
 * Return: height
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t i;


	if (!tree)
		return (0);

	i = binary_tree_size(tree->right);
	i += binary_tree_size(tree->left);
	return (i + 1);

}
