#include <iostream>
#include <cstddef>
#include "BinaryTree/BinaryTree.h"
#include "BinaryTree/BinaryTree.cpp"


using namespace std;

int main() {

    auto *tree = new BinaryTree();

    int m;

    cin >> m;

    tree->insert(m);

    return 0;
}