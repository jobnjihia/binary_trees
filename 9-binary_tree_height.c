#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the heighti.
 *
 * Return: tree height, else 0 if tree is null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_lt = 0;
	size_t height_rt = 0;

	if (tree == NULL)
		return (0);

	height_lt = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_rt = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_lt > height_rt ? height_lt : height_rt);
}
