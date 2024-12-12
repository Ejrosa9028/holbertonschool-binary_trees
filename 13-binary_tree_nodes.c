#include "binary_trees.h"

/**
 * binary_tree_nodes - Cuenta los nodos tienen un hijo en el árbol binario
 * @tree: Puntero a la raíz del árbol binario
 *
 * Return: El número de nodos con al menos un hijo. Si el árbol es NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
	{
		return (0);
	}

	/* Si el nodo tiene al menos un hijo, es un nodo con al menos un hijo */
	if (tree->left != NULL || tree->right != NULL)
		nodes = 1;

	/* Recursión en el subárbol izquierdo y derecho */
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	return (nodes);
}

