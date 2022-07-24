 bool solve(TreeNode* x,TreeNode* y){
     if(x==NULL and y==NULL)
     return true;
     return x and y and (x->val==y->val) and solve(x->left,y->right) and solve(x->right,y->left);
 }
int Solution::isSymmetric(TreeNode* A) {
    if(A==NULL)
    return true;
    return solve(A->left,A->right);
}
