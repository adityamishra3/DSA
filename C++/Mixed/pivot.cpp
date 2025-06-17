#include<iostream>
#include<vector>
using namespace std;

int pivot(vector<int>& arr,int n){

    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s = mid+1;
        }else if(arr[mid]<arr[n-1]){
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return arr[s];
}
int main(){
    vector<int> arr{7,8,9,10,1,2};

    cout<<pivot(arr,6);
}
