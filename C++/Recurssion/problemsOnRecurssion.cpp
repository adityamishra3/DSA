#include<iostream>
using namespace std;

/*
    1. Reverse an array
    2. Check if string is palindrome or not
*/

void reveArray(int l, int r, int nums[]){
    if(l>=r){
        return;
    }
    swap(nums[l],nums[r]);
    reveArray(l+1,r-1,nums);
}
// doing it using one variable
void rev(int i,int n,int arr[]){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    rev(i+1,n,arr);
}

// check if the string is palindrome 

bool isPalindrome(int i,string str){
    int n = str.size();
    if(i>=n/2) return true;
    if(str[i]!=str[n-i-1]) return false;

    return isPalindrome(i+1,str);
}

int main(){
    cout<<isPalindrome(0,"racecar")<<endl;
}