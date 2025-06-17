#include<iostream>
#include<vector>
using namespace std;

int count=0;
void print(){
    if(count==3){
        return;
    }
    cout<<count++<<endl;
    print();
}
//parameterised recussion calls 
//summation of number n
void summation(int n,int sum){
    if(n<1){
        cout<<sum<<endl;
        return;
    }
    summation(n-1,sum+n);
}

//functional recurssion, gives same result as the parameterised function but only the number is passed without passing the sum.
int funcSum(int n){
    if(n==0){
        return 0;
    }
    return n+funcSum(n-1);
    //here the function will be called recurssively until it reaches the vlue of 0 and that function will then return the value 0 to the prev function and that will perform n+f(n) and return the corresponding value of the prev function and so on to perform all the recurssive functions.
    //Write your code according to the base condition that will be returned while backtracking.

}
//factorial of n
int fact(int n){
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}
//palindrome using recurssion 
bool palindrome(string s, int i){
    if(i>=s.size()/2){
        return true;
    }
    if(s[i]!=s[s.size()-i-1]){
        return false;
    }
    return palindrome(s,i+1);
}

//multiple recurssion calls to solve fibonacci series
int fib(int n){
    if(n<=1){
        return n;
    }
    int first = fib(n-1);
    int second = fib(n-2);

    return (first+second);
}
int main(){
    int n = 2;
    cout<<fib(n)<<endl;
}