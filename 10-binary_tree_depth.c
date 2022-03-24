#include "binary_trees.h"
/**
 * binary_tree_depth - Function to calculate depth
 * @tree: tree
 * Return: height
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree && (tree->parent))
		return (1 + binary_tree_depth(tree->parent));

	else
		return (0);
}
