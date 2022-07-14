/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */Given a binary tree, return the reverse level order traversal of its nodes values. (i.e, from left to right and from last level to starting level).



Problem Constraints
1 <= number of nodes <= 5 * 105

1 <= node value <= 105



Input Format
First and only argument is a pointer to the root node of the Binary Tree, A.



Output Format
Return an integer array denoting the reverse level order traversal from left to right.



Example Input
Input 1:

    3
   / \
  9  20
    /  \
   15   7
Input 2:

   1
  / \
 6   2
    /
   3


Example Output
Output 1:

 [15, 7, 9, 20, 3] 
Output 2:

 [3, 6, 2, 1]
vector<int> Solution::solve(TreeNode* A) {
    vector<int>ans;
    if(A==NULL)
    return ans;
    queue<TreeNode*>q;
    q.push(A);
    while(!q.empty())
    {
        int sz=q.size();
        while(sz--){
            TreeNode* temp=q.front();
            q.pop();
            ans.push_back(temp->val);
            if(temp->right)
            q.push(temp->right);
            if(temp->left)
            q.push(temp->left);
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
