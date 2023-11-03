#include "binary_trees.h"

/**
 * bst_search - insert a value in a Binary Search Tree
 * @tree: double pointer to the root node of the BST to search the value in
 * @value: value to store in the node to be inserted
 *
 * Return: a pointer to the node or NULL on failure
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *present = (bst_t *)tree;

	while (present != NULL)
	{
		if (value < present->n)
			present = present->left;
		else if (value > present->n)
			present = present->right;
		else if (value == present->n)
			break;
	}
	return (present);
}
