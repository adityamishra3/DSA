#include<bits/stdc++.h>
using namespace std;
// induction, base case, hypothese
// mostly used in trees and linked lists 
void print(int n){
    if(n == 0) return;
    cout<<n<<endl;
    print(n-1);
}
int fact(int n){
    if(n == 1) return 1; // base caseṇ
    int ans = fact(n-1); // hypotheses
    return n*ans; // induction
}

void insert(vector<int> &v,int temp){
    if(v.size() == 0 || v[v.size()-1]<=temp) {
        v.push_back(temp);
        return;
    }
    int val = v[v.size()-1];
    v.pop_back();
    insert(v,temp);
    v.push_back(val);
}
void sort(vector<int> &v){
    if(v.size() == 1) return;
    int temp = v[v.size()-1];
    v.pop_back();
    sort(v);
    insert(v,temp);
}
void insertInStack(stack<int> &st, int temp){
    if(st.empty() || st.top()<=temp) {
        st.push(temp); 
        return;
    }
    int val = st.top();
    st.pop();
    insertInStack(st,temp);
    st.push(val);
}   
void sortStack(stack<int> &st){
    if(st.size() == 1) return ;
    int temp = st.top();
    st.pop();
    sortStack(st);
    insertInStack(st,temp);
}

void solveMiddle (stack<int> &st,int k){
    //base case 
    if(k==1) {
        st.pop();
        return;
    }
    int val = st.top();
    st.pop();
    solveMiddle(st,k-1);
    st.push(val);

}
stack<int> remMiddle(stack<int> st,int size){
    if(size == 0) return st;
    int k = size/2+1;
    solveMiddle(st,k);
    return st;
}
void insert(stack<int> &st,int temp){
    if(st.size() == 0){
        st.push(temp);
        return;   
    }
    int val = st.top();
    st.pop();
    insert(st,temp);
    st.push(val);
}
void reverse(stack<int> &st){
    if(st.size() == 1) return;
    int top = st.top();
    st.pop();
    reverse(st);
    insert(st,top); // recurssive function to insert the element in the last position as it is the top element of the stack hence it will go in the first position.
}

int fibonacci(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibonacci(n-2)+fibonacci(n-1);
}
bool isPrime(int n){
    for(int i =2; i < n;i++){
        if(n%i  == 0){
            return false;
        }
    }

    return true;
}

int main(){
    cout<<isPrime(10)<<endl;
}