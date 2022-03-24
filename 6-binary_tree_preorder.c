#include "binary_trees.h"
/**
 * binary_tree_preorder - Function goes tree by pre-order
 * @tree: tree
 * @func: pointer to a func for each node
 * Return: 0
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
