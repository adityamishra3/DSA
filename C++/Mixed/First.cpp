#include<iostream>
#include<vector>
using namespace std;

void findSingle(int arr[],int size){
    int count;
    for(int i=0 ; i<size;i++){
        count = 0;
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
                break;
            }
        }
        if(count = 0){
            cout<<arr[i]<<endl;
        }
    }
}
int binarySearch(vector<int>& arr,int val){

    int start = 0;
    int end = arr.size()-1;
    int mid;

    while(start<=end){
        mid = start+(end-start)/2;
        if(arr[mid] == val){
            return mid;
        }else if(arr[mid] > val){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
}

int pivot1(vector<int>& arr){
    int s = 0;
    int e = arr.size()-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s =  mid+1; 
        }else if(arr[mid]<arr[arr.size()-1]){
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
}

int bs(vector<int>& arr,int start,int end,int target){
    int s = start;
    int e = end;
    int mid = s +(e-s)/2;

    while(s<=e){
        if(arr[mid] == target){
            return mid;
        }else if(arr[mid]>target){
            e = mid-1;
        }else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}

int search(vector<int>& nums, int target) {
    int n = nums.size()-1;
    int pivot = pivot1(nums); 

    if(nums[0]<=target){
        return bs(nums,0,pivot-1,target);
    }else{
        return bs(nums,pivot,n,target);
    }
}

int main(){
    vector<int> arr{7,8,9,2,3};
    cout<<search(arr,9)<<endl;
}