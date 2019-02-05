#ifndef _BINARY_SEARCH_TREE_
#define _BINARY_SEARCH_TREE_

typedef struct node {
    void* element;
    struct node* left;
    struct node* right;
} TreeNode;

// Customer has to provide us with a comparator function to compare
// the generic values.
// - 0  if element1 = element2
// - 1  if element1 > element2
// - -1 if element1 < element2
typedef int (*TreeComparator)(void* element1, void* element2);

// inserts the specified element in the tree using the comparator
// Arguments: 
//
// - root: the root of the tree
// - element: The element to insert
// - f: The treecomparator function to use
//
// Returns:
//
// - 1 if element was added
// - 0 if we ran out of memory
// - -1 if the element was already in the tree, in which case
//   nothing is malloc'ed and the element is not re-added.
//   (The element already being in the tree implies the
//   comparator returned 0 for some element.)
int Insert(TreeNode** root, void* element, TreeComparator f);

// Find an element in the tree.
//
// Arguments:
//
// - root: the root of the tree
// - findme: the element to find
// - f: the comparator function to use to compare nodes
// - element: an output parameter through which the found
//   payload is returned
//
// Returns:
//
// - 1 if a matching element was found
// - 0 otherwise
int Lookup(TreeNode* root, void* findMe, TreeComparator f, void** element);

#endif //_BINARY_SEARCH_TREE_