#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the new node, NULL on failure
 *		NULL if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *to_the_left;

	if (parent == NULL)
		return (NULL);

	to_the_left = binary_tree_node(parent, value);
	if (to_the_left == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		to_the_left->left = parent->left;
		parent->left->parent = to_the_left;
	}
	parent->left = to_the_left;

	return (to_the_left);
}
