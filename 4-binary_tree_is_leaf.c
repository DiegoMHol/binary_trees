#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Function to know if is leaf or not
 * @node: node to check
 * Return: 1 is leaf 0if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)

		return (0);

	if (!(node->left) && !(node->right))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
