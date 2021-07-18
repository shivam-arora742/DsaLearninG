//LEETCODE-LINKED LIST:
/*
Odd Even Linked List
Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.

The first node is considered odd, and the second node is even, and so on.

Note that the relative order inside both the even and odd groups should remain as it was in the input.

You must solve the problem in O(1) extra space complexity and O(n) time complexity.



Example 1:


Input: head = [1,2,3,4,5]
Output: [1,3,5,2,4]
*/

//Code:
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
        //check if list contains 0,1,2, return head only;
        if(head==NULL || head->next==NULL || head->next->next==NULL){
            return head;
        }
        //making odd and even head;
        ListNode *odd_head=head;
        ListNode *even_head=head->next;
        //2 pointers(odd and even for traversal)
        ListNode *odd=odd_head;
        ListNode *even=even_head;
        while(even!=NULL && even->next!=NULL){
            //make odd and even list seperate:
            odd->next=odd->next->next;
            even->next=even->next->next;

            odd=odd->next;
            even=even->next;

        }
        odd->next=even_head;
        return odd_head;
    }
};

//Runtime: 8 ms, faster than 92.70% of C++ online submissions for Odd Even Linked List.
//Memory Usage: 10.4 MB, less than 70.16% of C++ online submissions for Odd Even Linked List.
