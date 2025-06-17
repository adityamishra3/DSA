#include<iostream>
using namespace std;
int arr[10] = {10,32,234,433,12,321,1234,43,32,10};
int maxMin(int arr[],int start, int end){
    int max,min,mid;
    if(start==end){
        return max=min=arr[0];
    }else if(start == end-1){
        if(arr[0]>arr[1]){
            max = arr[0];
            min = arr[1];
        }else{
            max = arr[1];
            min = arr[0];
        }
        return max,min;
    }else{
        mid = (start+end)/2;

        maxMin(arr,start,mid);
        maxMin(arr,mid+1,end);
    }
    

}

int main(){
    int arr[10];
    int n = 10;
    cout<<"Hello world"<<endl;
    cout<<maxMin(arr,0,10)<<endl;
}