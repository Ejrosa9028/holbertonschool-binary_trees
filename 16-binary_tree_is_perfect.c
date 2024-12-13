#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a binary tree.
 *
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The depth of the tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t depth = 0;

    while (tree && tree->parent)
    {
        depth++;
        tree = tree->parent;
    }

    return (depth);
}

/**
 * is_perfect_recursive - Checks if a binary tree is perfect.
 *
 * @tree: A pointer to the root node of the tree.
 * @depth: The depth of the leftmost leaf node.
 * @level: The current level of the node being checked.
 *
 * Return: 1 if the tree is perfect, otherwise 0.
 */
int is_perfect_recursive(const binary_tree_t *tree, size_t depth, size_t level)
{
    if (!tree)
    {
        return (1);
    }

    /* If it's a leaf node, check if it's at the correct depth */
    if (!tree->left && !tree->right)
    {
        return (level == depth);
    }

    /* If it's an internal node, it must have both left and right children */
    if (!tree->left || !tree->right)
    {
        return (0);
    }

    /* Recursively check the left and right subtrees */
    return is_perfect_recursive(tree->left, depth, level + 1) &&
           is_perfect_recursive(tree->right, depth, level + 1);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 *
 * @tree: A pointer to the root node of the tree.
 *
 * Return: 1 if the tree is perfect, otherwise 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t depth;

    /* Check if the tree is empty */
    if (!tree)
    {
        return (0);
    }

    /* Calculate the depth of the leftmost leaf */
    depth = binary_tree_depth(tree);

    /* Recursively check if the tree is perfect */
    return is_perfect_recursive(tree, depth, 0);
}
