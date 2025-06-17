#include<bits/stdc++.h>
using namespace std;

string solve(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int oddSum = 0;
    int evenSum = 0;
    for(int i=0;i<n;i++){
        if(i%2==0) evenSum+=v[i];
        else oddSum+= v[i];

    }
    long long sum =0;
    for(auto it:v)sum+=it;

    if(sum%n != 0)return "NO";
    int num = sum/n;
    int oddCount = n/2;
    int evenCount = 0;
    if(n%2==0)evenCount = n/2;
    else evenCount = (n/2)+1;
    
    if(oddSum % oddCount != 0)return "NO";
    if(evenSum % evenCount != 0)return "NO";
    
    if(oddSum/oddCount != num || evenSum/evenCount!=num)return "NO";
    return "YES";
}

int main(){
    int t;
    cin>>t;
    while(t--) cout<<solve()<<endl;
}