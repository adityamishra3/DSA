#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            arr.push_back(a);
        }
        double sum = 0;
        sum = accumulate(arr.begin(),arr.end(),sum);
        double maxi = *max_element(arr.begin(),arr.end());
        int ans = max(maxi,((sum+x-1)/x));
        cout<<ans<<endl;
    }
}