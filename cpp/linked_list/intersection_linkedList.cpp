// Leetcode-Intersection of LinkedList-Easy:

/*
Intersection of Two Linked Lists

Given the heads of two singly linked-lists headA and headB,
return the node at which the two lists intersect.
If the two linked lists have no intersection at all, return null.

Input: intersectVal = 8, listA = [4,1,8,4,5], listB = [5,6,1,8,4,5], skipA = 2, skipB = 3
Output: Intersected at '8'
Explanation: The intersected node's value is 8 (note that this must not be 0 if the two lists intersect).
From the head of A, it reads as [4,1,8,4,5]. From the head of B, it reads as [5,6,1,8,4,5]. There are 2 nodes before the intersected node in A;
There are 3 nodes before the intersected node in B.
*/

//Basic Approach:
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
        // ptr for list A:
        ListNode* ptr1=headA;
//         ptr for list B:
        ListNode* ptr2=headB;
        
//         iterate over both lists to find intersection point:
        while(ptr1!=ptr2){
            ptr1=ptr1?ptr1->next:headB;
            ptr2=ptr2?ptr2->next:headA;
        }
        return ptr2;
        
    }
};
// Time: 84ms    Memory:14.6MB

// ------------------------------------------------------------------------

// Effecient Approach:

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
       
        int lenA=0,lenB=0,diff=0;
        ListNode *nA=headA,*nB=headB;
        
//         Calculate length of listA
        while(nA!=NULL){
            nA=nA->next;
            lenA++;
        }
        
        //         Calculate length of listB
         while(nB!=NULL){
            nB=nB->next;
            lenB++;
        }
        
        ListNode *ptrA=headA;
        ListNode *ptrB=headB;
        
//         Now calculate diff btw lengths of list & move the ptr of larger list by diff times:
        
        if(lenA>lenB){
            diff=lenA-lenB;
            while(diff>0){
                ptrA=ptrA->next;
                diff--;
        }
        }
        else{
            diff=lenB-lenA;
                while(diff>0){
                ptrB=ptrB->next;
                diff--;
        }
        }
        
//         Now compare ptrs of each list for intersection
        while(ptrA!=ptrB){
            ptrA=ptrA->next;
            ptrB=ptrB->next;
        }
        
        return ptrA;
    }
};

// TIme:54ms(79.37% faster)
// Memory:14.5mb (88.50% lesser)
