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
        int cnt = 0;
        ListNode* temp = head;
        while(temp){
            cnt++;
            temp = temp->next;
        }
        if(n == cnt){
            ListNode* newHead = head->next;
            return newHead;
            free(head);
        }
        
        int res = cnt-n; temp=head;
        while(temp){
            res--;
            if(res==0) break;
            else temp=temp->next;
        }
        ListNode* delNode = temp->next;
        temp->next = temp->next->next;
        // free(delNode);
        return head;
        
    }
};