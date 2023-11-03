#include "binary_trees.h"

/**
 * bst_insert - insert a value in a Binary Search Tree
 * @tree: double pointer to the root node of the BST to insert the value in
 * @value: value to store in the node to be inserted
 *
 * Return: a pointer to the created node, or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *temp = NULL;

	if (tree)
	{
		if (*tree == NULL)
		{
			*tree = binary_tree_node(NULL, value);
			return (*tree);
		}
		temp = *tree;
		while (temp != NULL)
		{
			if (value < temp->n)
			{
				if (temp->left == NULL)
				{
					temp->left = binary_tree_node(temp, value);
					return (temp->left);
				}
				temp = temp->left;
			}
			if (value > temp->n)
			{
				if (temp->right == NULL)
				{
					temp->right = binary_tree_node(temp, value);
					return (temp->right);
				}
				temp = temp->right;
			}
			if (value == temp->n)
				return (NULL);
		}
	}
	return (NULL);
}
