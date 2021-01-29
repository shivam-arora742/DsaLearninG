//gfg-stack question-evaluate postfix expression
// The main function that returns value of a given postfix expression
int evaluatePostfix(string S)
{
    // Your code here
stack<int>result;
    int n=S.length();
    for(int i=0;i<n;i++){
        if(S[i]=='+'){
            int x=result.top();
            result.pop();
            int y=result.top();
            result.pop();
            result.push(y+x);
        }
        else if(S[i]=='-'){
            int x=result.top();
            result.pop();
            int y=result.top();
            result.pop();
            result.push(y-x);
        }
        else if(S[i]=='*'){
            int x=result.top();
            result.pop();
            int y=result.top();
            result.pop();
            result.push(y*x);
        }
        else if(S[i]=='/'){
             int x=result.top();
            result.pop();
            int y=result.top();
            result.pop();
            result.push(y/x);
        }
        else{
            int a=S[i]-'0';
            result.push(a);
        }
    }
    int value=result.top();
    result.pop();
    return value;
}
// Execution time:0.01s
