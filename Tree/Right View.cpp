
Given a binary tree A of integers. Return an array of integers representing the right view of the Binary tree.

Right view of a Binary Tree: is a set of nodes visible when the tree is visited from Right side.

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::solve(TreeNode* A) {
    vector<int>ans;
    if(A==NULL)
    return ans;
    queue<TreeNode*>q;
    q.push(A);
    while(!q.empty())
    {
        TreeNode* temp;
       
        int sz=q.size();
        while(sz--){
            temp=q.front();
            q.pop();
            if(temp->left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);
        }
        ans.push_back(temp->val);
    }
    return ans;
}
