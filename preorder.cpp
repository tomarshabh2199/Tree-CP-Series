#include<iostream>
using namespacestd;

// Definition for a binary tree node.
struct TreeNode{
    int value;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : value(0), left(nullptr), right(nullptr){}
    TreeNode(int x): value(x), left(nullptr), right(nullptr){}
    TreeNode(int x, TreeNode *left, TreeNode *right): value(x), left(left), right(right){}

};

class Solution {
    private :
    void dfs(TreeNode *node, vector<int> &preorder){
        if(node == NULL) return;

        preorder.push_back(node->value);
        dfs(node->left, preorder);
        dfs(node->right, preorder);
    }

    public: 
        vector<int> preorderTraversal(TreeNode* root){
            vector<int> preorder;
            dfs(root, preorder);
            return preorder;
        }
}