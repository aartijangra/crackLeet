/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        bool flag = false;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
            
            if(fast == slow){
                flag = true;
                break;
            } 
        }
        
        if(!flag) return NULL;
        
        else{
            ListNode* temp = head;
            while(temp!=slow){
                temp = temp->next;
                slow = slow->next;
            }
            return slow;
        }
    }
};