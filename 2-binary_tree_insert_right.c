#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child node of node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: pointer to new-node, NULL on failure
 *		Null if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *mr_right;

	if (parent == NULL)
		return (NULL);

	mr_right = malloc(sizeof(binary_tree_t));
	if (mr_right == NULL)
		return (NULL);

	mr_right->n = value;
	mr_right->parent = parent;
	mr_right->left = NULL;
	mr_right->right = parent->right;
	parent->right = mr_right;
	if (mr_right->right)
		mr_right->right->parent = mr_right;
	return (mr_right);
}
