#include<iostream>
using namespace std;

int main(){
    int arr[7]={-2,-55,7,8,9,10,44};
    int large=arr[0];
    int slarge=0;
    for(int i=0;i<7;i++){
        if(arr[i]>large){
            slarge=large;
            large=arr[i];
        }
    }

    cout<<large<<slarge;
}