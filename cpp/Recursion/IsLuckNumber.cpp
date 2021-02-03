//Microsoft Interview Problem
//User-function template for C++

// Complete the function
// n: Input n
// counter: variable has already been declared in driver code and initialized as 2
// Return True if the given number is a lucky number else return False

bool isLucky(int n, int counter) {
    // add code here
    if(counter>n){         //base case
        return true;
    }

    if(n%counter==0){    //check if number is removerd
        return false;
    }
    return isLucky(n-n/counter,counter+1);    //recursive call the function with updated value of element.
}
