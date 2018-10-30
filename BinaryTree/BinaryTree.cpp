//
// Created by googolplex on 29.10.18.
//

#include "../Node/Node.h"
#include "BinaryTree.h"
#include <cstddef>


BinaryTree::BinaryTree() {
    root = nullptr;
}

BinaryTree::~BinaryTree() {
    destroy_tree();
}

void BinaryTree::destroy_tree(node *leaf) {
    if(leaf!=nullptr) {
        destroy_tree(leaf->left);
        destroy_tree(leaf->right);
        delete leaf;
    }
}

void BinaryTree::insert(int key, node *leaf) {
    if (key < leaf->key_value) {
        if (leaf->left!=nullptr) {
            insert(key, leaf->left);
        } else {
            leaf->left = new node;
            leaf->left->key_value = key;
            leaf->left->left = nullptr;
            leaf->left->right = nullptr;

        }
    } else {
        if (leaf->right!=nullptr) {
            insert(key, leaf->right);
        } else {
            leaf->right = new node;
            leaf->right->key_value = key;
            leaf->right->left = nullptr;
            leaf->right->right = nullptr;
        }
    }
}

node* BinaryTree::search(int key, node *leaf) {
    if (leaf!=nullptr) {
        if (key == leaf->key_value) {
            return leaf;
        }
        if (key < leaf->key_value) {
            return search(key, leaf->left);
        }
        if (key > leaf->key_value) {
            return search(key, leaf->right);
        }
    } else {
        return nullptr;
    }
}

void BinaryTree::insert(int key) {
    if (root!=nullptr) {
        insert(key, root);
    } else {
        root = new node;
        root->key_value = key;
        root->left=nullptr;
        root->right=nullptr;
    }
}

node* BinaryTree::search(int key) {
    return search(key, root);
}

void BinaryTree::destroy_tree() {
    destroy_tree(root);
}