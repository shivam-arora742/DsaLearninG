
//Problem Statement : Implement Stack using 2 queues.

//Approach-1:
//push operation costly=O(N)
//pop()=O(1)
void QueueStack :: push(int x)
{
        // Your Code
        //if q1 =empty:enqueue element directly;
        if(q1.empty()){
            q1.push(x);
        }
        else{
                //remove all elements from q1 and insert to q2.
         while(!q1.empty()){
                q2.push(q1.front());
                q1.pop();
            }
        //insert new element to q1.
            q1.push(x);
            //push all elements back to q1.
            while(!q2.empty()){
                q1.push(q2.front());
                q2.pop();
            }
        }
}

//Function to pop an element from stack using two queues.
int QueueStack :: pop()
{
        //simply pop() front element from q1.
       int x=q1.front();
        q1.pop();
        return x;
}


//-------------------------------------------------------------------------------


//Approach-2:
//pop() operation costly=O(N)
//push()=O(1)

void QueueStack :: push(int x)
{
        // Your Code
        //simply push() (x) element to q1.
        q1.push(x);
}

//Function to pop an element from stack using two queues.
int QueueStack :: pop()
{
        // pop all elements from q1 and push to q2,except the last one.

        int x=0;
        if(q1.empty())return -1;
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        //for last element in q1 ,push to output or return value.
        if(q1.size()==1){
            x=q1.front();
            q1.pop();
        }
        // Again,pop all elements from q2 and push to q1.
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        //return (x)element removed from q1.
        return x;
}

