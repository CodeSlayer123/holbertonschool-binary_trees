#include "binary_trees.h"

bst_t *bst_remove(bst_t *root, int value){

    bst_t *tmp;
    if (root == NULL){
        return NULL;
    }
    if (value < root->n){
        root->left = bst_remove(root->left, value);
    } else if (value > root->n) {
        root->right = bst_remove(root->right, value);
    }
    else {
        if (root->left == NULL){
            tmp = root->right;
            free(root);
            return tmp;
        } else if (root->right == NULL){
            tmp = root->left;
            free(root);
            return tmp;
        }
        tmp = minNode(root->right);
        root->n = tmp->n;
        root->right = bst_remove(root->right, tmp->n);
    }
    return root;

}

bst_t *minNode(bst_t *node)
{
    bst_t *current = node;
    while (current && current->left != NULL)
        current = current->left;

    return current;
}