/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void recurse(TreeNode<int> * node, int &ans, int X){
    
    if(node == NULL)
        return;
    
    if(node->val == X){
        ans = X;
    }else if(node->val < X){
        ans = node->val;
        recurse(node->right , ans, X);
    }else{
        recurse(node->left , ans, X);
    }
    
}
int floorInBST(TreeNode<int> * root, int X)
{
    // Write your code here.
    int mini=INT_MIN;
    recurse(root , mini , X);

    return mini;
}