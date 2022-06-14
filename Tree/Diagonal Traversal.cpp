

Consider lines of slope -1 passing between nodes.

Given a Binary Tree A containing N nodes, return all diagonal elements in a binary tree belonging to same line.

NOTE:

See Sample Explanation for better understanding.
Order does matter in the output.
To get the same order as in the output traverse the tree same as we do in pre-order traversal.

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
    { TreeNode* temp=q.front();
    q.pop();
        while(temp!=NULL)
        {
            ans.push_back(temp->val);
            if(temp->left)
            q.push(temp->left);
            temp=temp->right;
        }
    }
    return ans;
}
