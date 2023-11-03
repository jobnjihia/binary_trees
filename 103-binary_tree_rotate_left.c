#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 *
 * Return: a pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *r_r, *l_l;

	if (tree == NULL || tree->right == NULL)
		return (NULL);
	r_r = tree->right;
	l_l = r_r->left;

	r_r->left = tree;
	tree->right = l_l;

	tree->parent = r_r;
	if (l_l != NULL)
		l_l->parent = tree;
	return (r_r);
}
