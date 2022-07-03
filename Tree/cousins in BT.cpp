


Given a Binary Tree A consisting of N nodes.

You need to find all the cousins of node B.

NOTE:

Siblings should not be considered as cousins.
Try to do it in single traversal.
You can assume that Node B is there in the tree A.
Order doesn't matter in the output.


Problem Constraints
 1 <= N <= 105 

 1 <= B <= N



Input Format
First Argument represents the root of binary tree A.

Second Argument is an integer B denoting the node number.



Output Format
Return an integer array denoting the cousins of node B.

NOTE: Order doesn't matter.



/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::solve(TreeNode* A, int B) {
    queue<TreeNode*>q;
    vector<int>v;
    q.push(A);
    bool flag=true;
    while(q.size()!=0 and flag)
    {
        int n=q.size();
        for(int i=0;i<n;i++){
            TreeNode* p=q.front();
            q.pop();
            if((p->left and p->left->val==B) or(p->right and p->right->val==B))
            flag=false;
            else
            {
                if(p->left)
                q.push(p->left);
                if(p->right)
                q.push(p->right);
            }
        }
    }
    while(!q.empty())
    {v.push_back(q.front()->val);q.pop();
    }
return v;}
