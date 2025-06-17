#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr1[n];
    int arr2[m];
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    for(int j=0; j<m; j++){
        cin>>arr2[j];
    }

    int i=0;
    int j=0;
    int count = 0;
    for(i;i<n;i++){
        int target = i;
        int s=0;
        int e=m-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(arr2[mid] == target){
                count++;
                
            }
        }
    }
}