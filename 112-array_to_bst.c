#include "binary_trees.h"


bst_t *array_to_bst(int *array, size_t size){
    bst_t *root = NULL;
    if (array == NULL){
        return NULL;
    }
    for (size_t i = 0; i < size; i++){
        bst_insert(&root, array[i]);
    }
    return root;

}
