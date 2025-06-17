#include<iostream>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>
using namespace std;


void priorityQueue(){
    //MAX HEAP
    priority_queue<int> maxHeaP;

    //Min heap
    priority_queue<int , vector<int> ,greater<int> > minHeaP;

    maxHeaP.push(10);
    maxHeaP.push(2);
    maxHeaP.push(3);
    maxHeaP.push(5);

    int n = maxHeaP.size();

    for(int i=0; i<n; i++){
        cout<<maxHeaP.top()<<endl;
        maxHeaP.pop();
    }cout<<endl;

    
    minHeaP.push(10);
    minHeaP.push(2);
    minHeaP.push(3);
    minHeaP.push(5);
    n = minHeaP.size();
    for(int i=0; i<n; i++){
        cout<<minHeaP.top()<<endl;
        minHeaP.pop();
    }cout<<endl;
}
void queue1(){

    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front();
}
void stack1(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.empty()<<endl;
}
void list1(){
    list<int> l;
    list<int> l2(l); //1st list copied in the new list
    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<endl;
    }
    l.erase(l.begin());
    for(int i:l){
        cout<<i<<endl;
    }
}
void doublyEndedQueue(){
    deque<int> d;

    d.push_back(10);
    d.push_front(20);
    for(int i:d){
        cout<<i<<endl;
    }cout<<endl;
    d.pop_back();
    for(int i:d){
        cout<<i<<endl;
    }

    d.erase(d.begin(), d.begin()+1);//we need to pass a range and so this range will only delete the first element

}
void vec(){
    vector<int> v(5,1);//here the size of the vector is 5 and all the elements are initialised with 1;
    v.push_back(5);

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(1);

    cout<<v.size()<<endl;

    

    for(int i=0; i<v.size(); i++){
        cout<<v.at(i);
    }
    cout<<endl;
    v.pop_back();
    for(int i=0; i<v.size(); i++){
        cout<<v[i];
    }
    cout<<endl;

    cout<<v.front()<<endl;

    cout<<v.back()<<endl;

    v.clear();//only size becomes 0 not the capacity
}

int main(){
    priorityQueue();
}