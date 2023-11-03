#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node to find the ancestor
 * @second: pointer to the second node to find the ancestor
 *
 * Return: pointer to the ancestor node
 *	NULL if there is no ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					const binary_tree_t *second)
{
	size_t depth_first_path, depth_second_path;

	if (!first || !second)
		return (NULL);

	depth_first_path = binary_tree_depth(first);
	depth_second_path = binary_tree_depth(second);

	while (depth_first_path > depth_second_path)
	{
		first = first->parent;
		depth_first_path--;
	}
	while (depth_second_path > depth_first_path)
	{
		second = second->parent;
		depth_second_path--;
	}
	while (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *)first);
}

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: node to calculate the depth of
 *
 * Return: depth of the node
 *         0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t path_depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		path_depth++;
		tree = tree->parent;
	}

	return (path_depth);
}
