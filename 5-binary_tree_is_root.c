#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is the root
 * @node: ptr to node to check
 * Return: 1 for true, 0 for failure.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);
	else
		return (0);
}
