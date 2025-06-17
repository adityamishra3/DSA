#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n,m;
    cin>>n>>m;
    vector<string> v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int count = 0;
    for(auto it:v){
        if(it.length()>m) return 0;
        m -= it.length();
        count++;
    }
    return count;

}

int main(){
    int t;
    cin>>t;
    while(t--) cout<<solve()<<endl;
}