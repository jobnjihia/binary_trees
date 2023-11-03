#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if perfect else NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int size;

	if (tree == NULL)
		return (0);

	size = _size(tree);
	if (size & (size + 1))
		return (0);
	else
		return (1);
}


/**
 * _size - gets size of binary tree
 * @tree: pointer to root node to get the size of
 *
 * Return: size of binary tree
 */
int _size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (_size(tree->left) + _size(tree->right) + 1);
}
