#include "binary_trees.h"
/**
 * binary_tree_insert_right - Function to insert right node
 * @parent: point to parent
 * @value: value of node to insert
 * Return: new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;

	if (parent->right == NULL)
	{
		parent->right = new_node;
		new_node->right = NULL;
	}
	else
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
		parent->right = new_node;
	}
	return (new_node);
}
