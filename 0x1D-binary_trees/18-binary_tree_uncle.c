#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node,
 * the node above and to the left or right of the node
 * @node: the node to find the uncle of
 * Return: the uncle of the node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !(node->parent) || !(node->parent->parent))
		return (NULL);
	if (node->parent->right == node || node->parent->left == node)
	{
		if ((node->parent->parent->right &&
		     node->parent->parent->right->right) &&
		    (node->parent->parent->right->right == node ||
		    node->parent->parent->right->left == node))
		{
			if (node->parent->parent->left)
				return (node->parent->parent->left);
		}
		else if ((node->parent->parent->left &&
			  node->parent->parent->left->left) &&
			 (node->parent->parent->left->right == node ||
			  node->parent->parent->left->left == node))
		{
			if (node->parent->parent->right)
				return (node->parent->parent->right);
		}
		else
			return (NULL);
	}
	return (NULL);
}
