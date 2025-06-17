#include<iostream>
using namespace std;


int getlength(char name[]){
    int count = 0;
    for(int i=0; name[i]!= '\0'; i++){
        count++;
    }
    return count;

}
//reverse a string
void reverse(char name[], int n){
    int s = 0;
    int e = n-1;

    while(s<e){
        swap(name[s++],name[e--]);
    }
}
int main(){

    char name[20];//created an array of type character 
    cout<<"Enter a name"<<endl;
    cin>>name;
    //name[2] = '\0'; // null character
    int len = getlength(name);
    reverse(name, len);
    cout<<name<<endl;
    return 0;
}