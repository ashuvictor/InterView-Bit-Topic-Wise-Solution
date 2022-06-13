
Given an array of integers A.  There is a sliding window of size B which 

is moving from the very left of the array to the very right. 

You can only see the w numbers in the window. Each time the sliding window moves 

rightwards by one position. You have to find the maximum for each window. 

The following example will give you more clarity.

The array A is [1 3 -1 -3 5 3 6 7], and B is 3.

Window position	Max
———————————-	————————-
[1  3  -1] -3  5  3  6  7	3
1 [3  -1  -3] 5  3  6  7	3
1  3 [-1  -3  5] 3  6  7	5
1  3  -1 [-3  5  3] 6  7	5
1  3  -1  -3 [5  3  6] 7	6
1  3  -1  -3  5 [3  6  7]	7
Return an array C, where C[i] is the maximum value of from A[i] to A[i+B-1].

Note: If B > length of the array, return 1 element with the max of the array.





vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
deque<int>dq;
vector<int>ans;
for(int i=0;i<B;i++){
    while(!dq.empty() and dq.back()<A[i])
    dq.pop_back();
    dq.push_back(A[i]);
}
ans.push_back(dq.front());
for(int i=B;i<A.size();i++){
if(dq.front()==A[i-B])
dq.pop_front();
while(!dq.empty() and dq.back()<A[i])
dq.pop_back();
dq.push_back(A[i]);
ans.push_back(dq.front());
}
return ans;
}