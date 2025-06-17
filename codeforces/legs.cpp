#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n;
    
    while(t--){
        int ans = 0;
        cin>>n;
        if(n%4 >=2){
            ans+=1;
        }
        ans+=n/4;
        cout<<ans<<endl;
    }
    
}