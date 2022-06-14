


vector<int> Solution::preorderTraversal(TreeNode* A) {
    vector<int>ans;
    if(A==NULL)
    return ans;
    stack<TreeNode*>st;
    st.push(A);
    while(!st.empty())
    {
    TreeNode* temp=st.top();
    st.pop();
    ans.push_back(temp->val);
    if(temp->right)
    st.push(temp->right);
    if(temp->left)
    st.push(temp->left);
    }
    return ans;
}
