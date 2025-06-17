#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> inp;
        for(int i=0; i<n;i++){
            string row;
            cin>>row;
            for(int j=0; j<4;j++){
                if(row[j]=='#') inp.push_back(j);
            }
        }
        for(int i=n-1; i>=0; i--){
            cout<<inp[i]+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}