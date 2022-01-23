import java.util.*;
import java.io.*;

class BinaryTreeRepresentationinJava{

    //Node class
    class Node{
        int data;
        Node left;
        Node right;

        //Constructor
        public Node(key)
        {
            this.data = key;
            this.left = null;
            this.right = null;
        }
    }

    public static void main(String[] args){
        Node root= new Node(1);
        root.left = new Node(2);
        root.right = new Node(3);
        root.left.left = new Node(4);
    }
}