#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value){
    binary_tree_t *newNode = malloc(sizeof(binary_tree_t));
    if (newNode == NULL || parent == NULL){
        free(newNode);
        return NULL;
    }
    newNode->n = value;
    if (parent->left == NULL){
            newNode->left = NULL;
    } else {
        newNode->left = parent->left;
        parent->left->parent = newNode;

    }
    newNode->right = NULL;
    newNode->parent = parent;
    parent->left = newNode;
    return newNode;
}