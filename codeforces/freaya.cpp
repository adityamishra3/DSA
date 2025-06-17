#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        int xRem = x%k;
        int yRem = y%k;
        int xMoves = x/k;
        int yMoves = y/k;
        if(xRem!=0)xMoves++;
        if(yRem!=0)yMoves++;
        int ans;
        if(xMoves>yMoves){
            int extra = (abs(xMoves-yMoves))*2;
            ans = 2*(yMoves)+extra-1;
        }
        else{
            int extra = (abs(xMoves-yMoves))*2;
            ans = 2*(xMoves)+extra;
            
        }
        cout<<ans<<endl;
    }
    return 0;
}