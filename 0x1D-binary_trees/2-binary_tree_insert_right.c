#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node to the right of parent
 * @parent: the root of the tree
 * @value: the value of the new node
 * Return: a pointer to the new node if success and null if fail
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;

	if (parent == NULL)
		return (NULL);
	right_node = malloc(sizeof(binary_tree_t));
	if (right_node == NULL)
		return (NULL);
	right_node->n = value;
	right_node->parent = parent;
	if (parent->right == NULL)
		right_node->right = NULL;
	else
	{
		right_node->right = parent->right;
		parent->right->parent = right_node;
	}
	parent->right = right_node;
	right_node->left = NULL;
	return (right_node);
}
