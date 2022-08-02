#include "binary_trees.h"

int binary_tree_is_perfect(const binary_tree_t *tree) {
    int d;
	if (tree == NULL)
		return 0;

    d = depth(tree);

    return binary_tree_is_perfect_rec(tree, d, 0) ;


}
int binary_tree_is_perfect_rec(const binary_tree_t *tree, int d, int level) {
	if (tree == NULL)
		return 0;

    if (tree->left == NULL && tree->right == NULL) {
        return (d == level + 1);
    }
    if (tree->left == NULL || tree->right == NULL) {
        return 0;
    }

    return binary_tree_is_perfect_rec(tree->left, d, level+1) && binary_tree_is_perfect_rec(tree->right, d, level+1);


}

int depth(const binary_tree_t *tree) {
    int d = 0;
    while (tree != NULL){
        d++;
        tree = tree->left;
    }
    return d;

}