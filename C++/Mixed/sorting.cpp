#include<bits/stdc++.h>
using namespace std;

void bubble(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
}
void selection(int arr[], int n){
    for(int i=0; i<n; i++){
        int mini = i;
        for(int j=i; j<n; j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];

    selection(arr,n);
    for(int i=0; i<n; i++){
        
        cout<<arr[i]<< " ";
    }
}