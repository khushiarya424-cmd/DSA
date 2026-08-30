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
     
     if(head==nullptr){
        return nullptr;
     }
     if(head->next==nullptr){
        return nullptr;
     }

     int count=countfunc(head);
     if(n>count){
        return nullptr;
     }
    
     int counter=0;

     ListNode*temp=head;

     if(n==count){
        head=temp->next;
        temp->next=nullptr;
        delete temp;
        
        return head;
     }

     while(temp!=nullptr){

        counter++;
        
        int diff=count-counter;

        if(diff==n){
            ListNode*del=temp->next;
            temp->next=temp->next->next;
            del->next=nullptr;
            delete del;
        }
        temp=temp->next;
     }
     return head;
        
    }

    int countfunc(ListNode* head){
        ListNode*temp=head;

        int count=0;

        while(temp!=nullptr){
            count++;
            temp=temp->next;
        }
        return count;

    }
};