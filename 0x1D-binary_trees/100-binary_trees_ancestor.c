#include "binary_trees.h"

/**
 * depth - measures the depth of a node in a binary tree
 * @tree: a pointer to the node to measure the depth
 * Return: the depth of the tree, 0 if @tree == NULL
 */
int depth(const binary_tree_t *tree)
{
	int count;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	count = depth(tree->parent);
	count++;
	return (count);
}

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node to compare
 * @second: pointer to the second node to compare
 * Return: pointer to the lowest common ancestor node of the two given nodes,
 * NULL if no common ancestor was found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	int fd;
	int sd;
	int i = 0;

	if (!first || !second)
		return (NULL);
	if (!first->parent || !second->parent)
		return (NULL);

	fd = depth(first);
	sd = depth(second);

	if (fd < sd)
	{
		i = sd;
		while (i != fd)
		{
			second = second->parent;
			i--;
		}
	}
	else if (sd < fd)
	{
		i = fd;
		while (i != sd)
		{
			first = first->parent;
			i--;
		}
	}
	while (first->n)
	{
		if (first->n == second->n)
			return ((binary_tree_t *)(first));
		first = first->parent;
		second = second->parent;
	}
	return (NULL);
}
