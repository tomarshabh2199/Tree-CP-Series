void PreOrder(Node *node) {
    if(node == null)
    {
        return ;
    }

    print(node->data);
    print(node->left);
    print(node->right);
}