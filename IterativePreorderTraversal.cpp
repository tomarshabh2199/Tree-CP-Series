#include<iostream>
using namespace std;

class Solution{
    public:
    vector<int> preOrderTraversal(TreeNode* root){
        vector<int> preorder;

        //Base Case:
        if(root == NULL)
           return preorder;
        
        stack<TreeNode*> st;
        st.psuh(root);
        while(!st.empty()){
            root= st.top();
            st.pop();

            preorder.push_back(root->val);

            if(root->right != NULL){
                st.push(root->right);
            }

            if(root->left!= NULL){
                st.push(root->left);
            }

        }
        return preorder;
    }
};