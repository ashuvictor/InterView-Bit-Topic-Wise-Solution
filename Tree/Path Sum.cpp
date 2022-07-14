


 bool solve(TreeNode* A,int sum,int target){
     if(A->left==NULL and A->right==NULL and sum==target)
     return true;
     bool l=false;
     if(A->left){
         l=solve(A->left,sum+A->left->val,target);
         
     }
     bool r=false;
     if(A->right){
         r=solve(A->right,sum+A->right->val,target);
     }
     return l || r;
 }
int Solution::hasPathSum(TreeNode* A, int B) {
    if(A==NULL)
    return false;
    return solve(A,A->val,B);
}
