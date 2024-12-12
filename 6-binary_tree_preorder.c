#include "binary_trees.h"

/**
 * binary_tree_preorder - Realiza un recorrido en preorden del árbol binario.
 * @tree: Puntero al nodo raíz del árbol.
 * @func: Puntero a la función a llamar para cada nodo.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)  /*Si el árbol o la función son NULL*/
	{
		return;
	}

	func(tree->n);  /* Procesamos el nodo actual */
	binary_tree_preorder(tree->left, func);  /*Recorrimos el subárbol izquierdo*/
	binary_tree_preorder(tree->right, func); /* Recorrimos el subárbol derecho */
}

