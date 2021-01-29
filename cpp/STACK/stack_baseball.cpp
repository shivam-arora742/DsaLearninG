//LEETCODE--STACK--BASEBALL QUESTION
class Solution {
public:
    int calPoints(vector<string>& ops) {
        int n=ops.size();    //store size of string vector in variable n
        stack<int> result;   //create a stack of result.
        for(int i=0;i<n;i++){ //traverse the whole string vector.
             if(ops[i]=="+"){  //if encountered "+" take sum of top 2 elements & insert as new record.
                int a=result.top();
                 result.pop();
                int b=result.top();
                 result.push(a);
                result.push(a+b);
            }
            else if(ops[i]=="D"){   //if encountered "D" insert new record as (2*previous record).
                int x=result.top();
                 result.push(2*x);
            }
            else if(ops[i]=="C"){  //if encountered "C" remove a record from stack.
                result.pop();
            }
            else{                  //if encountered an string integer("1"): insert it as integer new record(1) in stack .
                int x=stoi(ops[i]);
                result.push(x);
                }
        }
        int sum=0;        //to store sum of elements in stack.
        while(result.empty()==false){   //again traverse the stack untill it becomes empty & add to sum;
            sum+=result.top();
            result.pop();
        }
        return sum;                   //return final sum.
    }
};
//runtime: 4ms
//memory usage:8.3mb
