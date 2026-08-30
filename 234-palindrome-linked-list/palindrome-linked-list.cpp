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
    bool isPalindrome(ListNode* head) {

        //finding middle of LL

        ListNode*fast=head;
        ListNode*slow=head;

        while(fast->next!=nullptr && fast->next->next!=nullptr){
            //here for even-length LL we are taking first middle
            // so that we can have second half of the LL separately
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode*first=head;
        ListNode*second=ReverseFunc(slow->next);  // for the new head of the reversed-second half that we'll receive
        
        while(second!=nullptr){

            if(second->val!=first->val){
             
               return false;

            }
            first=first->next;
            second=second->next;
        }

        return true;
 
    }

    ListNode* ReverseFunc(ListNode*head){

        ListNode*temp=head;
        ListNode*back=nullptr;

        while(temp!=nullptr){
            ListNode*front=temp->next;
            temp->next=back;
            back=temp;
            if(front==nullptr){
                head=temp;
            }
            temp=front;
        }
        return head;


    }
};