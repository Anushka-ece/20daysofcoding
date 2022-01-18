class Solution {
public:
    
      ListNode* reverse(ListNode* head){
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* rechead = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return rechead;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* ahead = head;       
        ListNode* end = head;

        int temp = 0;
        while(temp < k){
            if(ahead == NULL){
                return head;
            }
            ahead = ahead->next;
            temp++;
            if(temp == k-1){
                end = ahead;
            }   
        }
        ListNode* recHead = reverseKGroup(ahead,k);
        end->next = NULL;
        ListNode* revRecHead = reverse(head);
        end = revRecHead;
        while(end->next != NULL){
            end = end->next;
        }
        end->next = recHead;
        return revRecHead;  
    }
};
