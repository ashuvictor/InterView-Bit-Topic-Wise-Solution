vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    vector<vector<int>>v;
    unordered_map<string,vector<int>>mp;
    for(int i=0;i<A.size();i++){
        string temp=A[i];
        sort(temp.begin(),temp.end());
        mp[temp].push_back(i+1);
    }
    for(auto x:mp){
        v.push_back(x.second);
    }
    return v;
}
