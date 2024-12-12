#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - Mide la profundidad de un árbol binario
 * @tree: Puntero al nodo cuya profundidad se va a medir
 *
 * Return: La profundidad del nodo. Si el árbol es NULL, devuelve 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	{
		return (0);
	}

	/* Subir hasta la raíz contando los pasos */
	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
