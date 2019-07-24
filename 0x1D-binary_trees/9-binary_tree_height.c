#include "binary_trees.h"

/**
 * binary_tree_height - finds the height of a particular node
 * @tree: the node to find the height of
 * Return: ldepth if it is the largest node length or rdepth if not
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t ldepth;
	size_t rdepth;

	if (!tree)
		return (0);

	if (tree->left)
		ldepth = binary_tree_height(tree->left) + 1;
	else
		ldepth = 0;

	if (tree->right)
		rdepth = binary_tree_height(tree->right) + 1;
	else
		rdepth = 0;

	if (ldepth > rdepth)
		return (ldepth);
	else
		return (rdepth);
}
