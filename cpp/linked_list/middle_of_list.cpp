//LEETCODE-LINKED-LIST-PROBLEM
//Find Middle Point In List:
//Given a non-empty, singly linked list with head node head, return a middle node of linked list.If there are two middle nodes, return the second middle node.

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
    ListNode* middleNode(ListNode* head) {

        //solution using 2 pointers:

        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=nullptr && fast->next->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast->next==nullptr){
            return slow;
        }
        else{
        return slow->next;
        }
    }
};
//time:0 ms (100% faster).
//space:6.6mb.
