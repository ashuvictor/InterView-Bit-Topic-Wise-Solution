 void solve(TreeNode* &A){
     if(A==NULL)
     return;
     solve(A->left);
     solve(A->right);
     swap(A->left,A->right);
 }
TreeNode* Solution::invertTree(TreeNode* A) {
    solve(A);
    return A;
    
}
