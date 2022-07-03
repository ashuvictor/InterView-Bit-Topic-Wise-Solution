


Given a binary tree, return the zigzag level order traversal of its nodes’ values. (ie, from left to right, then right to left for the next level and alternate between).

Example : 

Given binary tree

    3
   / \
  9  20
    /  \
   15   7
return

[
         [3],
         [20, 9],
         [15, 7]
]

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
    vector<vector<int>>ans;
    if(A==NULL)
    return ans;
    queue<TreeNode*>q;
    q.push(A);
    bool flag=false;
    while(!q.empty())
    {
        int sz=q.size();
        vector<int>row;
        while(sz--){
            TreeNode* temp=q.front();
            q.pop();
            row.push_back(temp->val);
            if(temp->left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);
            
        }
        if(flag)
        reverse(row.begin(),row.end());
        ans.push_back(row);
        flag=!flag;
    }
return ans;}