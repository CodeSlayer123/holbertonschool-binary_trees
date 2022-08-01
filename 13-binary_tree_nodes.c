#include "binary_trees.h"

size_t binary_tree_nodes(const binary_tree_t *tree) {
    size_t count = 0;
	if (tree == NULL)
		return 0;
    if ((tree->left != NULL || tree->right != NULL)){
        count++;
    }
    return count + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);



}