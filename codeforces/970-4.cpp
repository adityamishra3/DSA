#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int gold = 0;
        int count = 0;
        for(int i=0;i<n;i++){
            if(arr[i]>=k){
                gold+=arr[i];
            }
            if(arr[i]==0 && gold>0){
                gold-=1;
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}