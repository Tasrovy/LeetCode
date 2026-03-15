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
        if(!head->next || !head) return nullptr;
        ListNode* ans = head;
        ListNode* s = head;
        ListNode* q = head;
        for(int i = 0;i<n;i++){
            q = q->next;
        }
        if(q == nullptr){
            ans = s->next;
            delete s;
            return ans;
        }
        while(true){
            if(q->next!=nullptr){
                q = q->next;
                s = s->next;
            }
            else{
                ListNode* d = s->next;
                s->next = s->next->next;
                delete d;
                break;
            }
        }
        return ans;
    }
};