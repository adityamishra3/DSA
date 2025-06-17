// 189. Left Rotate Array by X places.

/*
    1. Start a loop where store the last integer in a variable and then right shift the whole array.
    2. run the loop X times and return the answer.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int k = 3;

    for(int i=0; i<k; i++){
        int temp = arr[7];
        for(int j=7 ; j>0; j--){
            arr[j] = arr[j-1];
        }
        arr[0] = temp;
    }

    for(int i=0; i<7; i++){
        cout<<arr[i]<<",";
    }

}