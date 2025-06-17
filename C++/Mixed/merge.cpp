#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr,int l,int r,int mid){
    int left=l;
    int right=mid+1;
    vector<int> temp;
    while(left<=mid && right<=r){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=r){
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = l; i <= r; i++) {
        arr[i] = temp[i - l];
    }
}

void mS(vector<int> &arr,int l,int r){
    if (l==r) return;
    int mid=(l+r)/2;
    mS(arr,l,mid);
    mS(arr,mid+1,r);
    merge(arr,l,r,mid);

}

int main(){
    vector<int> arr={33,6,7,3,2,99,5};
    mS(arr,0,6);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}