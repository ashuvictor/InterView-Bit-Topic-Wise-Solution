

 int dfs(TreeNode* A)
 {
     if(A==NULL)
     return 0;
     int l=dfs(A->left);
     if(l==-1)
     return -1;
     int r=dfs(A->right);
     if(r==-1)
     return -1;
     if(abs(l-r)>1)
     return -1;
     return max(l,r)+1;
 }
int Solution::isBalanced(TreeNode* A) {
    return dfs(A)!=-1;
}
