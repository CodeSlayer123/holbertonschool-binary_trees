#include "binary_trees.h"

int binary_tree_is_root(const binary_tree_t *node){
    if (node != NULL) {
        if (node->parent == NULL){
            return 1;
        } else {
            return 0;
        }

    } else {
        return 0;
    }
}