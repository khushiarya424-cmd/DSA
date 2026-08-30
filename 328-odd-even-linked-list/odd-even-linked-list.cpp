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
    ListNode* oddEvenList(ListNode* head) {

        if(head==nullptr){
            return nullptr;
        }
        if(head->next==nullptr || head->next->next==nullptr){
            return head;
        }
        ListNode*fast=head;
        ListNode*temp=head;
        ListNode*slow=temp->next;
        ListNode*save=slow;

        while(slow!=nullptr && slow->next!=nullptr){
            ListNode*temp_1=fast->next->next;
            ListNode*temp_2=slow->next->next;

            fast->next=fast->next->next;
            slow->next=slow->next->next;

            fast=temp_1;
            slow=temp_2;
        }
        fast->next=save;
        return head;
    }
};