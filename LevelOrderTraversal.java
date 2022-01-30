import java.util.*;
import java.io.*;

class Solution{
    public List<List<Integer>> levelOrder(TreeNode root){

        Queue<TreeNode> queue =new LinkedList<TreeNode>();
        List<List<Integer>> result = new LinkedList<List<Integer>>();

        //Base Case: 
        if(root == null)
           return result;
        
        queue.offer(root);
        while(!queue.isEmpty()){

            int levelNum= queue.size();
            List<Integer> level = new LinkedList<Integer>();

            for(int i=0; i<levelNum; i++){

                if(queue.peek().left != null)
                   queue.offer(queue.peek().left);

                if(queue.peek().right!= null)
                   queue.offer(queue.peek().right);

                level.add(queue.poll().val);

            }

            result.add(level);
        }
        
        return result;
    }
}