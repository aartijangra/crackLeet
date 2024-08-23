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
    ListNode* Reverse(ListNode* head){
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp){
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
        
    }
    
    
    bool isPalindrome(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* newHead = Reverse(slow->next);
        
        ListNode* first = head;
        ListNode* second = newHead;
        
        while(second != NULL){
            if(first->val != second->val){
                Reverse(newHead);
                return false;
            }
            first = first->next;
            second = second->next;
        }
        Reverse(newHead);
        return true;
    }
};