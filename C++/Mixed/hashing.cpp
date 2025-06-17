#include<bits/stdc++.h>
using namespace std;

int main(){
    //Number hashing
    // int n;
    // cin>>n;
    // cout<<n<<endl;
    // int arr[n];
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    // //precompute and add the count of each number in the hash array.
    // int hashh[4] = {0};
    // for(int i=0; i<n; i++){
    //     hashh[arr[i]]+=1;
    // }
    // for(int i=0;i<13;i++){
    //     cout<<hashh[i]<<endl;
    // }
    // //Character hashing using array
    // string s;
    // cin>>s;
    // //pre computing -> creating a hash map
    // int hash[26] = {0}; //creating a hash map only for lower case letters
    // //max size of hash array in main function can only be 10^6 and globally it can be 10^7
    // for(int i=0; i<s.size(); i++){
    //     hash[s[i]-'a']++;
    // } 
    // int q;
    // cin>>q;
    // while(q--){
    //     char c;
    //     cin>>c;
    //     //fetching
    //     cout<< hash[c-'a'] <<endl;
    // }  
    
    //MAPS

    //to overcome the problem of the limited array size, we using maps and unordered maps (stl) in c++.
    // takes less memory compared to hashing and stores only the numbers which are actually there in the array unlike hashing which makes hash array of size 13 if there is a value of 12 in the main array and if the element is not there it returns the value of 0 but doesnt stores that value.
    // map-> key(number), value(frequency) 
    //map<int, int>
    //map stores all the values in sorted order.
    //Hash maps

    //Time complexity of a map
    //Storing and fetching in the map takes log(N) time complexty in all cases(best,avg,worst)
    //for unorderd map, best and avg is O(1) and worst is O(N) when collision happens and all the values are mapped at the same hash index.(Division Method(uses linear chaining))
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //precompute or creating the hash map
    map<int, int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }
    //iterating the map
    for(auto it : mpp){
        cout << it.first<<"->"<< it.second << endl;
    }
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        //fetch the number from the hash map
        cout<<mpp[num]<<endl;
    }
}