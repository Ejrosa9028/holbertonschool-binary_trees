#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Mide la altura de un árbol binario.
 * @tree: Puntero al nodo raíz del árbol.
 *
 * Return: La altura del árbol. Si el árbol es NULL, devuelve 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}

	/* Calculamos la altura de los hijos izquierdo y derecho */
	if (tree->left)
	{
		left_height = binary_tree_height(tree->left);
	}

	if (tree->right)
	{
		right_height = binary_tree_height(tree->right);
	}

	/* La altura es la mayor entre los hijos izquierdo y derecho, más 1 */
	if (left_height > right_height)
	{
		return (left_height + 1);
	}
	else
	{
		return (right_height + 1);
	}
}
