import java.util.*;
import java.io.*;


//Definition for a binary tree node.
public class TreeNode{
    int value;
    TreeNode left;
    TreeNode right;
    TreeNode(){}
    TreeNode(int value){this.value= value;}
    TreeNode(int value, TreeNode left, TreeNode right){
        this.value=value;
        this.left=left;
        this.right=right;
    }
}

class Solution{
    private void dfs(TreeNode node, List<Integer> preorder){
        if(node ==  null){
            return;
        }

        preorder.add(node.value);
        dfs(node.left, preorder);
        dfs(node.right, preorder);

    }

    public List<Integer> preorderTraversal(TreeNode root){
        List<Integer> preorder = new ArrayList<Integer>();
        dfs(root, preorder);
        return preorder;
    }
}