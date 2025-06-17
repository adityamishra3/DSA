#include<iostream>
using namespace std;

// when we declare anything globally, we can declare the hash array with maximum size of 10^7 but in int main the max size can only be 10^6.
// Also whenever we declare the hash globally, we dont need to assign it with 0 as when an array is declared globally, it automatically assigned with 0, unlike in int main where it is given some garbage values.

int main(){
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0; i<n;i++){
    //     cin>> arr[i];
    // }
    // int hashh[10] = {0};
    // cout<<"Input completed"<<endl;
    // for(int i=0; i<n; i++){
    //     hashh[arr[i]]++;
    // }
    // for(int i=0; i<10; i++){
    //     cout<<hashh[i]<<",";
    // }
    string s;
    cin >> s;
    int n = s.size();
    int charHashed[26] = {0};
    for(int i=0; i<n; i++){
        charHashed[s[i]-'a']++; // here the s[i] is converted into its ascii value which is an integer. and total character is 256 and so we will subtract the value of the small case letter 'a' from it as we are only considering lower case letters.
    }
    cout<<"Printing the hashed array"<<endl;

    for(int i=0; i<26;i++){
        cout<<charHashed[i]<<',';
    }


    return 0;
}