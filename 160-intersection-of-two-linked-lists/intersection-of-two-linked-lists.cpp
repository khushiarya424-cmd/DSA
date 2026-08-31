/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
  
  ListNode*t1=headA;
  ListNode*t2=headB;

  int count_A=0;
  int count_B=0;
  //length of first LL
  ListNode*temp=headA;

  while(temp!=nullptr){
    count_A++;
    temp=temp->next;
  }
  temp=headB;

  while(temp!=nullptr){
    count_B++;
    temp=temp->next;
  }

  int diff=abs(count_A-count_B);

  if(count_A>count_B){
    while(diff!=0){
        diff--;
        t1=t1->next;
    }
  }

  if(count_B>count_A){
    while(diff!=0){
        diff--;
        t2=t2->next;
    }
  }

  while(t2!=nullptr){
    if(t1==t2){
        return t1;
    }
    t1=t1->next;
    t2=t2->next;
  }
  return nullptr;



  

        
    }
};