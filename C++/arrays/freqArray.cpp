#include<bits/stdc++.h>
using namespace std;


int main(){
        vector<int> nums = {1,1,1,2,2,3};
        int k = 2;
        vector<int> ans;
        sort(nums.begin(),nums.end());
        map<int,int> mpp;

        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        int i=0; 
        map<int,int,greater<int>> map2;
        for(auto it: map2){
            
            map2[it.second] = it.first;
        }
        for(auto it:map2){
            if(k==0) break;
            k--;
            ans.push_back(it.second);
        }
        for(auto it: map2){
            cout<<it.first<<"->"<<it.second;
        }

}