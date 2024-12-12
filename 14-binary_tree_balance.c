#include "binary_trees.h"

/**
 * binary_tree_height - Función para calcular altura de un árbol binario
 * @tree: Puntero al nodo raíz del árbol.
 *
 * Return: La altura del árbol.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL)
	{
		left_height = binary_tree_height(tree->left);
	}

	if (tree->right != NULL)
	{
		right_height = binary_tree_height(tree->right);
	}

	if (left_height > right_height)
	{
		return (left_height + 1);
	}

	return (right_height + 1);
}

/**
 * binary_tree_balance - Calcula el factor de balance de un árbol binario
 * @tree: Puntero al nodo raíz del árbol.
 *
 * Return: El factor de balance del árbol (altura izquierda - altura derecha).
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL)
	{
		left_height = binary_tree_height(tree->left);
	}
	if (tree->right != NULL)
	{
		right_height = binary_tree_height(tree->right);
	}

	return (left_height - right_height);
}

