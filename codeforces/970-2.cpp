#include<bits/stdc++.h>
using namespace std;

int isSquare(int num){
    for(int i=1; i<=num/2;i++){
        if(i*i==num) return i;
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string inp;
        cin>>inp;
        int ans = isSquare(n);
        bool flag = true;
        if(ans!=0){
            for(int i=1; i<=ans-2; i++){
                if(inp[(ans*i)+2]=='0'){
                    for(int j=1; j<ans-2; j++){
                        if(inp[(ans+i)+2+j]=='0'){
                            flag = false;  
                            break;
                        }
                    }
                }
                else{
                    flag = false;
                }
                if(!flag) break;
            }
            if(flag){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}