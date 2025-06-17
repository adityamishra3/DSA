#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[6] = {16,17,4,3,5,2};
    int n = 6;
    vector<int> ans;
        int count = 0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(arr[i]<arr[j]){
                    cout<<count<<endl;
                    count++;
                    cout<<"code broke"<<endl;
                    break;
                } 
                cout<<count<<endl;
            }
            if(count<1) {
                cout<<"Here!"<<endl;
                ans.push_back(arr[i]);
            }
            count = 0;
        }
        for(auto it: ans){
            cout<<it<<",";
        }
}