#include "binary_trees.h"

/**
 * binary_tree_height - the function that measures  the height of a binary tree
 * @tree:  is a pointer to the root node of the tree to check
 * Return: tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
*bin_tree_count_nodes - counts nodes on a (sub)tree
*@tree: pointer to node whose (sub)tree is to be traversed
*Return: number of nodes
*/

int bin_tree_count_nodes(const binary_tree_t *tree)
{
	int left_count, right_count;

	if (tree == NULL)
		return (0);

	left_count = bin_tree_count_nodes(tree->left);
	right_count = bin_tree_count_nodes(tree->right);

	return (1 + left_count + right_count);
}



/**
 * binary_tree_is_perfect - function cheching if bonary tree is perfect
 * @tree:  is a pointer to the root node of the tree to check
 * Return: tree is NULL, your function must return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree == NULL)
		return (0);
	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);
	if (height_left == height_right)
		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	return (0);
}
