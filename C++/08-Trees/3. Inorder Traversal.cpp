// Inorder Traversal of a Binary Tree
// Left → Root → Right
// Given the root of a binary tree, return the inorder traversal of its nodes' values.


#include <iostream>
#include <vector>
using namespace std;


struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
};

void inorderTraversal(TreeNode* root, vector<int>& result) {
    if (root == nullptr) {
        return;
    }
    
    inorderTraversal(root->left, result); 
    result.push_back(root->data); 
    inorderTraversal(root->right, result);
}

int main() {
    TreeNode* root = new TreeNode();
    root->data = 1;
    root->left = nullptr;
    root->right = new TreeNode();
    root->right->data = 2;
    root->right->left = new TreeNode();
    root->right->left->data = 3;
    root->right->right = nullptr;

    vector<int> result;
    inorderTraversal(root, result);

    cout << "Inorder Traversal: ";
    for (int value : result) {
        cout << value << " ";
    }
    cout << endl;

    delete root->right->left;
    delete root->right;
    delete root;

    return 0;
}