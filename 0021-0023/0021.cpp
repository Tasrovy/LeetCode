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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1) return list2;
        if(!list2) return list1;
        int data1 = list1->val;
        int data2 = list2->val;
        ListNode* ans = new ListNode;
        ListNode* curr = ans;
        while(list1&&list2){
            if(data1<data2){
                ListNode* next = new ListNode;
                curr->val = data1;
                curr->next = next;
                curr = curr->next;
                list1 = list1->next;
                if(list1)data1 = list1->val;
            }
            else{
                ListNode* next = new ListNode;
                curr->val = data2;
                curr->next = next;
                curr = curr->next;
                list2 = list2->next;
                if(list2)data2 = list2->val;
            }
        }
        while(list1){
                ListNode* next = new ListNode;
                curr->val = data1;
                curr->next = next;
                list1 = list1->next;
                if(list1){
                    data1 = list1->val;
                    curr = curr->next;
                }
                else{
                    curr->next = nullptr;
                    delete next;
                }
        }
        while(list2){
                ListNode* next = new ListNode;
                curr->val = data2;
                curr->next = next;
                list2 = list2->next;
                if(list2){
                    data2 = list2->val;
                    curr = curr->next;
                }
                else{
                    curr->next = nullptr;
                    delete next;
                }
        }
        return ans;
    }
};