import java.util.*;
import java.io.*;

class Solution{
    public List<Integer> postorderTraversal(TreeNode root){
        Stack<TreeNode> s1 = new Stack<TreeNode>();
        List<Integer> postOrder = new ArrayList<Integer>();

        if(root == null)
            return postOrder;

        TreeNode current = root;
        while(current != null || !s1.isEmpty()){
            if(current != null){
                s1.push(current);
                current = current.left;
            }
            else{
                TreeNode temp = s1.peek().right;
                if(temp == null){
                    temp = s1.pop();
                    postOrder.add(temp.val);
                }
                while( !s1.isEmpty() && temp == s1.peek().right){
                    temp = s1.pop();
                    postOrder.add(temp.val);
                }
                    
            }
            else{
                current =temp;
            }
        }
    }
    return postOrder;
}