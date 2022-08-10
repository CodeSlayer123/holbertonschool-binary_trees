#include "binary_trees.h"
#include <limits.h>

int binary_tree_is_bst(const binary_tree_t *tree) {

    if (tree == NULL){
        return 0;
    }
      return(isBSTUtil(tree, INT_MIN, INT_MAX));


   

}
int isBSTUtil(const binary_tree_t *tree, int min, int max){
    if (tree == NULL){
        return 1;
    }
    if (tree->n < min || tree->n > max){
        return 0;
    }
    return isBSTUtil(tree->left, min, tree->n-1) && isBSTUtil(tree->right, tree->n+1, max);
}
