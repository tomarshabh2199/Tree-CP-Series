import java.util.*;
import java.io.*;

class Solution{
    public List<Integer> preorderTraversal(TreeNode root){
        List<Integer> preorder = new ArrayList<Integer>();

        //Base Case: 
        if(root == null)
            return preorder;
        
        Stack<TreeNode> st = new Stack<TreeNode>();
        st.psuh(root);
        while(!st.isEmpty()){
            root=st.top();
            st.pop();

            preorder.add(root.value);

            if(root.right != null){
                st.push(root.right);
            }

            if(root.left != null){
                st.push(root.left);
            }
        }
        return preorder;
    }
}