#include<iostream>
using namespace std;

class Solution{
    public:
        vector<int> postOrderTraversal(TreeNode* root){
            vector<int> postorder;
            //Base case :
            if(root == NULL)
                return postorder;
            stack<TreeNode*> s1,s2;
            s1.push(root);
            while(!s1.empty()){
                root=s1.top();
                s1.pop();
                s2.push(root);

                if(root->left != NULL){
                    s1.push(root->left);
                }

                if(root->right != NULL){
                    s1.push(root->right);
                }
            }

            while(!s2.empty()){
                postorder.push_back(s2.top()->val);
                s2.pop();
            }
            return postorder;
        }
};