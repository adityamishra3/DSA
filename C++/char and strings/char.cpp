#include<bits/stdc++.h>
using namespace std;


char toLower(char ch){
    if(ch>='a'&&ch<='z'){
        return ch;
    }else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
void reverse(char name[],int n){
    int s = 0;
    int e = n-1;

    while(s<e){
        swap(name[s],name[e]);
        s++;
        e--;
    }
}
int getLength(char name[]){

    int count = 0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    // char name[10];
    // cin>>name;
    // int n = getLength(name);
    // reverse(name,n);
    // cout<<name<<endl;

    cout<<toLower('')<<endl;
    return 0;
}