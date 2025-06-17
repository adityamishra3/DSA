#include<iostream>
using namespace std;

// Sum of first N numbers.
// 1st way is parameterised and 2nd is functional way.

void paramSum(int n,int sum){
    if(n<1){
        cout<<sum<<endl;
        return;
    }
    paramSum(n-1,sum+n);
}

//Functional way of summing 1 to N using recurssion
// ideal way of writing a recurssion code where we write the base case and use the value of that base case to solve the furthur problem

// here we are breaking the problem into subproblems and since we know the value of the base case we use it to compute the furthur problems.
int funcSum( int n){
    if(n==1){
        return 1;
    }
    return n+funcSum(n-1); // the funsSum(n-1) comes with a value from the furthur recurssive calls and then return the answer.
}


// Factorial of N
int fact(int n){
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}


int main(){

    cout<<fact(5)<<endl;
    return 0;
}