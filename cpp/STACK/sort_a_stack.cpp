/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s
you are required to complete the below method */
void SortedStack :: sort()
{
   int n=s.size();
   int res[n];        //create array of size==no.of elements in stack
   int i=0;
   while(s.empty()==false){    //traverse whole stack &insert elements to array
       res[i]=s.top();
       s.pop();
       i++;
   }
   for(int i=0;i<n;i++){        //sort array elements in ascending order
       for(int j=i+1;j<n;j++){
           if(res[j]<res[i]){
               int tmp=res[i];
               res[i]=res[j];
               res[j]=tmp;
           }
       }
   }
   for(int i=0;i<n;i++){           //again push back all elements
        s.push(res[i]);
   }
}


// ------------------------------------------------------------------------------------

// GFG Sort a Stack with Recursion:

Given a stack, the task is to sort it such that the top of the stack has the greatest element.

Example 1:

Input:
Stack: 3 2 1
Output: 3 2 1

// Approach -1:
// Insert method:
void insert(stack<int> s,int tmp){
    // base condition for insert:
    if(s.size()==0 || s.top()<=tmp){
        s.push(tmp);
        return;
    }
    int val=s.top();
    s.pop();
    insert(s,tmp);
    s.push(val);
    return;
}

void SortedStack :: sort(stack<int> s)
{
   //Your code here
//   base condition for sort:
if(s.size()==1)return ;

// tmp to hold top most value of stack:
int tmp=s.top();
s.pop();

// recursive calls:
sort(s);
insert(s,tmp);
return;
}


// Approach-2:
void sorted(stack<int >&s,int size){
    // if stack has 1 or less elements: already sorted:
    if(size<=1)return;
    
    // hold top elemnt:
    int topEle=s.top();
    s.pop();
    
    // recursive call to sort rest of stack:
    sorted(s,size-1);
    
    // insert the top elemnt at correct position:
    stack<int >tmp;
    while(!s.empty() && s.top()>topEle){
        tmp.push(s.top());
        s.pop();
    }
    s.push(topEle);
    while(!tmp.empty()){
        s.push(tmp.top());
        tmp.pop();
    }
    return;
}

void SortedStack :: sort()
{
 sorted(s,s.size());
}

// Runtime:0.0 ms.