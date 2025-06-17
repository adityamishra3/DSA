#include<bits/stdc++.h>
using namespace std;

/*
    Print all permutations of a string keeping the sequence but changing cases.

    Examples: 

    Input : ab
    Output : AB Ab ab aB

    Input : ABC
    Output : abc Abc aBc ABc abC AbC aBC ABC
*/
void solve(string inp, string op, set<string> &ans){
    if(inp.length()==0){
        ans.insert(op);
        return;
    }
    string op1 = op;
    string op2 = op;
    // op1.push_back(tolower(inp[0]));   
    // op2.push_back(toupper(inp[0]));
    // inp.erase(0,1);
    if(isdigit(inp[0])){
        op1.push_back(inp[0]);    
        op2.push_back(inp[0]);    
    }
    else{
        op1.push_back(tolower(inp[0]));
        op2.push_back(toupper(inp[0]));
    }
    inp = inp.substr(1);
    solve(inp,op1,ans);
    solve(inp,op2,ans);
    return;
}

int main(){
    string inp;
    cin>>inp;
    string op="";
    set<string> ans;
    solve(inp,op,ans);
    for(auto it: ans){
        cout<<it<<" "<<endl;
    }
}