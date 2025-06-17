#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    for(int i=1; i<4; i++){
        if(i!=x && i!=y){
            cout<<i<<endl;
        }
    }
    return 0;
}