// Leetcode - LinkedList-Easy:

/*
Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

Input: head = [1,1,2]
Output: [1,2]

Input: head = [1,1,2,3,3]
Output: [1,2,3]

*/

// Approach- Two Pointer Algo:

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
    ListNode* deleteDuplicates(ListNode* head) {
        // if list  has no or single node:
        if(head==NULL || head->next==NULL)return head;

        // two pointers for iteration:
        ListNode* slow=head;
        ListNode* fast=slow->next;
        // iterate untill fast points to NULL:
        while(fast !=NULL){
            // if fast->val == slow->val:update links
            if(slow->val==fast->val){
                fast=fast->next;
                slow->next=fast;
            }
            // else iterate the rest list:
            else{
            slow=slow->next;
            fast=fast->next;
            }
        }
        // return head pointer:
        return head;
    }
};

// Time: 8ms(91.76% faster).
// Memory:11.6mb (79.50% effecient)
