


Merge k sorted linked lists and return it as one sorted list.

Example :

1 -> 10 -> 20
4 -> 11 -> 13
3 -> 8 -> 9
will result in

1 -> 3 -> 4 -> 8 -> 9 -> 10 -> 11 -> 13 -> 20




struct mycmp{
     bool operator()(ListNode* a,ListNode* b)
     {
         return a->val>b->val;
     }
 };
ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    priority_queue<ListNode*,vector<ListNode*> ,mycmp>pq;
    for(ListNode* x:A){
       if(x)pq.push(x);
    }
    ListNode* head=NULL;
    ListNode* tail=NULL;
  
    while(!pq.empty())
    {   ListNode* x=pq.top();
    pq.pop();
        if(head==NULL)
        {
           tail=x;head=tail;
        }
        else
        {
            tail->next=x;
            tail=x;
        }
        if(x->next)
        pq.push(x->next);
    }
    return head;
}
