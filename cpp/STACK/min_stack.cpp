//LEETCODE-STACK:
/*

Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

Implement the MinStack class:

MinStack() initializes the stack object.
void push(val) pushes the element val onto the stack.
void pop() removes the element on the top of the stack.
int top() gets the top element of the stack.
int getMin() retrieves the minimum element in the stack.

Example 1:

Input
["MinStack","push","push","push","getMin","pop","top","getMin"]
[[],[-2],[0],[-3],[],[],[],[]]

Output
[null,null,null,null,-3,null,0,-2]

Explanation
MinStack minStack = new MinStack();
minStack.push(-2);
minStack.push(0);
minStack.push(-3);
minStack.getMin(); // return -3
minStack.pop();
minStack.top();    // return 0
minStack.getMin(); // return -2
*/

//CODE:
class MinStack {
public:
    /** initialize your data structure here. */
    stack<long int>st;                //1-stack to store elements.
    stack<long int>min;               //2-stack to store minimum element at each index.

    //nothing to initialise:
    MinStack() {

    }

    //push operation:
    void push(long int val) {
        if(st.empty()!=0){          //if element is first in stack, push it in stack and also in  min.
            st.push(val);
            min.push(val);
        }
        else{
            st.push(val);                 //else push only element in st.
            if(st.top()<min.top()){        //check if element inserted is minimum .
                min.push(val);
            }
            else{
                long int minimm=min.top();         //or else again push the minimum element.
                min.push(minimm);
            }
        }
    }

    void pop() {                                   //while popping remove the element from both stacks.
        st.pop();
        min.pop();

    }

    int top() {
        return st.top();                             //returns top of 'st' stack.
    }

    int getMin() {
        return min.top();                          //returns top of 'min' stack.
    }
};

/*NOTE: ALL OPERATIONS TAKES CONSTANT TIME :O(1)*/

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */


//RUNTIME:16 ms, faster than 96.88% of C++ online submissions for Min Stack.
//Memory Usage: 16.6 MB, less than 10.34% of C++ online submissions for Min Stack.
