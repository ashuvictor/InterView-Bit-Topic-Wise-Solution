
Given a binary tree, return the Postorder traversal of its nodes values.

NOTE: Using recursion is not allowed.



/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::postorderTraversal(TreeNode* A) {
    vector<int>ans;
    if(A==NULL)
    return ans;
    stack<TreeNode*>st;
    st.push(A);
    while(!st.empty())
    { TreeNode* temp=st.top();
    ans.push_back(temp->val);
    st.pop();
    if(temp->left)
    st.push(temp->left);
    if(temp->right)
    st.push(temp->right);

    }
    reverse(ans.begin(),ans.end());
    return ans;
}
