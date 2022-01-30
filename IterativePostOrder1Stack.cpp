#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class Solution{
    public:
        vector<int> postorderTraversal(TreeNode* root){
            vector<int> postorder;
            stack<TreeNode*> s1;
            TreeNode* current = root;
            
            while(current != NULL || s1.empty()){
                if(current != NULL){
                    s1.push(current);
                    current= current->left;
                }

                else{
                    TreeNode* temp = s1.top()->right;
                    if(temp == NULL){
                        temp=s1.top();
                        s1.pop();
                        postorder.push_back(temp->val);
                        while(!s1.empty() && temp == s1.top()->right){
                            temp = s1.top();
                            s1.pop();
                            postorder.push_back(temp->val);
                        }
                    }
                    else{
                        current = temp;
                    }
                }
            }
            return postorder;
        }
};