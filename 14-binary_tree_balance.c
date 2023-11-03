#include "binary_trees.h"
int binary_tree_height_node(const binary_tree_t *node);
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to root node of the tree to measure the balance factor
 * Return: the balance
 *	otherwise 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;
	size_t height_left_path = 0;
	size_t height_right_path = 0;

	if (tree == NULL)
		return (0);
	height_left_path = binary_tree_height_node(tree->left);
	height_right_path = binary_tree_height_node(tree->right);
	balance = height_left_path - height_right_path;
	return (balance);
}

/**
 * binary_tree_height_node - measures the height of a node
 * @node: pointer to node to measure height
 *
 * Return: return the height of a node
 *	if node is NULL its height is -1
 */
int binary_tree_height_node(const binary_tree_t *node)
{
	int left_height_subtree = 0;
	int right_height_subtree = 0;
	int height = 0;

	if (node == NULL)
		return (-1);

	left_height_subtree += binary_tree_height_node(node->left);
	right_height_subtree += binary_tree_height_node(node->right);

	if (left_height_subtree > right_height_subtree)
		height = left_height_subtree + 1;
	else
		height = right_height_subtree + 1;
	return (height);
}
