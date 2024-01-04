#include "binary_trees.h"

/**
* binary_tree_insert_right -  inserts right-child node to parent
* @parent: ptr to parent node
* @value: new node value
* Return: a ptr to new node
* or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	(*newnode).n = value;
	(*newnode).left = NULL;
	(*newnode).right = NULL;

	if ((*parent).right != NULL)
	{
		(*newnode).parent = parent;
		(*newnode).right = (*parent).right;
		(*parent).right = newnode;
		(*(*newnode).right).parent = newnode;
	}
	else
	{
		(*parent).right = newnode;
		(*newnode).parent = parent;
	}
	return (newnode);
}
