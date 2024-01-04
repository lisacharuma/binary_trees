#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: new node parent
 * @value: new node value
 * Return: new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;

	/*parent is null*/
	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->n = value;
	new->right = NULL;
	new->left = NULL;
	new->parent = parent;
	/*Parent already has a left child*/
	if (parent->left)
	{
		temp = parent->left;
		temp->parent = new;
		new->left = temp;
	}
	parent->left = new;
	return (new);
}
