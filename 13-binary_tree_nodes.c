#include "binary_trees.h"

/**
 * binary_tree_nodes -  function that counts the nodes with at least 1 child
 * @tree: is a pointer to the root node of the tree to count the number of node
 * Return: tree is NULL, the function must return 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) +
				binary_tree_nodes(tree->right));

	else
		return (0);
}
