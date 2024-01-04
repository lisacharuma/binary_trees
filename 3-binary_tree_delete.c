#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: ptr to tree root node
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/* Recursive post-order traversal */

	if (!tree)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
