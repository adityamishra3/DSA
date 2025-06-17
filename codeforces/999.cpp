#include<bits/stdc++.h>
using namespace std;

string ans(int n){
    if(n == 1 || n==3) return "-1";
    if(n == 2) return "66";
    if(n==4) return "3366";
    string temp;
        if(n%2==0){
            for(int i=0;i<n-4;i++){
                temp+='3';
            }
            temp+="3366";
        }else{

            for(int i=0;i<n-4;i++){
                temp+='3';
            }
            temp+="6366";
        }
    return temp ;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string ans1 = ans(n);
        cout<<ans1<<endl;

    }
}