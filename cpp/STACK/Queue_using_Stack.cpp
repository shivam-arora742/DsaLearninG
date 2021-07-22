// LEETCODE: Implement Queue using Stacks:

// Implement a first in first out (FIFO) queue using only two stacks. 
//The implemented queue should support all the functions of a normal queue (push, peek, pop, and empty).

// Example 1:
// Input
// ["MyQueue", "push", "push", "peek", "pop", "empty"]
// [[], [1], [2], [], [], []]
// Output
// [null, null, null, 1, 1, false]

// Explanation:
// MyQueue myQueue = new MyQueue();
// myQueue.push(1); // queue is: [1]
// myQueue.push(2); // queue is: [1, 2] (leftmost is front of the queue)
// myQueue.peek(); // return 1
// myQueue.pop(); // return 1, queue is [2]
// myQueue.empty(); // return false

// Code:
class MyQueue {
public:
    /** Initialize your data structure here. */
    stack<int> tmp;        //temporary stack .
    stack<int> res;       //resultant stack .
    
    // No initalisation required.
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) { 
        if(res.empty()){         //if element is first to pushed in , simply add in res stack. 
            res.push(x);
        }
        else{                         //else first empty res stack with help of tmp stack and add the element.
            while(!res.empty()){
                tmp.push(res.top());
                res.pop();
            }
             res.push(x);
            while(!tmp.empty()){
                res.push(tmp.top());
                tmp.pop();
            }
        }
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
       int x=res.top();       //in pop remove 1st (top) element of res stack. 
        res.pop();
        return x;
    }
    
    /** Get the front element. */
    int peek() {                       //return top most element of stack.
        int x=res.top();
        return x;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        if(res.empty()){         //if res stack is empty, return true.
            return true;
        }
        else{
            return false;         //else false.
        }
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

// Runtime: 0 ms.
// Memory: 7.1 mb.