#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value){
    binary_tree_t *newNode = malloc(sizeof(binary_tree_t));
    if (newNode == NULL || parent == NULL){
        return NULL;
    }
    newNode->n = value;
    if (parent->right == NULL){
            newNode->right = NULL;
    } else {
        newNode->right = parent->right;
        parent->right->parent = newNode;

    }
    newNode->left = NULL;
    newNode->parent = parent;
    parent->right = newNode;
    return newNode;
}