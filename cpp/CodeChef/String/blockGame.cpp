// Codechef - string - The Block Game:
/*
The citizens of Byteland regularly play a game. They have blocks each denoting some integer from 0 to 9. These are arranged together in a random manner without seeing to form different numbers keeping in mind that the first block is never a 0. Once they form a number they read in the reverse order to check if the number and its reverse is the same. If both are same then the player wins. We call such numbers palindrome.

Ash happens to see this game and wants to simulate the same in the computer. As the first step he wants to take an input from the user and check if the number is a palindrome and declare if the user wins or not. 

Input
The first line of the input contains T, the number of test cases. This is followed by T lines containing an integer N.

Output
For each input output "wins" if the number is a palindrome and "loses" if not, in a new line.

Constraints
1<=T<=20
1<=N<=20000

Sample 1:
Input
3
331
666
343

Output
loses
wins
wins
*/

// COde:
#include <iostream>
using namespace std;

bool isPalindrome(int N){
    int rem=0,rev_num=0;
    int num=N;
    while(num>0){
        rem=num%10;
        rev_num=(rev_num*10)+rem;
        num=num/10;
    }
    if(N==rev_num)return true;
    else return false;
}
int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    bool res=false;
	    res=isPalindrome(N);
	    if(res==true){
	    cout<<"wins"<<endl;
	    }
	    else {
	        cout<<"loses"<<endl;
	    }
	}
	return 0;
}
