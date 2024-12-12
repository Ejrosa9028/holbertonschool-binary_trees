#include "binary_trees.h"

/**
 * binary_tree_inorder - Realiza un recorrido inorden en un árbol binario.
 * @tree: Puntero al nodo raíz del árbol.
 * @func: Puntero a la función a llamar para cada nodo.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)  /* Si el árbol o la función son NULL*/
	{
		return;
	}

	binary_tree_inorder(tree->left, func);  /*Recorremos el subárbol izquierdo*/
	func(tree->n);  /* Procesamos el nodo actual */
	binary_tree_inorder(tree->right, func); /* Recorrimos el subárbol derecho */
}
