#include "binary_trees.h"
/**
 *binary_tree_nodes - counts the nodes with at least 1 child in tree
 *@tree: a pointer to the root node of the tree to count the number of nodes
 *
 * Return: number of nodes
 *	0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t only_1_node = 0;

	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
		only_1_node = (1);
	only_1_node += binary_tree_nodes(tree->left);
	only_1_node += binary_tree_nodes(tree->right);
	return (only_1_node);
}
