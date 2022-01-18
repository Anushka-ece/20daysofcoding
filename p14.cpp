class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
if (n == 0) return NULL;
if (n == 1) return lists[0];

ListNode* head = NULL;
ListNode* cur = NULL;
while (true) {
    int min_idx = -1;
    int min_val = INT_MAX;
    ListNode* min_node = NULL;
    for (int i = 0; i < n; i++) {
        if (lists[i] == NULL) continue;
        if (lists[i]->val < min_val) {
            min_val = lists[i]->val;
            min_idx = i;
            min_node = lists[i];
        }
    }
    if (min_idx >= 0) {
        lists[min_idx] = lists[min_idx]->next;
        if (cur == NULL) {
            head = cur = min_node;
        } else {
            cur->next = min_node;
            cur = min_node;
        }
    } else {
        break;
    }
}
return head;
    }
};
