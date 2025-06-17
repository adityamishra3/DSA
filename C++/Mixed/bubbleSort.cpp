#include<iostream>
using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){

    int arr[5] = {2,3,4,1,0};

    for(int i=1; i<5;i++){
        int minIndex = i;
         
        for(int j=0; j<4; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0; i<5; i++){
        cout<<arr[i]<<",";
    }cout<<endl;

}