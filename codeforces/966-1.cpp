#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n , k;
        cin>>n>>k;
        long long arr[n];
        for(int i=1;i<=n;i++){
            long long ele = i;
            for(int j=0;j<i-1;j++){
                ele *= i;
            }
            arr[i-1] = ele;
        }
        int leaves = 0;
        for(int i=0;i<n;i++){
            leaves+=arr[i];
            if(i >= k && i-k >= 0){
                arr[i-k]=0;
            }
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            // cout<<i+1<<"->"<<arr[i]<<",";
            ans+=arr[i];
        }
        if(ans%2==0){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
        
    }
    return 0;
}