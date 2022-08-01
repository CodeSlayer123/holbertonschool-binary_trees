#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree) {
    if (tree != NULL) {
        if (tree->left == NULL && tree->right == NULL){
            return 0;
        }
        return 1 + max(binary_tree_height(tree->left), binary_tree_height(tree->right));
    } else {
        return 0;
    }
}