import java.util.*;
import java.io.*;


// Definition for a binary tree node.
 public class TreeNode {
    int val;
     TreeNode left;
     TreeNode right;
     TreeNode() {}
     TreeNode(int val) { this.val = val; }
     TreeNode(int val, TreeNode left, TreeNode right) {
         this.val = val;
         this.left = left;
         this.right = right;
     }
 }
class Solution{
    private void dfs(TreeNode node, List<Integer> inorder){
        if(node == null)
           return;
        
        dfs(node.left, inorder);
        inorder.add(node.value);
        dfs(node.right, inorder);
    }

    public List<Integer> inorderTraversal(TreeNode root){
        List<Integer> inorder = new ArrayList<Integer>();
        dfs(root, inorder);
        return inorder;
    }
}