import java.util.*;
import java.io.*;

class Solution{
    public List<Integer> postorderTraversal(TreeNode root){
        stack<TreeNode> s1 = new Stack<TreeNode>();
        stack<TreeNode> s2 = new Stack<TreeNode>();
        List<Integer> postOrder = new ArrayList<Integer>();

        if(root == null)
            return postOrder;
        
        s1.push(root);
        while(!s1.isEmpty()){
            root= s1.pop();
            s2.add(root);
            if(root.left!=null) s1.push(root.left);
            if(root.right!=null) s1.push(root.right);
        }
        while(!s2.isEmpty()){
            postOrder.add(s2.pop().val);
        }
        return postOrder;
    }
}