#include "binary_trees.h"

/**
 * binary_tree_rotate_right - perform a right-rotation on a binary tree
 * @tree: pointer to root node of the tree to rotate
 *
 * Return: pointer to the new root node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	if (tree == NULL)
		return (NULL);

	new_root = tree->left;
	new_root->parent = NULL;
	tree->left = new_root->right;

	if (tree->left != NULL)
		tree->left->parent = tree;

	tree->parent = new_root;
	new_root->right = tree;

	return (new_root);
}
