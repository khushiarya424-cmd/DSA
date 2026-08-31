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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode*temp1=l1;
        ListNode*temp2=l2;
        ListNode*ansHead=new ListNode(-1);
        ListNode*ans=ansHead;
        int carry=0;


        while(temp1!=nullptr && temp2!=nullptr){

          int sum=temp1->val + temp2->val + carry;
          ans->next=new ListNode(sum%10);
          ans=ans->next;
          carry=sum/10;
           
          temp1=temp1->next;
          temp2=temp2->next;
        }

        
             while(temp1!=nullptr){
                int sum=temp1->val+carry;
                ans->next=new ListNode(sum%10);
                ans=ans->next;
                carry=sum/10;
             
                temp1=temp1->next;
             }

        

        
            while(temp2!=nullptr){
                int sum=temp2->val+carry;
                ans->next=new ListNode(sum%10);
                ans=ans->next;
                carry=sum/10;

                
                temp2=temp2->next;
            }
        

        if(carry==1){
            ListNode* newNode=new ListNode(1);
            ans->next=newNode;
            //head=newNode;
        }


        return ansHead->next;
    }


};