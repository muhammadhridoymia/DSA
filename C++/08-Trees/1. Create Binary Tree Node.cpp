// Create a simple binary tree node in C++
// Given a binary tree, create a simple binary tree with a few nodes and print its elements. The binary tree should support basic operations like adding nodes and printing the tree.
// example: Create a binary tree with nodes containing values 1, 2, and 3 => output: Binary Tree (In-order): 2 1 3 (after creating the binary tree and printing its elements in in-order traversal)
#include <iostream>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
};

int main() {
    
    TreeNode* root = new TreeNode();
    root->data = 1;
    root->left = new TreeNode();
    root->left->data = 2;
    root->right = new TreeNode();
    root->right->data = 3;
    root->left->left = nullptr;
    root->left->right = nullptr;
    root->right->left = nullptr;
    root->right->right = nullptr;

    
    cout << "Binary Tree (In-order): ";
    
    cout << endl;


    delete root->left;
    delete root->right;
    delete root;

    return 0;
}