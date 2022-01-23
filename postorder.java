import java.util.*;
import java.io.*;

// Definition for a binary tree node.
public class TreeNode{
    int value;
    TreeNode left;
    TreeNode right;
    TreeNode(int value){ this.value = value;}
    TreeNode(int value, TreeNode left, TreeNode right){ 
        this.value= value;
        this.left = left;
        this.right = right;
    }
}

class Solution{
    private void dfs(TreeNode node, List<Integer> postorder){
        if(node == null) 
            return;
        
        dfs(node.left, postorder);
        dfs(node.right, postorder);
        postorder.add(node.value);
    }

    public List<Integer> postorderTraversal(TreeNode root){
        List<Integer> postorder = new ArrayList<Integer>();
        dfs(root, postorder);
        return postorder;
    }
}