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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        for(int i = 0;i<k;i++){
            if(!temp) return head;
            temp = temp->next;
        }
        temp = head;
        vector<ListNode*> data;
        for(int i = 0;i<k;i++){
            data.push_back(temp);
            temp = temp->next;
        }
        ListNode* nextHead = data[k - 1]->next;
        for(int i = 0;i<k-1;i++){
            data[k-1-i]->next = data[k-2-i];
        }
        ListNode* ans = data[k-1];
        vector<ListNode*>().swap(data);
        head->next = reverseKGroup(nextHead, k);
        return ans;
    }
};