// Preorder Traversal of a Binary Tree
//Given the root of a binary tree, return the preorder traversal of its nodes' values.

//Example 1:
//Input: root = [1,null,2,3]
//Output: [1,2,3]

#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
};

void preorderTraversal(TreeNode* root, vector<int>& result) {
    if (root == nullptr) {
        return;
    }
    
    result.push_back(root->data); 
    preorderTraversal(root->left, result); 
    preorderTraversal(root->right, result);
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
    preorderTraversal(root, result);

    cout << "Preorder Traversal: ";
    for (int value : result) {
        cout << value << " ";
    }
    cout << endl;

    delete root->right->left;
    delete root->right;
    delete root;

    return 0;
}