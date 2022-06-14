


Given a binary tree, return the inorder traversal of its nodes values.

NOTE: Using recursion is not allowed.
vector<int> Solution::inorderTraversal(TreeNode* A) {
    vector<int>ans;
    if(A==NULL)
    return ans;
    stack<TreeNode*>st;
    TreeNode* curr=A;
    while(curr!=NULL or !st.empty())
    {
        while(curr!=NULL)
        {
            st.push(curr);
            curr=curr->left;
        }
        ans.push_back(st.top()->val);
        curr=st.top()->right;
        st.pop();
    }
    return ans;
}
