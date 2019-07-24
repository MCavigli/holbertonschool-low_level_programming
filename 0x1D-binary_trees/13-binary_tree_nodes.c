#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes with at least 1 child, 0 if @tree == NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_count = 0;

	if (!tree)
		return (0);

	if ((tree->left == NULL && tree->right != NULL) ||
	    (tree->left != NULL && tree->right == NULL))
		node_count++;
	else if (node_count == 0 && (tree->left != NULL ||
				     tree->right != NULL))
		node_count++;
	node_count += (binary_tree_nodes(tree->left) +
		       binary_tree_nodes(tree->right));
	return (node_count);
}
