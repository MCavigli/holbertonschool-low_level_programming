#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node to the left
 * @parent: the root of the tree
 * @value: the value for the node
 * Return: returns pointer to node if success and null if fail
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node;

	if (parent == NULL)
		return (NULL);
	left_node = malloc(sizeof(binary_tree_t));
	if (left_node == NULL)
		return (NULL);
	left_node->n = value;
	left_node->parent = parent;
	if (parent->left == NULL)
		left_node->left = NULL;
	else
	{
		left_node->left = parent->left;
		parent->left->parent = left_node;
	}
	parent->left = left_node;
	left_node->right = NULL;
	return (left_node);
}
