#include<bits/stdc++.h>
using namespace std;

int main(){
    int nums[3]={1,2,4};
    int k = 5;
    map<int,int> mpp;
    int max = INT_MIN;
    for(int i=0; i<3; i++){
        mpp[nums[i]]++;
    }
    for(int i=0; i<3; i++){
        while(k--){
            nums[i]+=1;
            if(mpp[nums[i]]!=0){
                mpp[nums[i]]++;
            }
        }
    }
    for(auto it:mpp){
        cout<< it.first<<"->"<<it.second<<endl;
    }
}