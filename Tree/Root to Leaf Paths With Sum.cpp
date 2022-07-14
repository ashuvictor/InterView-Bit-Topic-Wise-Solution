




/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void solve(TreeNode* A,vector<int>&path,vector<vector<int>>&ans,int sum,int target)
 {
     if(A->left==NULL and A->right==NULL and sum==target){
         ans.push_back(path);
         return;
     }
     if(A->left){
         path.push_back(A->left->val);
         solve(A->left,path,ans,sum+A->left->val,target);
         path.pop_back();
     }
       if(A->right){
         path.push_back(A->right->val);
         solve(A->right,path,ans,sum+A->right->val,target);
         path.pop_back();
     }
 }
vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    vector<vector<int>>ans;
    if(A==NULL)
    return ans;
    vector<int>path;
    path.push_back(A->val);
    solve(A,path,ans,A->val,B);
    return ans;
}
