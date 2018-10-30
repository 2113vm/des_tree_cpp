//
// Created by googolplex on 29.10.18.
//

#ifndef DES_TREE_BINARYTREE_H
#define DES_TREE_BINARYTREE_H


#include "../Node/Node.h"

class BinaryTree {
public:
    BinaryTree();
    ~BinaryTree();

    void insert(int key);
    node *search(int key);
    void destroy_tree();

private:

    void destroy_tree(node *leaf);
    void insert(int key, node *leaf);
    node *search(int key, node *leaf);

    node *root;
};


#endif //DES_TREE_BINARYTREE_H
