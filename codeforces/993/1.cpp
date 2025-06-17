#include<bits/stdc++.h>
using namespace std;


int solve(){
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> ans(n);
    int mode = 0;
    unordered_map<int,int> freq;
    for(auto it:v){
        freq[it]++;
    }
    for(auto it:freq){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
    
}

int main(){
    int t;
    cin>>t;

    while(t--)cout<<solve()<<endl;
}