#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: the size of the tree, or 0 if @tree == NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lcount;
	size_t rcount;

	if (tree == NULL)
		return (0);

	lcount = binary_tree_size(tree->left);

	lcount++;
	rcount = binary_tree_size(tree->right);
	rcount++;
	return (lcount + rcount - 1);
}
