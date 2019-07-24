#include "binary_trees.h"

/**
 * height - same as 9
 * @tree: the root of the tree to find the height of
 * Return: returns the height of a tree
 */
int height(const binary_tree_t *tree)
{
	int ldepth;
	int rdepth;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left)
		ldepth = height(tree->left) + 1;
	else
		ldepth = 0;

	if (tree->right)
		rdepth = height(tree->right) + 1;
	else
		rdepth = 0;

	if (ldepth > rdepth)
		return (ldepth);
	else
		return (rdepth);


}


/**
 * binary_tree_balance - finds the balance factor of a binary tree
 * @tree: the tree to find the balance factor of
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (height(tree->left) - height(tree->right));

}
