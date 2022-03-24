#include "binary_trees.h"
/**
 * binary_tree_postorder - Function goes tree by pre-order
 * @tree: tree
 * @func: pointer to a func for each node
 * Return: 0
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
