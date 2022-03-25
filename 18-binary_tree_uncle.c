#include "binary_trees.h"
/**
 * binary_tree_sibling - Check if tree is sibling
 * @node: node
 * Return: full
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
/**
 * binary_tree_uncle - Find uncle of node
 * @node: node
 * Return: uncle or nULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node && node->parent)
		return (binary_tree_sibling(node->parent));
	else
		return (NULL);
}
