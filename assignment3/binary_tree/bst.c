#include<stdio.h>   // for NULL
#include<stdlib.h>  // for malloc and free

#include "bst.h"

int Insert(TreeNode** root, void* element, TreeComparator f) {
    // now lets walk the tree recursively
    if (*root == NULL) {
        // we walked by the leaf meaning we can insert in here
        TreeNode* newNode = malloc(sizeof(TreeNode));
        if (newNode == NULL) {
            return 0;
        }
        // default leafs to null
        newNode->left = newNode->right = NULL;
        newNode->element = element;
        *root = newNode;
        return 1;
    }
    // now the walking
    int compValue = f(element, (*root)->element);
    if (compValue == 0) {
        // this element already exists so do nothing and return
        return -1;
    } else if (compValue == 1) {
        return Insert(&(*root)->right, element, f);
    } else {
        return Insert(&(*root)->left, element, f);
    }
}

int Lookup(TreeNode* root, void* findMe, TreeComparator f, void** element) {
    // this will also be done recursively
    if(root == NULL) {
        // we went past the leaf, meaning we didnt find it
        return 0;
    }
    int compValue = f(findMe, root->element);
    if (compValue == 0) {
        // This is the element we were searching for
        (*element) = root->element;
        return 1;
    } else if (compValue == 1) {
        return Lookup(root->right, findMe, f, element);
    } else {
        return Lookup(root->left, findMe, f, element);
    }
}