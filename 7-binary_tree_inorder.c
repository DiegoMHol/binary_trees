#include "binary_trees.h"
/**
 * binary_tree_inorder - Function goes tree by pre-order
 * @tree: tree
 * @func: pointer to a func for each node
 * Return: 0
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
