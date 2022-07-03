



/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* A) {
    vector<vector<int>>ans;
    if(A==NULL)
    return ans;
   map<int,vector<int>>m;
   queue<pair<TreeNode*,int>>q;
   q.push({A,0});
   while(!q.empty())
   {
       int vertical=q.front().second;
      TreeNode* node=q.front().first;
      q.pop();
      m[vertical].push_back(node->val);
      if(node->left)
      q.push({node->left,vertical-1});
      if(node->right)
      q.push({node->right,vertical+1});
      
   }
   for(auto x:m){
       vector<int>temp;
       for(auto y:x.second){
           temp.push_back(y);
       }
       ans.push_back(temp);
   }
   return ans;
}
