#include<iostream>
using namespace std;


/*
    1. Print 1 to N
    2. Print N to 1
    3. Print 1 to N using backtracking
    4. Print N to 1 using backtracking

*/

// 1. Print 1 to N
//Time and space complexity both will be O(n).
void oneToN(int i,int n){
    if(i == n){
        return;
    }
    cout<<i<<endl;
    oneToN(i+1,n);
}

// Print N to 1
//Time and space complexity both will be O(n).
void nToOne(int n,int i){
    if(n<i){
        return;
    }
    cout<<n<<endl;

    nToOne(n-1,i);
}

//Print 1 to N using backtracking
// here since the print line is after the function call so the print line will only be executed once all the function calls are completed and once all the function call are executed the print line will be executed. Thats why this is called backtracking

void oneToNUsingBacktracking(int i,int n){
    if(i<1){
        return;
    }
    oneToNUsingBacktracking(i-1,n);
    cout<<i<<endl;
}


//Print N to 1 using backtracking

void nToOneUsingBacktracking(int n, int i){
    if(i>n){
        return;
    }
    nToOneUsingBacktracking(n,i+1);
    cout<<i<<endl;
}


int main(){

    nToOneUsingBacktracking(3,0);
    return 0;
}