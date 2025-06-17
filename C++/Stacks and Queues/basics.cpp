#include<bits/stdc++.h>
using namespace std;


//implementing stack using array
class Stack{
    public:
    int top;
    int size;
    int * arr;
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int value){
        top++;
        if(top<size){
            arr[top] = value;
        }else{
            cout<<"Stack Overflow";
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }else{
            cout<<"Stack is empty"<<endl;
        }
    }
    void peek(){
        cout<<arr[top]<<endl;
    }

};

class Queue{
    public:
    int size = 10;
    int que[10];
    int currSize = 0;
    int start = -1,end = -1;


    void push(int x){
        if(currSize == size) return;
        if(currSize == 0){
            start = 0;
            end = 0;
        }
        else end = (end+1)%size;
         
        que[end] = x;
        currSize++;
    }
    int pop(){
        if(currSize == 0) return;
        int ele = que[start];
        if(currSize == 1) start = end = -1;
        start =  (start+1) % size;
        currSize--;

        return ele;
    }


};
// stack using queue
class Stakc1{
    queue<int> q;
    int size;

    void push(int x){
        size= q.size();
        q.push(x);
        for(int i=0;i<size;i++){
            q.push(q.top());
            q.pop(q.top());
        }
    }
};
int main(){
    Stack s1(5);

    s1.push(10);
    s1.push(20);
    s1.push(30);

    s1.peek();
    s1.pop();
    s1.peek();

    return 0;
}