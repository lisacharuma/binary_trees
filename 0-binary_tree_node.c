#include "binary_trees.h"

/**
* binary_tree_node - new function
* @parent: ptr to new node parent
* @value: new node value
* Return: a ptr to new node, or NULL
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	/*Assign val, node has no children*/
	(*newnode).n = value;
	(*newnode).left = NULL;
	(*newnode).right = NULL;
	if (parent == NULL)
	{
		(*newnode).parent = NULL;
		parent = newnode;
	}
	else
	{
		(*newnode).parent = parent;
	}

	return (newnode);
}
