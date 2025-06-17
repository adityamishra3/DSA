#include <iostream>
#include <vector>
using namespace std;

int findLastChannel(int N, int K) {
    vector<int> channels(N);  
    for (int i = 0; i < N; i++) channels[i] = i + 1;

    int currentIndex = 0;

    while (channels.size() > 1) {
        currentIndex = (currentIndex + K - 1) % channels.size(); 
        channels.erase(channels.begin() + currentIndex);      
    }

    return channels[0]; 
}

int main() {
    int N, K;
    cin >> N >> K;
    cout << findLastChannel(N, K) << endl;
    return 0;
}
