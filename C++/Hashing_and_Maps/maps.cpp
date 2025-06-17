// We use maps as the max limit of hashing is only 10^7 and for values over this we need to create maps.
// we can even use maps when the size of the array is not defined in advanced and we need to declare a data str without any size.

// To deal with all these problems, there are 2 things in c++ stl which are: 
// 1. maps and 2. unordered maps
// stores values in sorted order.
// Maps has 2 parts to it 
// key and value
//         data-type of key , data-type of value(value is the frequency)
// Map is defined by map<int,int> mpp;
// any data str can be a key in map but not in unordered maps(only individual ds i.e. cant have pair<int,int> as key but maps can have them)
// Time complexity for storing and fetching take O(log n) in all avg,best worst cases. 
// these data str are implemented using various methods like division method to store large data like 10^10 and soo on.
// In unordered maps, the values are not stored in sorted form which increases time.
// and hence the time complexity for storing and fetching in unordered maps  is O(1), in best and average time complexity but takes O(n) in worst case. 
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // precomputing 
    map<int,int> mpp;
    unordered_map<int,int> umpp;
    for(int i=0; i<n;i++){
        mpp[arr[i]] = i;
    }
    for(auto it: mpp){
        cout<<it.first<<" -> "<<it.second<<endl;
    }
    cout<<endl;
    cout<<mpp.size();
}