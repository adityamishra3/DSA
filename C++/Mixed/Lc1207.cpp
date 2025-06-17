#include<iostream>
#include <vector>
#include <climits>
using namespace std;
 bool uniqueOccurrences(vector<int>& arr) {
        vector<int> ans;
        int count = 0,k = 0;
        for(int i=0; i<arr.size(); i++){
            count = 0;
            for(int j=i+1; j<arr.size(); j++){
                if(arr[i] == arr[j] && i!=j && ((arr[i]&&arr[j])>=-1000)){
                    count++;
                    arr[j] = INT_MIN;
                }
                ans.push_back(count);
                arr[i] = INT_MIN;
            }
        }
        for(int i=0; i<ans.size();i++){
            for(int j=0;j<ans.size();j++){
                if(arr[i] == arr[j]) return false;
            }
        }
        return true;
    }
int main(){
    
    vector<int> arr;
    int n,a;
    cout<<"Enter the number of elements in input vector"<<endl;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        arr.push_back(a);
    }
    uniqueOccurrences(arr);
}