



int Solution::isSameTree(TreeNode* A, TreeNode* B) {
    if(A==NULL and B==NULL)
      return true;
      return A and B and (A->val==B->val) and isSameTree(A->left,B->left) and isSameTree(A->right,B->right);   
}