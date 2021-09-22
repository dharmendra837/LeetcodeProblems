/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *m=head;
        ListNode *empty;
        int count=0,x=1;
        while(m!=NULL)
        {
            count++;
            m=m->next;
        }
        if(count==1)
        {
           if(count==n)
           {
               return m;
           }
        }
        m=head;
        count=count-n;
        while(count!=x  && count!=0)
        {
            m=m->next;x++;
        }
        if(count==0)
            m=m->next;
        else{
         m->next=m->next->next;
         m=head;}
        
        return m;
        
    }
};