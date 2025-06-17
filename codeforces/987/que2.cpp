#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int solve(const vector<int> &arr, const unordered_set<int> &brrSet) {
    unordered_map<int, int> freq; 
    for (int num : arr) {
        if (brrSet.find(num) == brrSet.end()) { 
            freq[num]++;
        }
    }


    int maxFreq = 0, result = -1;
    for (auto &pair : freq) {
        if (pair.second > maxFreq || (pair.second == maxFreq && pair.first > result)) {
            maxFreq = pair.second;
            result = pair.first;
        }
    }

    return result;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n), brr(n);
    unordered_set<int> brrSet;


    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> brr[i];
        brrSet.insert(brr[i]);
    }

    int result1 = solve(arr, brrSet);
    int result2 = solve(brr, unordered_set<int>(arr.begin(), arr.end()));
    cout << result1 << " " << result2 << endl;

    return 0;
}
