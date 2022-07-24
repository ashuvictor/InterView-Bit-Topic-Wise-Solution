/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A) {
    ListNode* curr=A;
    ListNode* prevptr=NULL;
    ListNode* nextptr=NULL;
    while(curr!=NULL)
    {
        nextptr=curr->next;
        curr->next=prevptr;
        prevptr=curr;
        curr=nextptr;
    }
    return prevptr;
}
