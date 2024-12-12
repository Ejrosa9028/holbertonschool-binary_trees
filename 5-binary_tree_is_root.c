#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - Verifica si un nodo es la raíz del árbol
 * @node: Puntero al nodo a verificar
 *
 * Return: 1 si el nodo es la raíz, 0 si no lo es o si el nodo es NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)  /* Si el nodo es NULL, no es la raíz */
	{
		return (0);
	}

	if (node->parent == NULL)  /* Si el nodo no tiene padre, es la raíz */
	{
		return (1);
	}

	return (0);  /* Si tiene un padre, no es la raíz */
}
