#include "binary_trees.h"
/**
 * nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes with at least 1 child, 0 if @tree == NULL
 */
int nodes(const binary_tree_t *tree)
{
	int node_count = 0;

	if (!tree)
		return (0);

	if ((tree->left == NULL && tree->right != NULL) ||
	    (tree->left != NULL && tree->right == NULL))
		node_count++;
	else if (node_count == 0 && (tree->left != NULL ||
				     tree->right != NULL))
		node_count++;
	node_count += (nodes(tree->left) +
		       nodes(tree->right));
	return (node_count);
}

/**
 * full - checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if it is full, 0 if not or if tree == NULL
 */
int full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (1);

	if ((tree->left) && (tree->right))
		return (full(tree->left) && full(tree->right));

	return (0);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if perfect, 0 if not or if tree == NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_nodes;
	int right_nodes;

	if (!tree)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (1);

	if (full(tree) == 0)
		return (0);
	left_nodes = nodes(tree->left);
	right_nodes = nodes(tree->right);
	if (left_nodes == right_nodes)
		return (1);
	else
		return (0);
}
