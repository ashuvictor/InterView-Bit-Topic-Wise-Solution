
 TreeNode* solve(const vector<int> &A,int s,int e)
 {
     if(s>e)
     return NULL;
     int mid=(s+e)>>1;
     TreeNode* root=new TreeNode(A[mid]);
     root->left=solve(A,s,mid-1);
     root->right=solve(A,mid+1,e);
     return root;
 }
TreeNode* Solution::sortedArrayToBST(const vector<int> &A) {
    int n=A.size()-1;
    return solve(A,0,n);
}
